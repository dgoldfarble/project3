/*	LSQ:
	+--32b--+--6b--+--6b--+-16b-+--6b--+--6b--+1+ = 73
	| Instr | ROBP |  OP  | IMM |  SR  |  DR  |R|
	 0    31 32  37 38  43 44 59 60  65 66  71 72
	
	 F E D C B A 9 8 7 6 5 4 3 2 1 0
	---------------------------------
	| | | | | | | | | | | | | | | | |
	---------------------------------
	 ^							   ^
	 |							   |
	tail						  head
	
	
	IQ:
	+--32b--+--6b--+--6b--+-6b--+1+-6b--+1+--6b--+1+ = 65
	| Instr | ROBP |  OP  | SR1 |R| SR2 |R|  DR  |R|
	 0    31 32  37 38  43 44 49   51 56   58  63 64
	
Todo: 
	
*/		

module ISS	(	// inputs
				// outputs
			);

parameter reg_specifier_bits = 6;
parameter ROB_pointer_bits = 6;

parameter LSQWidth = 73; // 1 ready bit, 2 register specifiers, 16 immediate field, 1 ROB address;
//parameter IQWidth = LSQWidth
parameter LSQLength = 16;
parameter LSQ_Index_bits = 4;

parameter IQWidth = 65;
parameter IQLength = 16;
parameter IQ_Index_bits = 4;

input CLK;
input RESET;
input FREEZE;

//LSQ
input push_LSQ_IN;
input [LSQWidth-2:0] LSQ_Data_IN;
output reg LSQ_full_OUT;
output reg [LSQWidth-2:0] LSQ_Data_OUT;

//IQ
input push_IQ_IN;
input [IQWidth-2:0] IQ_Data_IN;
output reg IQ_full_OUT;
output reg [IQWidth-2:0] IQ_Data_OUT;

// forward data
input          [ 5: 0] fwd_reg_1;
input                  fwd_data_1_WB;
input          [ 5: 0] fwd_reg_2;
input                  fwd_data_2_WB;
input          [ 5: 0] LS_fwd_reg;
input                  LS_fwd_data_WB;

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

	reg [LSQWidth-1:0] LSQ [LSQLength-1:0];
	reg [LSQ_Index_bits-1:0] head, tail;
	
	wire wLSQ_empty;
	wire wLSQ_full;
	wire [5:0] LSQ_Source_Reg_IN, LSQ_Dest_Reg_IN, LSQ_Dest_Reg_OUT;
	wire [LSQWidth-1:0] wQ_LSQ_pushData;
	wire [LSQWidth-1:0] wQ_LSQ_popData;
	
	assign LSQ_Source_Reg_IN = LSQ_Data_IN[65:60];
	assign LSQ_Dest_Reg_IN = 	LSQ_Data_IN[71:66];
	assign LSQ_Dest_Reg_OUT =	LSQ_Data_OUT[71:66];
		
//==============================================================================
// end
//==============================================================================


//==============================================================================
// IQ begin
//==============================================================================	
	
	reg [IQLength-1:0] IQ [IQWidth-1:0];
	reg tail_pointer [IQIndex-1:0];
	
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
		// LSQ
		// pop
		if(LSQ[head][LSQWidth-1] == 1) begin // LSQ[head][LSQWidth-1] = ready
			LSQ_Data_OUT <= LSQ[head][LSQWidth-2:0];
			busy_bits[LSQ_Dest_Reg_OUT] <= 0;
			head <= head + 1;
		end
		// push
		if(push_LSQ_IN) begin
			tail <= tail + 1;
			busy_bits[LSQ_Dest_Reg_IN] <= 1;
			if(!busy_bits[LSQ_Source_Reg_IN])
				LSQ[tail][LSQWidth-1] <= 1;
			else
				LSQ[tail][LSQWidth-1] <= 0;
		end
		// IQ
		for(pos = 0; pos < 15; pos = pos + 1) begin
			if(grant_bus[pos]) begin
				IQ_Data_OUT <= {IQ[pos][63:58],IQ[pos][56:51],IQ[pos][49:0]}
				for(counter = pos; counter < 15; counter = counter + 1) begin
					IQ[counter] <= IQ[counter + 1];
				end
			end
			IQ_Data
		end
		// forwarding
		for(pos = 0; pos < 15; pos = pos + 1) begin
			if((LSQ[pos][65:60] == fwd_reg_1) || (LSQ[pos][65:60] == fwd_reg_2) || (LSQ[pos][65:60] == LS_fwd_reg)
				LSQ[pos][LSQWidth-1] <= 1;
			if((IQ[pos][65:60] == fwd_reg_1) || (LSQ[pos][65:60] == fwd_reg_2) || (LSQ[pos][65:60] == LS_fwd_reg)
				LSQ[pos][LSQWidth-1] <= 1;
			if((IQ[pos][65:60] == fwd_reg_1) || (LSQ[pos][65:60] == fwd_reg_2) || (LSQ[pos][65:60] == LS_fwd_reg)
				LSQ[pos][LSQWidth-1] <= 1;
			
		end
	end
				

endmodule
	

	
