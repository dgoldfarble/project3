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
					// instruction 2 input
				Intstr2,
				Operand_A2,
				readRegisterA2,
				Operand_B2,
				readRegisterB2,
				writeRegister2,
				ROB_tail_pointer2,
				ALU_control2,
				Instr2_10_6,
				ALUSrc2,
				do_writeback2_ID,
				// output
				aluResult2_PR,
				Instr2_PR,
				writeRegister2_PR,
				do_writeback2_PR,
				taken_branch1,
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
				fwd_data_2_COM,
				fwd_reg_2_COM,
				fwd_data_2_COM_flag,
				LS_fwd_data_COM,
				LS_fwd_reg_COM,
				LS_fwd_data_COM_flag,
				// other
				FREEZE,
				CLK,
				RESET
				);

   

	// instruction 1 input
   input          [31: 0] Instr1;
   input          [31: 0] Operand_A1;
   input          [ 5: 0] readRegisterA1;
   input          [31: 0] Operand_B1;
   input          [ 5: 0] readRegisterB1;
   input          [ 5: 0] writeRegister1;
   input          [ 5: 0] ROB_tail_pointer1;
   input          [ 5: 0] ALU_control1;
   input          [ 4: 0] Instr1_10_6;
   input                  ALUSrc1;
   input         	  do_writeback1_ID;
   // output
   output reg     [31: 0] aluResult1_PR;
   output reg     [31: 0] Instr1_PR;
   output reg     [ 4: 0] writeRegister1_PR;
   output reg        	  do_writeback1_PR;
   
	// instruction 2 input // now for branches
   input          [31: 0] Intstr2;
   input          [31: 0] Operand_A2;
   input          [ 5: 0] readRegisterA2;
   input          [31: 0] Operand_B2;
   input          [ 5: 0] readRegisterB2;
//   input          [ 5: 0] writeRegister2;
   input          [ 5: 0] ROB_tail_pointer2;
   input          [ 5: 0] ALU_control2;
   input          [ 4: 0] Instr2_10_6;
   input                  ALUSrc2;
   input         	  do_writeback2_ID;
   	// output
   output reg     [31: 0] aluResult2_PR;
   output reg     [31: 0] Instr2_PR;
   output reg     [ 4: 0] writeRegister2_PR;
   output reg        	  do_writeback2_PR;
   output reg            taken_branch1;
	
	// load/store instruction input
   input          [31: 0] LS_Op1;		// should be a register value
   input          [5 : 0] LS_register1;
   input          [31: 0] LS_Op2;		// should be a sign-extended immediate value
   input          [31: 0] Dest_Value1;
   input          [ 5: 0] ROB_LS_tail_pointer;
   input          [ 5: 0] LS_destination_reg;
   input          [ 5: 0] LS_ALU_control;
   input          [31: 0] readDataB1;
   input                  MemtoReg1;
   input                  MemRead1;
   input                  MemWrite1;
   // output
   output reg     [31: 0] Dst1_PR;			// data alignment
   output reg     [31: 0] readDataB1_PR;
   output reg     [31: 0] address;
   output reg     [ 5: 0] ALU_control1_PR; // has to do with data alignment
   output reg     [ 5: 0] LS_destination_out;
   output reg        	  MemRead1_PR;
   output reg        	  MemWrite1_PR;
   output reg             MemtoReg1_PR;	// 1 for a load 0 for a store
   
   // forward data
   input          [31: 0] fwd_data_1_COM;
   input          [ 5: 0] fwd_reg_1_COM;
   input                  fwd_data_1_COM_flag;
   input          [31: 0] fwd_data_2_COM;
   input          [ 5: 0] fwd_reg_2_COM;
   input                  fwd_data_2_COM_flag;
   input          [31: 0] LS_fwd_data_COM;
   input          [ 5: 0] LS_fwd_reg_COM;
   input                  LS_fwd_data_COM_flag;
   
   // other
   input                  FREEZE;
   input                  CLK;
   input                  RESET;
        
   wire           [31: 0] aluResult1;
   wire           [31: 0] address_out;
   wire           [31: 0] OpA1;
   wire           [31: 0] OpB1;
   wire           [31: 0] OpA2;
   wire           [31: 0] OpB2;
   wire           [31: 0] OpLS1;
   wire           [31: 0] OpLS2;   
   wire           [31: 0] Dst1;
   reg            [31: 0] HI1;
   reg            [31: 0] LO1;
   reg                    comment;


   	initial comment = 0;  //show EXE displays


	always begin
	// Forwarding for Instr 1	
		// Operand A1
		if(do_writeback1_PR && (writeRegister1_PR == readRegisterA1)
			OpA1 = aluResult1_PR;
		else if(do_writeback2_PR && (writeRegister2_PR == readRegisterA1)
			OpA1 = aluResult2_PR;
		else if(MemToReg1_PR && (LS_destination_out == readRegisterA1)
			// DATA HAZARD, OH SHIIIIIT
			;
		else if(fwd_data_1_COM_flag && (fwd_reg_1_COM == readRegisterA1)
			OpA1 = fwd_data_1_COM;
		else if(fwd_data_2_COM_flag && (fwd_reg_2_COM == readRegisterA1)
			OpA1 = fwd_data_1_COM;
		else if(LS_fwd_data_COM_flag && (LS_fwd_reg_COM == readRegisterA1)
			OpA1 = LS_fwd_data_COM;
		else OpA1 = Operand_A1;
		
		
		// Operand B1
		if(!ALUSrc1) begin
			if(do_writeback1_PR && (writeRegister1_PR == readRegisterB1)
				OpB1 = aluResult1_PR;
			else if(do_writeback2_PR && (writeRegister2_PR == readRegisterB1)
				OpB1 = aluResult2_PR;
			else if(MemToReg1_PR && (LS_destination_out == readRegisterB1)
				// DATA HAZARD, OH SHIIIIIT
				;
			else if(fwd_data_1_COM_flag && (fwd_reg_1_COM == readRegisterB1)
				OpB1 = fwd_data_1_COM;
			else if(fwd_data_2_COM_flag && (fwd_reg_2_COM == readRegisterB1)
				OpB1 = fwd_data_1_COM;
			else if(LS_fwd_data_COM_flag && (LS_fwd_reg_COM == readRegisterB1)
				OpB1 = LS_fwd_data_COM;
			else OpB1 = Operand_B1;
		end
		
		
		// Forwarding for (branch instructions...)
		// Operand A2
		if(do_writeback1_PR && (writeRegister1_PR == readRegisterA2)
			OpA2 = aluResult1_PR;
		else if(do_writeback2_PR && (writeRegister2_PR == readRegisterA2)
			OpA2 = aluResult2_PR;
		else if(MemToReg1_PR && (LS_destination_out == readRegisterA2)
			// DATA HAZARD, OH SHIIIIIT
			;
		else if(fwd_data_1_COM_flag && (fwd_reg_1_COM == readRegisterA2)
			OpA2 = fwd_data_1_COM;
		else if(fwd_data_2_COM_flag && (fwd_reg_2_COM == readRegisterA2)
			OpA2 = fwd_data_2_COM;
		else if(LS_fwd_data_COM_flag && (LS_fwd_reg_COM == readRegisterA2)
			OpA2 = LS_fwd_data_COM;
		else OpA2 = Operand_A2;
		
		
		// Operand B2
		if(!ALUSrc2) begin
			if(do_writeback1_PR && (writeRegister1_PR == readRegisterB2)
				OpB2 = aluResult1_PR;
			else if(do_writeback2_PR && (writeRegister2_PR == readRegisterB2)
				OpB2 = aluResult2_PR;
			else if(MemToReg1_PR && (LS_destination_out == readRegisterB2)
				// DATA HAZARD, OH SHIIIIIT
				;
			else if(fwd_data_1_COM_flag && (fwd_reg_1_COM == readRegisterB2)
				OpB2 = fwd_data_1_COM;
			else if(fwd_data_2_COM_flag && (fwd_reg_2_COM == readRegisterB2)
				OpB2 = fwd_data_2_COM;
			else if(LS_fwd_data_COM_flag && (LS_fwd_reg_COM == readRegisterB2)
				OpB2 = LS_fwd_data_COM;
			else OpB2 = Operand_B2;
		end
		
		
		// LSQ register operand
		if(do_writeback1_PR && (writeRegister1_PR == LS_register1)
			OpB1 = aluResult1_PR;
		else if(do_writeback2_PR && (writeRegister2_PR == LS_register1)
			OpB1 = aluResult2_PR;
		else if(MemToReg1_PR && (LS_destination_out == LS_register1)
			// DATA HAZARD, OH SHIIIIIT
			;
		else if(fwd_data_1_COM_flag && (fwd_reg_1_COM == LS_register1)
			OpB1 = fwd_data_1_COM;
		else if(fwd_data_2_COM_flag && (fwd_reg_2_COM == LS_register1)
			OpB1 = fwd_data_1_COM;
		else if(LS_fwd_data_COM_flag && (LS_fwd_reg_COM == LS_register1)
			OpB1 = LS_fwd_data_COM;
		else OpB1 = Operand_B1;
	end



	ALU ALU1(HI1, LO1, aluResult1, OpA1, OpB1, ALU_control1, Instr1_10_6, CLK);
	ALU AGU(0, 0, address_out, OpLS1, LS_Op2, LS_ALU_control, 0, CLK);
	compare compare1(0,OpA2,OpB2,wInstr1,taken_branch1);
		

	//Pipeline Stage 1
	always @ (posedge CLK or negedge RESET) begin
		if(!RESET)
		begin
	
			aluResult1_PR <= 32'b0;
			Instr1_PR <= 32'b0;
			writeRegister1_PR <= 6'b0;
			do_writeback1_PR <= 0;
	
			aluResult2_PR <= 32'b0;
			Instr2_PR <= 32'b0;
			writeRegister2_PR <= 6'b0;
			do_writeback2_PR <= 0;
	
			Dst1_PR <= 32'b0;
			readDataB1_PR <= 32'b0;
			address <= 32'b0;
			ALU_control1_PR <= 6'b0;
			LS_destination_out <= 6'b0;
 			MemRead1_PR <= 0;
			MemWrite1_PR <= 0;
			MemtoReg1_PR <= 0;
		end
		else if(!FREEZE)
		begin
	
			aluResult1_PR <= aluResult1;
			Instr1_PR <= Instr1;
			writeRegister1_PR <= writeRegister1;
			do_writeback1_PR <= do_writeback1_ID;
	
			Instr2_PR <= Instr2;
			writeRegister2_PR <= writeRegister2;
			do_writeback2_PR <= do_writeback2_ID;
	
			Dst1_PR <= Dst1;
			readDataB1_PR <= readDataB1;
			address <= address_out;
			ALU_control1_PR <= LS_ALU_control;
			LS_destination_out <= LS_destination_reg;
			MemRead1_PR <= MemRead1;
			MemWrite1_PR <= MemWrite1;
			MemtoReg1_PR <= MemtoReg1;
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
