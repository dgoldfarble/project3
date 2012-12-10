/*	
	/// COMMON 
	// I'm making a common buffer for both LSQ and IQ
	
	
Todo: 
	
*/		

module ISS	(	
			// inputs
			CLK, RESET, FREEZE,
				// IQ inputs
				IQ_pushReq_IN,
				IQ_pushData_IN,
				
				// LSQ inputs
				LSQ_pushReq_IN,
				LSQ_pushData_IN,				
				
			// outputs
				// IQ outputs
				IQ_full_OUT,
				
				// LSQ outputs
				LSQ_full_OUT
			);

parameter reg_specifier_bits = 6;
parameter ROB_pointer_bits = 6;

parameter RENISS_WIDTH = 0; // Width of the incoming data from Rename
parameter IDREN_WIDTH = 0;

input CLK;
input RESET;
input FREEZE;

//LSQ
input LSQ_pushReq_IN;
output reg LSQ_full_OUT;
input [RENISS_WIDTH-1:0] LSQ_pushData_IN;
output reg [RENISS_WIDTH-1:0] LSQ_popData_OUT;

//IQ
input IQ_pushReq_IN;
output reg IQ_full_OUT;
input [RENISS_WIDTH-1:0] IQ_pushData_IN;
output reg [RENISS_WIDTH-1:0] IQ_popData_OUT;

// forward data 
/*
input          [ 5: 0] fwd_reg_1;
input                  fwd_data_1_WB;
input          [ 5: 0] fwd_reg_2;
input                  fwd_data_2_WB;
input          [ 5: 0] LS_fwd_reg;
input                  LS_fwd_data_WB;*/

//==============================================================================
// CREATE COMMON IQ/LSQ ENTRY
//==============================================================================

parameter IQLSQ_WIDTH = 80; 
parameter IQLSQ_DEPTH = 4;

wire [RENISS_WIDTH-1:0] wRENISS_pushData;
wire [IQLSQ_WIDTH-1:0] wIQLSQ_pushData, wIQLSQ_popData;

wire wSrc2Rdy, wSrc1Rdy, wNeedDestReg, wImmSrc;
assign wNeedDestReg = wRENISS_pushData[149:149];
assign wSrc1Rdy = !busy_bits[wRENISS_pushData[98:93]];
assign wSrc2Rdy = wImmSrc || !busy_bits[wRENISS_pushData[104:99]];
assign wImmSrc = wRENISS_pushData[150];


/*	See REN.v for contents (section IQ/LSQ) */
assign wRENISS_pushData = (IQ_pushReq_IN)?IQ_pushData_IN:(LSQ_pushReq_IN)? LSQ_pushData_IN: 0;

assign wIQLSQ_pushData = {	
							wRENISS_pushData [44], 		// 103:103	1 link
							wRENISS_pushData [43], 		// 102:102	1 jumpReg
							wRENISS_pushData [42], 		// 101:101	1 jump
							wRENISS_pushData [41], 		// 100:100	1 branch
							wRENISS_pushData [40], 		// 099:099	1 MemWrite
							wRENISS_pushData [39], 		// 098:098	1 MemRead							
							wImmSrc,					// 097:097 Imm src			- LSQ & IQ
							wNeedDestReg,				// 096:096 Need Dest Reg?	- LSQ & IQ
							wRENISS_pushData[92:87],	// 095:090 dest reg			- LSQ & IQ
							wSrc2Rdy,					// 089:089 Src2 rdy			- IQ only
							wRENISS_pushData[104:99],	// 088:083 Src2 phys reg 	- IQ only
							wSrc1Rdy,					// 082:082 Src1 rdy 		- LSQ & IQ
							wRENISS_pushData[98:93],	// 081:076 Src1 phys reg 	- LSQ & IQ
							wRENISS_pushData[124:93],	// 075:044 32b signExt Imm	- LSQ & IQ
							wRENISS_pushData[92:87],	// 043:038 ALU control		- LSQ & IQ
							wRENISS_pushData[110:105],	// 037:032 ROB ptr			- LSQ & IQ
							wRENISS_pushData[31:00]		// 031:000 Instr			- LSQ & IQ
						 };

//==============================================================================
// BUSY REGISTER
//==============================================================================
	parameter phys_reg_specifier = 64;
	reg busy_bits [phys_reg_specifier-1:0];
	
	always @(posedge CLK) begin
//		if(!RESET)
//		busy_bits <= 0;
	end
//==============================================================================
// END
//==============================================================================


//==============================================================================
// LSQ begin
//==============================================================================

	//reg [IQLSQ_WIDTH-1:0] 	LSQ [1<<IQLSQ_DEPTH-1:0];
	//reg [IQLSQ_DEPTH-1:0] rLSQ_head, rLSQ_tail;
	
	wire wLSQ_pushReq, wLSQ_popReq, wLSQ_empty, wLSQ_full;
	wire [5:0] wLSQ_srcReg, wLSQ_destReg_IN;
	wire [IQLSQ_WIDTH-1:0] wLSQ_headData, wLSQ_tailData;
	
	assign LSQ_full_OUT 	= wLSQ_full;
	assign wLSQ_srcReg 		= wRENISS_pushData[98:93];
	assign wLSQ_destReg_IN 	= wRENISS_pushData[92:87];
	
	queue #(.DATA_WIDTH(IQLSQ_WIDTH),
			.ADDR_WIDTH(IQLSQ_DEPTH),
			.SHOW_DEBUG(0),
			.INIT_CODE(0),
			.QUEUE_NAME("Load/Store Queue"))
	LSQ (
			.clk(CLK),
			.reset(RESET),
			.pushReq_IN(wLSQ_pushReq),
			.data_IN(wLSQ_tailData),
			.fullFlag_OUT(wLSQ_full),
			
			.popReq_IN(wLSQ_popReq),
			.data_OUT(wLSQ_headData),
			.emptyFlag_OUT(wLSQ_empty),
			.flush_IN(0));
	
	
	
//==============================================================================
// end
//==============================================================================


//==============================================================================
// IQ begin
//==============================================================================	
	
	reg [1<<IQLSQ_DEPTH-1:0] 		IQ [IQLSQ_WIDTH-1:0];
	
	wire [3:0] PE_Request, PE_Grant;
	wire [15:0] request_bus, grant_bus;
	wire instruction_ready;
	
	assign request_bus = IQ[:][64];

	PE PE_top(FREEZE, PE_Request, PE_Grant, instruction_ready);
	PE PE0 (PE_Grant[0], request_bus[3:0], grant_bus[3:0], PE_Request[0]);
	PE PE1 (PE_Grant[1], request_bus[7:4], grant_bus[7:4], PE_Request[1]);
	PE PE2 (PE_Grant[2], request_bus[11:8], grant_bus[11:8], PE_Request[2]);
	PE PE3 (PE_Grant[3], request_bus[15:12], grant_bus[15:12], PE_Request[3]);
	

//==============================================================================
// END
//==============================================================================
	integer counter, pos;
	always @(posedge CLK) begin
		// LSQ pop					// src1 reg is ready
		if (!wLSQ_empty && !busy_bits[wLSQ_headData[081:076]]) begin
		
			// We are ready to pop. Should we?
			wLSQ_popReq <= 1;			
			wIQLSQ_popData <= wLSQ_headData;
			if (wLSQ_headData[96] /* Did it NEED a dest reg? */)
				busy_bits[wLSQ_headData[095:090]] <= 0; // Clear dest busy bit
				
		end else begin
			wLSQ_popReq <= 0;
		end
		
		// LSQ push
		if (!wLSQ_full) begin
			wLSQ_pushReq <= LSQ_pushReq_IN;
			wLSQ_tailData <= wIQLSQ_pushData;
			
			if (wNeedDestReg)
				busy_bits[wIQLSQ_pushData[095:090]] <= 1; // Set dest busy bit
				
		end else begin		
			wLSQ_pushReq <= 0;
		end
		
		
		
		/*
		if(LSQ[rLSQ_head][IQLSQ_WIDTH-1] == 1) begin // LSQ[rLSQ_head][IQLSQ_WIDTH-1] = ready
			wLSQ_popData <= LSQ[rLSQ_head][IQLSQ_WIDTH-2:0];
			busy_bits[wLSQ_destReg_OUT] <= 0;
			rLSQ_head <= rLSQ_head + 1;
		end
		// push
		if(LSQ_pushReq_IN) begin
			rLSQ_tail <= rLSQ_tail + 1;
			busy_bits[wLSQ_destReg_IN] <= 1;
			if(!busy_bits[wLSQ_srcReg])
				LSQ[rLSQ_tail][IQLSQ_WIDTH-1] <= 1;
			else
				LSQ[rLSQ_tail][IQLSQ_WIDTH-1] <= 0;
		end
		*/
		
		
		// IQ
		for(pos = 0; pos < 15; pos = pos + 1) begin
			if(grant_bus[pos]) begin
				wIQ_popData <= {IQ[pos][63:58],IQ[pos][56:51],IQ[pos][49:0]}
				for(counter = pos; counter < 15; counter = counter + 1) begin
					IQ[counter] <= IQ[counter + 1];
				end
			end
			IQ_Data
		end
		// forwarding
		// for(pos = 0; pos < 15; pos = pos + 1) begin
			// if((LSQ[pos][65:60] == fwd_reg_1) || (LSQ[pos][65:60] == fwd_reg_2) || (LSQ[pos][65:60] == LS_fwd_reg)
				// LSQ[pos][IQLSQ_WIDTH-1] <= 1;
			// if((IQ[pos][65:60] == fwd_reg_1) || (LSQ[pos][65:60] == fwd_reg_2) || (LSQ[pos][65:60] == LS_fwd_reg)
				// LSQ[pos][IQLSQ_WIDTH-1] <= 1;
			// if((IQ[pos][65:60] == fwd_reg_1) || (LSQ[pos][65:60] == fwd_reg_2) || (LSQ[pos][65:60] == LS_fwd_reg)
				// LSQ[pos][IQLSQ_WIDTH-1] <= 1;
			
		// end
	end
				

endmodule
	

	
