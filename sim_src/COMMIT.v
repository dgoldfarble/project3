// COMMIT

/*
TO DO:

	SETUP DATA STRUCTURES:
		Retirement Rat									- done
		ROB												- done

	UPDATE ROB ENTRIES (finished bit, branch Misprediction etc)
		has to be done externally. 						- Interfaces in place
		
	MONITOR ROB HEAD ENTRY
		READ ENTRY, DECIDE WHETHER FIT FOR POPPING 		- done

		
	HANDLE SUCCESSFUL ROB POP
		DECODE ROB ENTRY								- not done
		UPDATE RETRAT									- not done
		UPDATE FREELIST									- not done
	
	HANDLE MISPREDICTION
		COPY RETRAT										- Connections in place
		Flush everything								- Connections in place
*/
module COMMIT ( CLK, RESET, FREEZE,
				
				//-------------------------------------------------------------
				// ROB
				//-------------------------------------------------------------
				fROB_full_OUT,	
				tROB_pushReq_IN,
				tROB_pushData_IN,
				fROB_curTail_OUT,
				tROB_probeIdx_IN,
				fROB_probeData_OUT,
				tROB_probePushReq_IN,
				tROB_probePushData_IN,
				
				tROB_probeSetFinBit_IN,
				tROB_probeSetExpBit_IN,
				tROB_probe_taken_branch,
				tROB_probe_target_PC,
				
				flushEm_OUT,
				
				copyRetRat_OUT,
				retRat_OUT
				);
				
				input CLK, RESET, FREEZE;
				
				//-------------------------------------------------------------
				// ROB input/output from others Rename
				//-------------------------------------------------------------
				parameter RENROB_DATAWIDTH = 0;
				parameter ROB_ADDRWIDTH = 0;
				
				input							tROB_pushReq_IN, tROB_probePushReq_IN
				input 							tROB_probeSetFinBit_IN, tROB_probeSetExpBit_IN;
				input 	[RENROB_DATAWIDTH-1:0] 	tROB_pushData_IN, tROB_probePushData_IN;
				input	[ROB_ADDRWIDTH-1:0]		tROB_probeIdx_IN;
				input 	[31:0]					tROB_probe_target_PC;
				input							tROB_probe_taken_branch;
				
				output 	[RENROB_DATAWIDTH-1:0] 	fROB_probeData_OUT;
				output  reg 					fROB_full_OUT;
				output	[ROB_ADDRWIDTH-1:0]		fROB_curTail_OUT;
				output	flushEm_OUT;
				
				//-------------------------------------------------------------
				// Retirement RAT
				//-------------------------------------------------------------
				parameter RETRAT_WIDTH = 0;
				parameter RETRAT_DEPTH = 0;

				output reg [RETRAT_WIDTH-1:0] 	retRat_OUT [1<<RETRAT_DEPTH-1:0];
				reg [RETRAT_WIDTH-1:0] 	retrat [1<<RETRAT_DEPTH-1:0];
				assign retRat_OUT = retrat;
				
				
	//-------------------------------------------------------------------------
	/* ROB: Convert be internal and external ROB signals 
		Flags over and above external ROB data
			FinishedBit:			1
			ExceptionBit:			1			
			(stuff added by ren.v):	RENROB_DATAWIDTH-1:0
	*/
	//-------------------------------------------------------------------------	
	parameter ROB_DATAWIDTH = RENROB_DATAWIDTH + 2;
	parameter pFINISH_DEFAULT = 1'b0; parameter pEXCEPT_DEFAULT = 1'b0;
	
	assign wROB_pushData 		= {pFINISH_DEFAULT, pEXCEPT_DEFAULT, tROB_pushData_IN};
	assign wROB_probeDataIn 	= {tROB_probeSetFinBit_IN, tROB_probeSetExpBit_IN, tROB_probePushData_IN};	
	assign fROB_probeData_OUT 	= wROB_probeDataOut[RENROB_DATAWIDTH-1:0];
	/*							//  182:151 target PC placeholder
	fQ_IDREN_popData_IN [125],	// 	150:150 1 ALU Src (Imm flag)
	wDestRegReqd,				// 	149:149 1 Dest reg reqd
	fQ_IDREN_popData_IN [124:93]// 148:117 32 signExt Imm
	fQ_IDREN_popData_IN [92:87],// 116:111 6 ALU control
	fROB_curTail_IN,			//	110:105	6 						
	rPhysSrc2Reg, 				//	104:099	6
	rPhysSrc1Reg, 				//	098:093	6
	rPhysDestReg,				//	092:087	6
	fQ_IDREN_popData_IN [86:55],// 086:055	32 PCA_IDREN
	fQ_IDREN_popData_IN [54:50],// 054:050	5 readRegisterA1_IDEXE
	fQ_IDREN_popData_IN [49:45],// 049:045	5 readRegisterB1_IDEXE
	fQ_IDREN_popData_IN [44:44],// 044:044	1 link_IDREN
	fQ_IDREN_popData_IN [43:43],// 043:043	1 jumpReg_IDREN
	fQ_IDREN_popData_IN [42:42],// 042:042	1 jump_IDREN
	fQ_IDREN_popData_IN [41:41],// 041:041	1 branch_IDREN
	fQ_IDREN_popData_IN [40:40],// 040:040	1 MemWrite1_IDEXE
	fQ_IDREN_popData_IN [39:39],// 039:039	1 MemRead1_IDEXE
	fQ_IDREN_popData_IN [38:34],// 038:034	5 wWrRegID_IDREN
	fQ_IDREN_popData_IN [33:32],// 033:032	2 isRegWrInstr_IDREN
	fQ_IDREN_popData_IN [31:00]}// 031:000	32 Instr1_IDREN	*/
	
	wire [ROB_DATAWIDTH-1:0] wROB_pushData, wROB_popData, wROB_probeDataOut, wROB_probeDataIn;
	wire wROB_popReq, wROB_empty;
	
	queue #(.DATA_WIDTH(ROB_DATAWIDTH), .ADDR_WIDTH(ROB_ADDRWIDTH), 
			.SHOW_DEBUG(0), .QUEUE_NAME("Reorder Buffer"))
	ROB	(	CLK, RESET,
			.pushReq_IN(tROB_pushReq_IN), 	.data_IN(wROB_pushData),
			.popReq_IN(wROB_popReq), 		.data_OUT(wROB_popData),
			.emptyFlag_OUT(wROB_empty), 	.fullFlag_OUT(fROB_full_OUT),
			.curTail_OUT(fROB_curTail_OUT), .flush_IN (flushEm_OUT),
			.probeIdx_IN(tROB_probeIdx_IN),	.probeData_OUT(wROB_probeDataOut),
			.probePushReq_IN(tROB_probePushReq_IN), probeData_IN(wROB_probeDataIn)
		);
		
	//-------------------------------------------------------------------------
	// ROB: Operations
	//-------------------------------------------------------------------------

	wire [ROB_DATAWIDTH-1:0]	wROBhead;
	wire wROBheadFin, wROBheadSafe, wROBheadRdy2Com;
	
	assign wROBhead 		= (!wROB_empty)?wROB_popData:0;
	assign wROBheadFin 		= wROBhead[RENROB_DATAWIDTH+1];
	assign wROBheadSafe 	= !wROBhead[RENROB_DATAWIDTH];
	assign wROBheadRdy2Com 	=  wROBheadFin && wROBheadSafe;
	
	always @(posedge CLK) begin
		if (!RESET) begin
		
			flushEm_OUT <= 0;
			copyRetRat_OUT <= 0;
		end else if (!FREEZE) begin
		
			// Can we pop ROB?
			if (wROBheadRdy2Com) begin
				// We're ready to pop.
				wROB_popReq <= 1;
				// Now use wROB_popData and do your thang.
				
				// Access current RetRat, add it to free list
				
			end else begin
				// Cannot pop ROB
				wROB_popReq <= 0;
				
				// Check why we cannot pop
				
				if (wROB_empty || !wROBheadFinished) begin
					// Either ROB is empty or the head is not yet ready.
					// Chill. Do nothing.
					
				end else begin
					if (!wROBheadSafe) begin
						// aww he'yell no
						// Exception!
						
						// Flush everything! Connect wires in MIPs
						flushEm_OUT <= 1;
						
						// Copy retirement rat
						copyRetRat_OUT <= 0;
						
						// ANything else?
						
					end
				end
			
			end
		
		end
	
	end
	
endmodule
