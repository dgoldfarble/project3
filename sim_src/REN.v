// Rename stage
module REN (	CLK,
				RESET,
				FREEZE,
				
				// to/from decode-rename queue
				tQ_IDREN_popReq_OUT,
				fQ_IDREN_popData_IN,
				fQ_IDREN_empty_IN,
				
				// IQ/LSQ
				tIQ_pushReq_OUT,
				tIQ_pushData_OUT,
				fIQ_full_IN,
				tLSQ_pushReq_OUT,
				tLSQ_pushData_OUT,
				fLSQ_full_IN,
				
				// ROB push interfaces
				fROB_full_IN,
				tROB_pushReq_OUT,
				tROB_pushData_OUT,
				fROB_curTail_IN,
				// tROB_probeIdx_OUT,
				// fROB_probeData_IN,
				// tROB_probePushReq_OUT,
				// tROB_probePushData_OUT,
				
				// Rename RAT
				tRenRatOverwrite_IN,
				tRenRatOverwriteData_IN,
				
				// freelist
				tFreeL_pushReq_IN,
				tFreeL_pushData_IN,
				fFreeL_full_OUT
				);
	
		
	// PARAMETERS
	// Change these in the instantiation. Not here.
	parameter IDREN_POP_WIDTH 	= 0;
	parameter PHYSREGS_DEPTH 	= 0;
	parameter ARCHREGS_DEPTH 	= 0;
	parameter RENISSUE_WIDTH 	= 0;
	parameter RENROB_DATAWIDTH 	= 0;
	parameter ROB_ADDRWIDTH		= 0;
	
	parameter RENRAT_WIDTH 		= PHYSREGS_DEPTH;
	parameter RENRAT_DEPTH 		= ARCHREGS_DEPTH;
	
	// OUTPUTS
	
	output reg							tQ_IDREN_popReq_OUT;
	output reg							fFreeL_full_OUT;
	output reg							tIQ_pushReq_OUT;
	output reg							tLSQ_pushReq_OUT;
	output reg							tROB_pushReq_OUT;
	// output 								tROB_probePushReq_OUT;
	
	output reg [RENISSUE_WIDTH - 1:0] 	tIQ_pushData_OUT;
	output reg [RENISSUE_WIDTH - 1:0] 	tLSQ_pushData_OUT;
	
	output reg [RENROB_DATAWIDTH - 1:0] tROB_pushData_OUT;
	// output reg [ROB_ADDRWIDTH-1:0]		tROB_probeIdx_OUT;
	// output reg [RENROB_DATAWIDTH-1:0] 	tROB_probePushData_OUT;
	
	// INPUTS
	input CLK, RESET, FREEZE;
	
	input								tRenRatOverwrite_IN;
	input								tFreeL_pushReq_IN;	
	input								fQ_IDREN_empty_IN;	
	input 								fIQ_full_IN;
	input 								fLSQ_full_IN;
	input 								fROB_full_IN;
	
	input [PHYSREGS_DEPTH-1:0]			tFreeL_pushData_IN;
	input [RENRAT_WIDTH-1:0] 			tRenRatOverwriteData_IN [(1<<RENRAT_DEPTH)-1:0];
	input [IDREN_POP_WIDTH -1:0]		fQ_IDREN_popData_IN;
	input [ROB_ADDRWIDTH-1:0] 			fROB_curTail_IN,
	// input [RENROB_DATAWIDTH-1:0] 		fROB_probeData_IN;

	reg rIQoverflow, rLSQoverflow;	
	reg [RENRAT_DEPTH-1:0] renratctr;
	reg [RENRAT_WIDTH-1:0] renrat [(1<<RENRAT_DEPTH)-1:0];

	reg [RENRAT_WIDTH-1:0] rPhysDestReg;
	reg [RENRAT_WIDTH-1:0] rPhysSrc1Reg;
	reg [RENRAT_WIDTH-1:0] rPhysSrc2Reg;
	reg rFreeLUnderflow;

	
		
	// // // // // // // // // // // // // // // // // // // // // // // // //
	// FREEZE/CarryON logic
	// 		RENAME connected to Q_IDREN, IQ, LSQ, ROB externally
	//							and freelist internally
	//		FREEZE is connected to Q_IDREN and ROB only. The rest are connected
	//		to wCarryOn
	// // // // // // // // // // // // // // // // // // // // // // // // //
	
	wire wCarryOn;
	assign wCarryOn = RESET && !FREEZE && !rFreeLUnderflow && !rIQoverflow && !rLSQoverflow;
	
	
	// // // // // // // // // // // // // // // // // // // // // // // // //
	// FROM DECODE QUEUE
	// // // // // // // // // // // // // // // // // // // // // // // // //
	wire [31:0] wInstr;
	wire [1:0] 	wIsRegWrite;
	wire [4:0] 	wWrRegID;
	wire  		wIsMemRead, wIsMemWrite;
	
	assign wInstr 		= (tQ_IDREN_popReq_OUT)?fQ_IDREN_popData_IN[31:0]:0;
	assign wIsRegWrite 	= (tQ_IDREN_popReq_OUT)?(fQ_IDREN_popData_IN[33:32]):0;
	assign wWrRegID 	= (tQ_IDREN_popReq_OUT)?fQ_IDREN_popData_IN[38:34]:0;
	assign wIsMemRead 	= (tQ_IDREN_popReq_OUT)?fQ_IDREN_popData_IN[39]:0;
	assign wIsMemWrite 	= (tQ_IDREN_popReq_OUT)?fQ_IDREN_popData_IN[40]:0;
	// there are more things in the popped data. Use as required.

	assign tQ_IDREN_popReq_OUT = wCarryOn;
		
	
	// // // // // // // // // // // // // // // // // // // // // // // // //
	// IQ/LSQ
	// // // // // // // // // // // // // // // // // // // // // // // // //
	
	wire [RENISSUE_WIDTH-1:0] 	wPushDataIQLSQ;	
	
	assign wPushDataIQLSQ = {	fQ_IDREN_popData_IN [125],	// 	150:150 1 ALU Src (Imm flag)
								wDestRegReqd,				// 	149:149 1 Dest reg reqd
								fQ_IDREN_popData_IN [124:93],// 148:117 32 signExt Imm
								fQ_IDREN_popData_IN [92:87], // 116:111 6 ALU control
								fROB_curTail_IN,			//	110:105	6								
								rPhysSrc2Reg, 				//	104:099	6
								rPhysSrc1Reg, 				//	098:093	6
								rPhysDestReg,				//	092:087	6
								fQ_IDREN_popData_IN [86:55], // 086:055	32 PCA_IDREN
								fQ_IDREN_popData_IN [54:50], // 054:050	5 readRegisterA1_IDEXE
								fQ_IDREN_popData_IN [49:45], // 049:045	5 readRegisterB1_IDEXE
								fQ_IDREN_popData_IN [44:44], // 044:044	1 link_IDREN
								fQ_IDREN_popData_IN [43:43], // 043:043	1 jumpReg_IDREN
								fQ_IDREN_popData_IN [42:42], // 042:042	1 jump_IDREN
								fQ_IDREN_popData_IN [41:41], // 041:041	1 branch_IDREN
								fQ_IDREN_popData_IN [40:40], // 040:040	1 MemWrite1_IDEXE
								fQ_IDREN_popData_IN [39:39], // 039:039	1 MemRead1_IDEXE
								fQ_IDREN_popData_IN [38:34], // 038:034	5 wWrRegID_IDREN
								fQ_IDREN_popData_IN [33:32], // 033:032	2 isRegWrInstr_IDREN
								fQ_IDREN_popData_IN [31:00]};// 031:000	32 Instr1_IDREN	
								
	
	// Overflow flags for LSQ and IQ
	
	always @(posedge CLK) begin
		if (!RESET) begin
			rIQoverflow <= 0;	
			rLSQoverflow <= 0;
		end else begin
		
			if (!rIQoverflow) begin
				rIQoverflow <= (!wIsMemRead && !wIsMemWrite) && fIQ_full_IN;
			end else begin
				rIQoverflow <= fIQ_full_IN;
			end

			if (!rLSQoverflow) begin
				rLSQoverflow <= (wIsMemRead || wIsMemWrite) && fLSQ_full_IN;
			end else begin
				rLSQoverflow <= fLSQ_full_IN;
			end			
		end
	end
	
	wire wIQpushable, wLSQpushable;
	assign wIQpushable = !fIQ_full_IN && (!wIsMemRead && !wIsMemWrite);
	assign wLSQpushable = !fLSQ_full_IN && (wIsMemRead || wIsMemWrite);
	
	// Put data at the output of LSQ/IQ
	always @(posedge CLK) begin
		if (wCarryOn) begin
			tIQ_pushReq_OUT <= wIQpushable;
			tIQ_pushData_OUT <= wPushDataIQLSQ;
			
			tLSQ_pushReq_OUT <= wLSQpushable;
			tLSQ_pushData_OUT <= wPushDataIQLSQ;
		end else begin
			tIQ_pushReq_OUT <= 0;			
			tLSQ_pushReq_OUT <= 0;
		end
	end
	
	// // // // // // // // // // // // // // // // // // // // // // // // //
	// ROB
	// // // // // // // // // // // // // // // // // // // // // // // // //
	wire [RENROB_DATAWIDTH - 1:0] wROB_pushData;
	
	assign wROB_pushData = {wPushDataIQLSQ};
	
	always @(posedge CLK) begin
		if (wCarryOn) begin
			
			// Whether or not ROB is full is being checked in wCarryOn(FREEZE)
			// may need to add more interfaces			
			
			tROB_pushReq_OUT <= (wIQpushable || wLSQpushable);
			tROB_pushData_OUT < wROB_pushData;
			
		end else begin
			tROB_pushReq_OUT <= 0;
			tROB_pushData_OUT <= 0;
		end
	end
	
	// // // // // // // // // // // // // // // // // // // // // // // // //
	// RENAME RAT
	// // // // // // // // // // // // // // // // // // // // // // // // //
	
	wire	wDestRegReqd;
	assign wDestRegReqd = (|wIsRegWrite) || fQ_IDREN_popData_IN[44];// 44: link flag
	
	assign rPhysDestReg = wDestRegReqd?wQ_FreeL_popData:0;	
	assign rPhysSrc1Reg = renrat[fQ_IDREN_popData_IN[50:46]];	
	assign rPhysSrc2Reg = renrat[fQ_IDREN_popData_IN[45:41]];
	
	// write to rename rat
	always @(posedge CLK) begin
		if (!RESET) begin
			
			renrat [0] = 0;
			
		end else if(wCarryOn) begin
			if (tRenRatOverwrite_IN) begin

				// for (renratctr = 0; renratctr < 1<<RENRAT_DEPTH; renratctr = renratctr + 1) begin
					// renrat [renratctr] <= tRenRatOverwriteData_IN[renratctr];
				// end
				renrat <= tRenRatOverwriteData_IN;

			end else begin				
				if (wDestRegReqd && !wQ_FreeL_popReq) begin
				 	renrat[wWrRegID] <= rPhysDestReg;			 
				end			
			end
		end	
	end

	// // // // // // // // // // // // // // // // // // // // // // // // //
	// FREE LIST
	// // // // // // // // // // // // // // // // // // // // // // // // //
	
	wire 	wQ_FreeL_pushReq, wQ_FreeL_popReq, wQ_FreeL_empty, wQ_FreeL_full;
	wire 	[PHYSREGS_DEPTH-1:0] wQ_FreeL_pushData, wQ_FreeL_popData;
		

	
	assign wQ_FreeL_popReq = !wQ_FreeL_empty && wDestRegReqd;

	queue #(.DATA_WIDTH(PHYSREGS_DEPTH),
			.ADDR_WIDTH(PHYSREGS_DEPTH),
			.SHOW_DEBUG(0),
			.INIT_CODE(1),
			.QUEUE_NAME("FREELIST"))
	freelist (
			.clk(CLK),
			.reset(RESET),
			.pushReq_IN(wQ_FreeL_pushReq),
			.data_IN(wQ_FreeL_pushData),
			.fullFlag_OUT(wQ_FreeL_full),
			
			.popReq_IN(wQ_FreeL_popReq),
			.data_OUT(wQ_FreeL_popData),
			.emptyFlag_OUT(wQ_FreeL_empty),
			.flush_IN(0));
			
	// Free list underflow. Instr needs free reg, but we don't have any.
	// It should be used to stall everything in this stage.
	// Should be unstalled only if the freelist is no longer empty.
	// However it should not be HIGH until an instruction that needs a dest reg
	// comes along.
	always @(posedge CLK) begin
		if (!RESET) begin
			rFreeLUnderflow <= 0;		
		end else /* if (!FREEZE) */ begin
			if (!rFreeLUnderflow) begin
				rFreeLUnderflow <= wDestRegReqd && wQ_FreeL_empty;
			end else begin
				rFreeLUnderflow <= wQ_FreeL_empty;
			end			
		end
	end
	
	
	// COMMENTS//////////////////////////////////////////////////////////////
	parameter comment = 0;
	
	always  @ (posedge CLK) begin
	if (comment) begin
		$display(";;;;;;;;;;;;;;;;;;RENAME;;;;;;;;");
		$display("%x %x", rPhysDestReg, fQ_IDREN_popData_IN);
	end
	end
	
endmodule
