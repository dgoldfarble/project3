//-----------------------------------------
//            Pipelined MIPS
//-----------------------------------------
module MIPS (	R2_output,
             	MemRead,
             	MemWrite,
             	dBlkRead,
             	dBlkWrite,
             	iBlkRead,
             	iBlkWrite,
             	data_write_2DM,
             	//data_read_fDM,
		block_write_2IM,
		block_write_2DM,
		block_read_fIM,
		block_read_fDM,
             	//Instr1_fIM,
		//Instr2_fIM,
             	data_address_2DM,
             	CLK,
	     	RESET,
             	R2_input,
             	PC_init
            	);

   output [31: 0] R2_output;
   output [31: 0] data_address_2DM;
   output [31: 0] data_write_2DM;
   output[255: 0] block_write_2DM;
   output[255: 0] block_write_2IM;
   output         MemRead;
   output         MemWrite;
   output         dBlkRead;
   output         dBlkWrite;
   output         iBlkRead;
   output         iBlkWrite;

   input  [31: 0]  PC_init;
   input  [31: 0]  R2_input;
//   input  [31: 0]  data_read_fDM;
//   input  [31: 0]  Instr1_fIM;
//   input  [31: 0]  Instr2_fIM;
   input [255: 0]  block_read_fDM;
   input [255: 0]  block_read_fIM;
   input 	   CLK;
   input           RESET;

   //connecting wires (signals passing through more than 1 stage)
   wire [31: 0]   R2_output_ID/*verilator public*/;
   wire [31: 0]   Instr_fMEM/*verilator public*/;
   wire [31: 0]   Reg_ID [0:31]/*verilator public*/;  
   wire [31: 0]   Instr_address_2IM/*verilator public*/;
   wire [31: 0]   CIA_IFID/*verilator public*/;
   wire [31: 0]   PCA_IFID/*verilator public*/;
   wire [31: 0]   nextInstruction_address_IDIF/*verilator public*/;
   wire           no_fetch/*verilator public*/;
   wire           SYS/*verilator public*/;
   // wire           single_fetch_IDIF/*verilator public*/;

   //connecting wires (bifurcated signals passing through more than 1 stage)
   wire [31: 0]   writeData1_WBID/*verilator public*/;
   wire [31: 0]   writeData2_WBID/*verilator public*/;
   wire [31: 0]   writeData1_WBEXE/*verilator public*/;
   wire [31: 0]   writeData2_WBEXE/*verilator public*/;
   wire [31: 0]   writeData1_MID/*verilator public*/;
   wire [31: 0]   writeData2_MID/*verilator public*/;
   wire [31: 0]   Dest_Value1_IDEXE/*verilator public*/;
   wire [31: 0]   Dest_Value2_IDEXE/*verilator public*/;
   wire [31: 0]   Dest_Value1_EXEM/*verilator public*/;
   wire [31: 0]   Dest_Value2_EXEM/*verilator public*/;
   wire [31: 0]   Instr1_IDEXE/*verilator public*/;
   wire [31: 0]   Instr2_IDEXE/*verilator public*/;
   wire [31: 0]   Instr1_EXEM/*verilator public*/;
   wire [31: 0]   Instr2_EXEM/*verilator public*/;
//   wire [31: 0]   Instr1_fIM/*verilator public*/;
//   wire [31: 0]   Instr2_fIM/*verilator public*/;
   wire [31: 0]   Instr1_IFID/*verilator public*/;
   wire [31: 0]   Instr2_IFID/*verilator public*/;
   wire [31: 0]   Operand_A1_IDEXE/*verilator public*/;
   wire [31: 0]   Operand_A2_IDEXE/*verilator public*/;
   wire [31: 0]   Operand_B1_IDEXE/*verilator public*/;
   wire [31: 0]   Operand_B2_IDEXE/*verilator public*/;
   wire [31: 0]   aluResult1_EXEM/*verilator public*/;
   wire [31: 0]   aluResult2_EXEM/*verilator public*/;
   wire [31: 0]   aluResult1_EXEID/*verilator public*/;
   wire [31: 0]   aluResult2_EXEID/*verilator public*/;
   wire [31: 0]   aluResult1_MEMW/*verilator public*/;
   wire [31: 0]   aluResult2_MEMW/*verilator public*/;
   wire [31: 0]   aluResult1_WBID/*verilator public*/;
   wire [31: 0]   aluResult2_WBID/*verilator public*/;
   wire [31: 0]   data_read1_MEMW/*verilator public*/;
   wire [31: 0]   data_read2_MEMW/*verilator public*/;
   wire [31: 0]   readDataB1_IDEXE/*verilator public*/;
   wire [31: 0]   readDataB2_IDEXE/*verilator public*/;
   wire [31: 0]   readDataB1_EXEM/*verilator public*/;
   wire [31: 0]   readDataB2_EXEM/*verilator public*/;
   wire [ 5: 0]   ALU_control1_IDEXE/*verilator public*/;
   wire [ 5: 0]   ALU_control2_IDEXE/*verilator public*/;
   wire [ 5: 0]   ALU_control1_EXEM/*verilator public*/;
   wire [ 5: 0]   ALU_control2_EXEM/*verilator public*/;
   wire [ 4: 0]   writeRegister1_IDEXE/*verilator public*/;
   wire [ 4: 0]   writeRegister2_IDEXE/*verilator public*/;
   wire [ 4: 0]   writeRegister1_EXEM/*verilator public*/;
   wire [ 4: 0]   writeRegister2_EXEM/*verilator public*/;
   wire [ 4: 0]   writeRegister1_MEMW/*verilator public*/;
   wire [ 4: 0]   writeRegister2_MEMW/*verilator public*/;
   wire [ 4: 0]   writeRegister1_WBID/*verilator public*/;
   wire [ 4: 0]   writeRegister2_WBID/*verilator public*/;
   wire [ 4: 0]   writeRegister1_WBEXE/*verilator public*/;
   wire [ 4: 0]   writeRegister2_WBEXE/*verilator public*/;
   wire [ 4: 0]   Instr1_10_6_IDEXE/*verilator public*/;
   wire [ 4: 0]   Instr2_10_6_IDEXE/*verilator public*/;
   wire [ 4: 0]   readRegisterA2_IDEXE/*verilator public*/;
   wire [ 4: 0]   readRegisterA1_IDEXE/*verilator public*/;
   wire [ 4: 0]   readRegisterB1_IDEXE/*verilator public*/;
   wire [ 4: 0]   readRegisterB2_IDEXE/*verilator public*/;
   wire           MemtoReg1_IDEXE/*verilator public*/;
   wire           MemtoReg2_IDEXE/*verilator public*/;
   wire 	  MemtoReg1_EXEM/*verilator public*/;
   wire 	  MemtoReg2_EXEM/*verilator public*/;
   wire           MemtoReg1_MEMW/*verilator public*/;
   wire           MemtoReg2_MEMW/*verilator public*/;
   wire 	  MemRead1_IDEXE/*verilator public*/;
   wire           MemRead2_IDEXE/*verilator public*/;
   wire           MemRead1_EXEM/*verilator public*/;
   wire           MemRead2_EXEM/*verilator public*/;
   wire 	  MemWrite1_IDEXE/*verilator public*/;
   wire           MemWrite2_IDEXE/*verilator public*/;
   wire           MemWrite1_EXEM/*verilator public*/;
   wire           MemWrite2_EXEM/*verilator public*/;
   wire           do_writeback1_WBID/*verilator public*/;
   wire           do_writeback2_WBID/*verilator public*/;
   wire           do_writeback1_IDEXE/*verilator public*/;
   wire           do_writeback2_IDEXE/*verilator public*/;
   wire           do_writeback1_MEMW/*verilator public*/;
   wire           do_writeback2_MEMW/*verilator public*/;
   wire           do_writeback1_EXEM/*verilator public*/;
   wire           do_writeback2_EXEM/*verilator public*/;
   wire           do_writeback1_WBEXE/*verilator public*/;
   wire           do_writeback2_WBEXE/*verilator public*/;
   wire           taken_branch1_IDIF/*verilator public*/;
   wire           taken_branch2_IDIF/*verilator public*/;
   wire           fetchNull1_fID/*verilator public*/;
   wire           fetchNull2_fID/*verilator public*/;
   wire           ALUSrc1_IDEXE/*verilator public*/;
   wire           ALUSrc2_IDEXE/*verilator public*/;
   wire           ALUSrc1_EXEM/*verilator public*/;
   wire           ALUSrc2_EXEM/*verilator public*/;
   wire           FREEZE/*verilator public*/;
   wire [ 31: 0]  Instr1_fIC/*verilator public*/;
   wire [ 31: 0]  Instr2_fIC/*verilator public*/;
   // wire           single_fetch_iCache;

   wire [  1: 0]  MVECT/*verilator public*/;
   wire [  1: 0]  DataWriteMode;
   wire [ 31: 0]  data_read_fDC;
   wire           IMISS;
   wire           DMISS;
   wire           do_fetch;

   assign do_fetch = ~no_fetch;
   assign FREEZE = DMISS | IMISS;
   assign DataWriteMode = (Instr_fMEM[31: 26]==40)? 2'b01: ((Instr_fMEM[31: 26]==41)? 2'b10: 2'b00);
   // assign single_fetch_iCache = single_fetch_IDIF;


  iCache iCache1 (CLK, RESET, SYS, do_fetch, iBlkRead, iBlkWrite, Instr_address_2IM, block_read_fIM, block_write_2IM, Instr1_fIC, Instr2_fIC, IMISS, MVECT);

  dCache dCache1 (CLK, RESET, SYS, MemRead, MemWrite, DataWriteMode, dBlkRead, dBlkWrite, data_address_2DM, data_write_2DM, block_read_fDM, block_write_2DM, data_read_fDC, DMISS);

   integer n;
   always @ (posedge CLK) begin
     //$display("[%d] %x %x %x %x %x %x %x", n, SYS, do_fetch, iBlkRead, iBlkWrite, Instr_address_2IM, Instr1_fIC, IMISS);
     if(!FREEZE && do_fetch) begin
       //if(!single_fetch_iCache && Instr2_fIC != Instr2_fIM) begin
         //$display("[%d] @%x (%x) %x != %x", n, Instr_address_2IM, MVECT, Instr2_fIC, Instr2_fIM);
         //$stop();
       //end
     end
     n = n+1;
   end

	
   // Pipeline Stages Instantiation
   IF IF1( CLK,
        RESET,
        .FREEZE(FREEZE || wQ_IFID_full),
        .fetchNull2(0),//.fetchNull2(fetchNull2_fID),
        PCA_IFID,
        CIA_IFID,
        no_fetch,
        // /*single_fetch_IDIF*/single_fetch_iCache,
        // taken branch flag comes from commit stage
        .taken_branch1(branch_misprediction),//.taken_branch1(taken_branch1_IDIF),
        .nextInstruction_address(branch_address_COMMIT),//.nextInstruction_address(nextInstruction_address_IDIF),
        PC_init,
        /*Instr1_fIM*/Instr1_fIC,
        Instr1_IFID,
        Instr2_IFID,
        Instr_address_2IM,
		.tQ_IFID_pushReq(wQ_IFID_pushReq),
		.tQ_IFID_full(wQ_IFID_full)
    );
   

	////////////////////////////////////////////////////////////////////////////
	// Q_IFID///////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
	parameter Q_IFID_DATAWIDTH = 32 + 32 + 32; 	// PCA + CIA + Instr
	parameter Q_IFID_ADDRWIDTH = 3;		// bits in addr ptr. 2^x elems in queue
	
	wire wQ_IFID_empty;
	wire wQ_IFID_full;
	wire wQ_IFID_pushReq;
	wire wQ_IFID_popReq;
	wire wQ_IFID_popValid;
	wire [Q_IFID_DATAWIDTH -1:0] wQ_IFID_pushData;
	wire [Q_IFID_DATAWIDTH -1:0] wQ_IFID_popData;
		
	assign wQ_IFID_pushData = {PCA_IFID, CIA_IFID, Instr1_IFID};
			
	queue #(.DATA_WIDTH(Q_IFID_DATAWIDTH), 	// in bits
			.ADDR_WIDTH(Q_IFID_ADDRWIDTH), 	// in bits
			.SHOW_DEBUG(1),					// True/False
			.QUEUE_NAME("IFID"))			// Name for debuging
		Q_IFID (
			.clk(CLK),
			.reset(RESET),
			.pushReq_IN(wQ_IFID_pushReq),		// from IF
			.data_IN(wQ_IFID_pushData),			// from IF
			.fullFlag_OUT(wQ_IFID_full),		// to IF
			
			.popReq_IN(wQ_IFID_popReq),			// from ID
			.data_OUT(wQ_IFID_popData),			// to ID
			.emptyFlag_OUT(wQ_IFID_empty), 		// to ID
			.flush_IN(0));
	
	// // Queue popping check
	// popCheck #(.DATA_WIDTH(Q_IFID_DATAWIDTH))
		// popCheckIFID  (
			// .clk(CLK), 
			// .reset(RESET), 
			// .popOut(wQ_IFID_popReq), 
			// .dataIn(wQ_IFID_popData), 
			// .emptyIn(wQ_IFID_empty));
	////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
/*
	DECODE
		Modifications
			Freeze logic - should freeze when it cannot push or when it cannot pull

		Issues
			Syscalls - SYS and no_fetch? - connected to iCache right now thru do_fetch.
			So this DOES stall IF and i$.
			
*/
	wire wFreezeID;
	assign wFreezeID = wQ_IFID_empty || wQ_IDREN_full;
	
   ID ID1( CLK,
        RESET,
        .FREEZE(wFreezeID),					// *
        ALUSrc1_IDEXE,
        fetchNull2_fID,						// 2IF - Now hardcoded to 0 at IF
        // single_fetch_IDIF,				// 2IF - unused. Commented out from everywhere by me 
        Instr1_IDEXE,
        Dest_Value1_IDEXE,
        no_fetch,							// 2IF - Problems!
        SYS,								// 2 i$ and d$
        readDataB1_IDEXE,
        Instr1_10_6_IDEXE,
        do_writeback1_EXEM,
        writeRegister1_EXEM,
        writeData1_MID,
        do_writeback1_WBID,
        writeRegister1_WBID,
        writeData1_WBID,
        aluResult1_EXEID,
        do_writeback1_IDEXE,
        readRegisterA1_IDEXE,
        readRegisterB1_IDEXE,
        taken_branch1_IDIF,					// 2IF - Removed from IF
        aluResult1_WBID,
        writeRegister1_IDEXE,
        nextInstruction_address_IDIF,		// 2IF - Removed from IF
        Reg_ID,
        R2_output_ID,
        Operand_A1_IDEXE,
        Operand_B1_IDEXE,
        ALU_control1_IDEXE,
        MemRead1_IDEXE,
        MemWrite1_IDEXE,
        MemtoReg1_IDEXE,
        .fQ_IFID_Instr1	(wQ_IFID_popData[31:0]),	// fIF Queue
        .fQ_IFID_PCA	(wQ_IFID_popData[95:64]),	// fIF Queue
        writeData1_WBID,
        R2_input,
        .fQ_IFID_CIA	(wQ_IFID_popData[63:32]),	// fIF Queue
		.tQ_IFID_popReq_OUT (wQ_IFID_popReq),
		.fQ_IFID_empty_IN	(wQ_IFID_empty),
		.tQ_IDREN_pushReq_OUT(wQ_IDREN_pushReq),
		.fQ_IDREN_full_IN	(wQ_IDREN_full),
		.control_signals() 	// DAVID
							// actually we'll need to duplicate this signal for super-scalar
    );

	
	////////////////////////////////////////////////////////////////////////////
	// Q_IDREN (ID-RegRename queue)/////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
	parameter Q_IDREN_DATAWIDTH = 32;
	parameter Q_IDREN_ADDRWIDTH = 3;
	
	wire wQ_IDREN_empty;
	wire wQ_IDREN_full;
	wire wQ_IDREN_pushReq;
	wire wQ_IDREN_popReq;
	wire wQ_IDREN_popValid;
	wire [Q_IDREN_DATAWIDTH -1:0] wQ_IDREN_pushData;
	wire [Q_IDREN_DATAWIDTH -1:0] wQ_IDREN_popData;
		
	assign wQ_IDREN_pushData = {Instr1_IDEXE};
			
	queue #(.DATA_WIDTH(Q_IDREN_DATAWIDTH),
			.ADDR_WIDTH(Q_IDREN_ADDRWIDTH),
			.SHOW_DEBUG(1),					
			.QUEUE_NAME("IDREN"))
		Q_IDREN (
			.clk(CLK),
			.reset(RESET),
			.pushReq_IN(wQ_IDREN_pushReq),	
			.data_IN(wQ_IDREN_pushData),	
			.fullFlag_OUT(wQ_IDREN_full),	
			
			.popReq_IN(wQ_IDREN_popReq),	
			.data_OUT(wQ_IDREN_popData),	
			.emptyFlag_OUT(wQ_IDREN_empty),
			.flush_IN(0));
	
	
	
	
	
	////////////////////////////////////////////////////////////////////////////
	// REG RENAME - REN.v///////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
	REN RENAME	(	// inputs
					.Instr1_IN(),
					.Instr2_IN(0),
					.Instr1_Addr_IN(),
					.Issue_Queue_full_IN(), // input for this stage
					.Issue_Queue_second_spot_IN(), // when we want to issue two instructions in a cycle
												// also for the love of god... please rename this signal I suck
												// could combine the signals into one two-bit signal?
					.ROB_tail_pointer_IN(),
					.ROB_Queue_full_IN(),
					.FreeList_push_IN(),
					.FreeList_register_IN(),
					.Copy_Retirement_RAT_IN(),
					.Copy_Retirement_RAT_FLAG_IN(),
					// outputs
					.Issue_Queue_pop1(),
					.Issue_Queue_Instr1(),
					.Issue_Queue_pop2(),
					.Issue_Queue_Instr2(),
					.Allocate_ROB_Instr1(),
					.Allocate_ROB_Instr2()
				);
	
	
	
	
	
	// Don't need this (I don't think)
	////////////////////////////////////////////////////////////////////////////
	// Q_REN-ISS (Reg Rename - Issue)///////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
	
	
	
	
	////////////////////////////////////////////////////////////////////////////
	// ISSUE - ISS.v////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
	
	
	
	////////////////////////////////////////////////////////////////////////////
	// RF_Read/Write - RF_RW.v//////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
	RF_RW RF_ReadWrite	(	// inputs
							.ReadAddress_A1(),
							.ReadAddress_B1(),
							.ReadAddress_A2(),
							.ReadAddress_B2(),
							.ReadAddress_A3(),
							.ReadAddress_B4(),
							.WriteAddress_1(),
							.WriteAddress_2(),
							.WriteAddress_3(),
							.WriteData_1(),
							.WriteData_2(),
							.WriteData_3(),
							// outputs
							.ReadData_A1(),
							.ReadData_B1(),
							.ReadData_A2(),
							.ReadData_B2(),
							.ReadData_A3(),
							.ReadData_B3(),
						);
	
	
	////////////////////////////////////////////////////////////////////////////
	// EXE - EXE.v?/////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
   EXE EXE1	( 	CLK,
				RESET,
				FREEZE,
				ALUSrc1_EXEM,
				ALUSrc1_IDEXE,
				Instr1_IDEXE,
				Instr1_EXEM,
				Dest_Value1_IDEXE,
				Dest_Value1_EXEM,
				readDataB1_IDEXE,
				readDataB1_EXEM,
				aluResult1_EXEID,
				do_writeback1_WBEXE,
				writeRegister1_WBEXE,
				writeData1_WBEXE,
				ALU_control1_EXEM,
				ALU_control1_IDEXE,
				writeData1_WBID,
				writeRegister1_MEMW,
				do_writeback1_MEMW,
				do_writeback1_EXEM,
				do_writeback1_IDEXE,
				/**/readRegisterA1_IDEXE,
				readRegisterB1_IDEXE,
				/**/writeRegister1_IDEXE,
				writeRegister1_EXEM,
				Instr1_10_6_IDEXE,
				MemRead1_IDEXE,
				MemWrite1_IDEXE,
				MemRead1_EXEM,
				MemWrite1_EXEM,
				Operand_A1_IDEXE,
				Operand_B1_IDEXE,
				MemtoReg1_IDEXE,
				MemtoReg1_EXEM,
				aluResult1_EXEM
			);

	
	
	////////////////////////////////////////////////////////////////////////////
	// MEM - MEM.v?/////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
   MEM MEM1( CLK,
        RESET,
        FREEZE,
        ALUSrc1_EXEM,
        Instr1_EXEM,
        Instr_fMEM,
        writeData1_WBID,
        writeRegister1_WBID,
        do_writeback1_WBID,
        Dest_Value1_EXEM,
        readDataB1_EXEM,
        /**/writeData1_MID,
        /**/ do_writeback1_MEMW,
        do_writeback1_EXEM,
        writeRegister1_EXEM,
        writeRegister1_MEMW,
        /**/data_write_2DM,
        data_address_2DM,
        MemRead,
        MemWrite,
        /*data_read_fDM*/data_read_fDC,
        MemtoReg1_EXEM,
        MemtoReg1_MEMW,
        MemRead1_EXEM,
        MemWrite1_EXEM,
        ALU_control1_EXEM,
        aluResult1_EXEM,
        aluResult1_MEMW,
        data_read1_MEMW
    );

	
	
	////////////////////////////////////////////////////////////////////////////
	// RF_WRITE - RF_WRITE.v OR WB.v??//////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
   WB WriteBack ( CLK,
        RESET,
        FREEZE,
        do_writeback1_WBEXE,
        writeRegister1_WBEXE,
        writeData1_WBEXE,
        do_writeback1_MEMW,
        aluResult1_WBID,
        writeRegister1_MEMW,
        writeRegister1_WBID,
        writeData1_WBID,
        do_writeback1_WBID,
        aluResult1_MEMW,
        data_read1_MEMW,
        MemtoReg1_MEMW
    );

	
	
	
	////////////////////////////////////////////////////////////////////////////
	// RETIREMENT - RET.v///////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
	
	
	
	
	
	
	////////////////////////////////////////////////////////////////////////////
	// COMMIT - COMMIT.v///////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////
	
	
	
endmodule
