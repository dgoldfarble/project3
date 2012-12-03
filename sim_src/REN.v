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
				
				// ROB
				fROB_full_IN,
				tROB_pushReq_OUT,
				tROB_pushData_OUT,
				
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
	parameter RENRAT_WIDTH 		= PHYSREGS_DEPTH;
	parameter RENRAT_DEPTH 		= ARCHREGS_DEPTH;
	parameter RENISSUE_WIDTH 	= 0;
	parameter RENROB_WIDTH 		= 0;
	
	// OUTPUTS
	output reg [RENISSUE_WIDTH - 1:0] 	tIQ_pushData_OUT;
	output reg [RENISSUE_WIDTH - 1:0] 	tLSQ_pushData_OUT;
	output reg [RENROB_WIDTH - 1:0] 	tROB_pushData_OUT;
	
	output reg							tQ_IDREN_popReq_OUT;
	output reg							fFreeL_full_OUT;
	output reg							tIQ_pushReq_OUT;
	output reg							tLSQ_pushReq_OUT;
	output reg							tROB_pushReq_OUT;
	
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
	assign wIsRegWrite 	= (tQ_IDREN_popReq_OUT)?fQ_IDREN_popData_IN[33:32]:0;
	assign wWrRegID 	= (tQ_IDREN_popReq_OUT)?fQ_IDREN_popData_IN[38:34]:0;
	assign wIsMemRead 	= (tQ_IDREN_popReq_OUT)?fQ_IDREN_popData_IN[39]:0;
	assign wIsMemWrite 	= (tQ_IDREN_popReq_OUT)?fQ_IDREN_popData_IN[40]:0;

	assign tQ_IDREN_popReq_OUT = wCarryOn;
	
	// // // // // // // // // // // // // // // // // // // // // // // // //
	// RENAME RAT
	// // // // // // // // // // // // // // // // // // // // // // // // //
	reg [RENRAT_DEPTH-1:0] renratctr;
	reg [RENRAT_WIDTH-1:0] renrat [(1<<RENRAT_DEPTH)-1:0];
	
	reg [RENRAT_WIDTH-1:0] curPhysReg;
	
	wire	wRenRatWriteEn;
	assign wRenRatWriteEn = (|wIsRegWrite);
	
	assign curPhysReg = wRenRatWriteEn?wQ_FreeL_popData:0;
	
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
				if (wRenRatWriteEn && !wQ_FreeL_popReq) begin
				 	renrat[wWrRegID] <= curPhysReg;				 
				end			
			end
		end	
	end

	// // // // // // // // // // // // // // // // // // // // // // // // //
	// FREE LIST
	// // // // // // // // // // // // // // // // // // // // // // // // //
	
	wire 	wQ_FreeL_pushReq, wQ_FreeL_popReq, wQ_FreeL_empty, wQ_FreeL_full;
	wire 	[PHYSREGS_DEPTH-1:0] wQ_FreeL_pushData, wQ_FreeL_popData;
		
	reg rFreeLUnderflow;
	
	assign wQ_FreeL_popReq = !wQ_FreeL_empty && wRenRatWriteEn;

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
				rFreeLUnderflow <= wRenRatWriteEn && wQ_FreeL_empty;
			end else begin
				rFreeLUnderflow <= wQ_FreeL_empty;
			end			
		end
	end
	
	
	// // // // // // // // // // // // // // // // // // // // // // // // //
	// IQ/LSQ
	// // // // // // // // // // // // // // // // // // // // // // // // //
	
	wire [RENISSUE_WIDTH-1:0] 	wPushDataIQLSQ;	
	assign wPushDataIQLSQ = {curPhysReg, fQ_IDREN_popData_IN};
	
	// Overflow flags for LSQ and IQ
	reg rIQoverflow, rLSQoverflow;	
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
	
	always @(posedge CLK) begin
		if (wCarryOn && (wIQpushable || wLSQpushable)) begin
			
			// Whether or not ROB is full is being checked in wCarryOn(FREEZE)
			// may need to add more interfaces
			
			tROB_pushReq_OUT <= 1;
			// setup data to be pushed and get the tail ptr
			
		end else begin
			tROB_pushReq_OUT <= 0;	
		end
	end
	
	// COMMENTS//////////////////////////////////////////////////////////////
	parameter comment = 0;
	
	always  @ (posedge CLK) begin
	if (comment) begin
		$display(";;;;;;;;;;;;;;;;;;RENAME;;;;;;;;");
		$display("%x %x", curPhysReg, fQ_IDREN_popData_IN);
	end
	end
	
endmodule
