//-----------------------------------------
//           Execute Stage
//-----------------------------------------
module EXE(		// instruction 1 input
				Instr1,
				Operand_A1,
				readRegisterA1,
				Operand_B1,
				readRegisterB1,
				writeRegister1,
				ROB_tail_pointer1,
				ALU_control1,
				Instr1_10_6,
				ALUSrc1,
				do_writeback1_ID,
				// output
				aluResult1_PR,
				Instr1_PR,
				writeRegister1_PR,
				do_writeback1_PR,
				// load/store instruction input
				LS_Op1,		// should be a register value
				LS_register1,
				LS_Op2,		// should be a sign-extended immediate value
				Dest_Value1,
				ROB_LS_tail_pointer,
				LS_destination_reg,
				LS_ALU_control,
				readDataB1,
				MemtoReg1,
				MemRead1,
				MemWrite1,
				// output
				Dst1_PR,			// data alignment
				readDataB1_PR,
				address,
				ALU_control1_PR, // has to do with data alignment
				LS_destination_out,
				MemRead1_PR,
				MemWrite1_PR,
				MemtoReg1_PR,	// 1 for a load 0 for a store
				// forward data
				fwd_data_1_COM,
				fwd_reg_1_COM,
				fwd_data_1_COM_flag,
				LS_fwd_data_COM,
				LS_fwd_reg_COM,
				LS_fwd_data_COM_flag,
				// other
				FREEZE,
				CLK,
				RESET
				);
				
	parameter ROBWIDTH = 6;

   	// COMMON SIGNALS
	output reg		[ROBWIDTH-1:0]	ROBPointer_OUT;
	output reg		[31: 0] 		PCA_OUT;
    output reg		[31: 0]			Instr1_OUT;
    output reg		[ 5: 0]			writeRegister1_OUT;
    output reg		[ 5: 0]			ALU_control1_OUT;
    output reg		[31: 0]			Dest_Value1_OUT;
    output reg						RegDest_OUT;
    output reg						Branch_flag_OUT;
    output reg						not_memory_flag_OUT;
	// LS output
    output reg						MemRead1_OUT;
    output reg						MemWrite1_OUT;
    output reg						memory_flag_OUT;
	output reg						Mem_Hazard_PR_OUT;

	// COMMON SIGNALS
	input		[ROBWIDTH-1:0]	ROBPointer_IN;
	input		[31: 0] 		PCA_IN;
    input		[31: 0]			Instr1_IN;
    input		[ 5: 0]			writeRegister1_IN;
    input		[ 5: 0]			readRegisterA1_IN;
    input		[31: 0]			Operand_A1_IN;
    input		[31: 0]			Immediate_IN;
    input		[ 5: 0]			ALU_control1_IN;
    input		[31: 0]			Dest_Value1_IN;
		// instruction 1 input
    input		[ 5: 0] 		readRegisterB1_IN;
    input		[31: 0]			Operand_B1_IN;
    input		[ 4: 0]			Instr1_10_6_IN;
    input						ALUSrc1_IN;
    input						RegDest_IN;
    input						Branch_flag_IN;
    input						not_memory_flag_IN;
	// LS output
    input						MemRead1_IN;
    input						MemWrite1_IN;
    input						memory_flag_IN;
    
   // forward data
   input          [31: 0] fwd_data_1_COM;
   input          [ 5: 0] fwd_reg_1_COM;
   input                  fwd_data_1_COM_flag;
   input          [31: 0] LS_fwd_data_COM;
   input          [ 5: 0] LS_fwd_reg_COM;
   input                  LS_fwd_data_COM_flag;
   
   // other
   input                  FREEZE;
   input                  CLK;
   input                  RESET;
        
   wire           [31: 0] aluResult1;
   wire           [31: 0] address_out;
   wire           [31: 0] OpA1, Operand1;
   wire           [31: 0] OpB1, Operand2;
   wire           [31: 0] OpLS1;
   wire           [31: 0] OpLS2;   
   wire           [31: 0] Dst1;
   wire						Hazard_flag;
   reg            [31: 0] HI1;
   reg            [31: 0] LO1;
   reg                    comment;
   


   	initial comment = 0;  //show EXE displays


	always begin
		hazard_flag = 0;
	// Forwarding for Instr 1	
		// Operand A1
		if(do_writeback1_PR && (writeRegister1_PR == readRegisterA1)
			OpA1 = aluResult1_PR;
		else if(MemToReg1_PR && (LS_destination_out == readRegisterA1)
			hazard_flag = 1;
		else if(fwd_data_1_COM_flag && (fwd_reg_1_COM == readRegisterA1)
			OpA1 = fwd_data_1_COM;
		else if(LS_fwd_data_COM_flag && (LS_fwd_reg_COM == readRegisterA1)
			OpA1 = LS_fwd_data_COM;
		else OpA1 = Operand_A1;
		
		
		// Operand B1
		if(!ALUSrc1) begin
			if(do_writeback1_PR && (writeRegister1_PR == readRegisterB1)
				OpB1 = aluResult1_PR;
			else if(MemToReg1_PR && (LS_destination_out == readRegisterB1)
				hazard_flag = 1;
			else if(fwd_data_1_COM_flag && (fwd_reg_1_COM == readRegisterB1)
				OpB1 = fwd_data_1_COM;
			else if(LS_fwd_data_COM_flag && (LS_fwd_reg_COM == readRegisterB1)
				OpB1 = LS_fwd_data_COM;
			else OpB1 = Operand_B1;
		end
		
		
		// LSQ register operand
		if(do_writeback1_PR && (writeRegister1_PR == LS_register1)
			OpB1 = aluResult1_PR;
		else if(MemToReg1_PR && (LS_destination_out == LS_register1)
			hazard_flag = 1;
		else if(fwd_data_1_COM_flag && (fwd_reg_1_COM == LS_register1)
			OpB1 = fwd_data_1_COM;
		else if(LS_fwd_data_COM_flag && (LS_fwd_reg_COM == LS_register1)
			OpB1 = LS_fwd_data_COM;
		else OpB1 = Operand_B1;
		
		if(branch) begin
			Operand1 = PCA_IN;
			Operand2 = (Immediate<<2);
		end
		else begin
			Operand1 = OpA1;
			Operand2 = OpB1;
		end
	end



	ALU ALU1(HI1, LO1, aluResult1, Operand1, Operand2, ALU_control1, Instr1_10_6, CLK);
	ALU AGU(0, 0, address_out, OpLS1, LS_Op2, LS_ALU_control, 0, CLK);
	compare compare1(0,OpA1,OpB1,wInstr1,taken_branch1);
		

	//Pipeline Stage 1
	always @ (posedge CLK or negedge RESET) begin
		if(!RESET)
		begin
			ROBPointer_OUT <= 0;
			Instr1_OUT<= 0;
			writeRegister1_OUT <= 0;
			readRegisterA1_OUT <= 0;
			ALU_control1_OUT <= 0;
			// instruction 1 input
			RegDest_OUT <= 0;
			Branch_flag_OUT <= 0;
			not_memory_flag_OUT <= 0;
			// LS output
			Dest_Value1_OUT <= 0;
			MemRead1_OUT <= 0;
			MemWrite1_OUT <= 0;
			memory_flag_OUT <= 0;
		end
		else if(!FREEZE)
		begin
			ROBPointer_OUT <= ROBPointer_IN;
			Instr1_OUT<= Instr1_IN;
			PCA_OUT <= PCA_IN;
			writeRegister1_OUT <= writeRegister1_IN;
			readRegisterA1_OUT <= readRegisterA1_IN;
			ALU_control1_OUT <= ALU_control1_IN;
			Dest_Value1_OUT <= Dest_Value1_IN;
			// instruction 1 input
			RegDest_OUT <= RegDest_IN;
			Branch_flag_OUT <= Branch_flag_IN;
			not_memory_flag_OUT <= not_memory_flag_IN;
			// LS output
			MemRead1_OUT <= MemRead1_IN;
			MemWrite1_OUT <= MemWrite1_IN;
			memory_flag <= memory_flag_IN;
		end
	end
 
      
  always begin
	if(comment) begin
		$display("=============================================================");
/*		$display("[EXE]:Data1_WB:%x\t\t|Data2_WB:%x", Data1_WB, Data2_WB);
                $display("[EXE]:Data1_MEM:%x\t|Data2_MEM:%x", Data1_MEM, Data2_MEM);
		$display("[EXE]:OpA1:%x\t\t|OpA2:%x",OpA1,OpA2);
		$display("[EXE]:OpB1:%x\t\t|OpB2:%x",OpB1,OpB2);
		$display("[EXE]:Operand_A1:%x\t|Operand_A2:%x",Operand_A1,Operand_A2);
		$display("[EXE]:Operand_B1:%x\t|Operand_B2:%x",Operand_B1,Operand_B2);
		$display("[EXE]:aluResult1:%x\t|aluResult2:%x",aluResult1,aluResult2);
		$display("[EXE]:readRegisterA1:%x\t\t|readRegisterA2:%x",readRegisterA1,readRegisterA2);
		$display("[EXE]:readRegisterB1:%x\t\t|readRegisterB2:%x",readRegisterB1,readRegisterB2);
		$display("[EXE]:writeRegister1:%x\t\t|writeRegister2:%x",writeRegister1,writeRegister2);
		$display("[EXE]:do_writeback1_PR:%x\t|do_writeback2_PR:%x",do_writeback1_PR,do_writeback2_PR);
		$display("[EXE]:writeRegister1_PR:%x\t|writeRegister2_PR:%x",writeRegister1_PR,writeRegister2_PR);
		$display("[EXE]:aluResult1_PR:%x\t|aluResult2_PR:%x",aluResult1_PR,aluResult2_PR);
		$display("[EXE]:do_writeback1_MEM:%x\t|do_writeback2_MEM:%x",do_writeback1_MEM,do_writeback2_MEM);
 		$display("[EXE]:writeRegister1_MEM:%x\t|writeRegister2_MEM:%x",writeRegister1_MEM,writeRegister2_MEM);
		$display("[EXE]:Data1_MEM:%x\t|Data2_MEM:%x",Data1_MEM,Data2_MEM);
 		$display("[EXE]:do_writeback1_WB:%x\t|do_writeback2_WB:%x",do_writeback1_WB,do_writeback2_WB);
		$display("[EXE]:writeRegister1_WB:%x\t|writeRegister2_WB:%x",writeRegister1_WB,writeRegister2_WB);
		$display("[EXE]:Data1_WB:%x\t\t|Data2_WB:%x",Data1_WB,Data2_WB);
		$display("[EXE]:readDataB1_PR:%x\t|readDataB2_PR:%x",readDataB1_PR,readDataB2_PR);
		/**/				
	end	
   end

endmodule
