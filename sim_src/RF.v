module RF	(	FREEZE,
				CLK,
				RESET,
				//inputs
				IQ_full_OUT,
				IQ_popData_OUT,
				LSQ_popData_OUT,
				LSQ_full_OUT,
				IQ_LSQ_pop,
				//unpacked outputs
				// common
				ROBPointer,
				PCA,
				Instr1,
				writeRegister1,
				readRegisterA1,
				Operand_A1,
				Immediate,
				ALU_control1,
				// not memory
				readRegisterB1,
				Operand_B1,
				Instr1_10_6,
				ALUSrc1,
				RegDest,
				Branch_flag,
				not_memory_flag,
				// memory
				Dest_Value1,
				MemRead1,
				MemWrite1,
				memory_flag,
				//write back
				write_register_data,
				write_register_index,
				write_register_flag
			);

			
	parameter RENISS_WIDTH = 0; // Width of the incoming data from Rename
	parameter IDREN_WIDTH = 0;
	parameter ROBINDEX = 6;
	
	input						IQ_full_OUT;
	input [RENISS_WIDTH-1:0]	IQ_popData_OUT;
	
	input [RENISS_WIDTH-1:0] 	LSQ_popData_OUT;
	input						LSQ_full_OUT;
	
	output reg					IQ_LSQ_pop;
	
	// other
	input                  FREEZE;
	input                  CLK;
	input                  RESET;
	
	// COMMON SIGNALS
	output reg		[ROBWIDTH-1:0]	ROBPointer;
	output reg		[31: 0] 		PCA;
    output reg		[31: 0]			Instr1;
    output reg		[ 5: 0]			writeRegister1;
    output reg		[ 5: 0]			readRegisterA1;
    output reg		[31: 0]			Operand_A1;
    output reg		[31: 0]			Immediate;
    output reg		[ 5: 0]			ALU_control1;
    output reg		[31: 0]			Dest_Value1;
		// instruction 1 input
    output reg		[ 5: 0] 		readRegisterB1;
    output reg		[31: 0]			Operand_B1;
    output reg		[ 4: 0]			Instr1_10_6;
    output reg						ALUSrc1;
    output reg						RegDest;
    output reg						Branch_flag;
    output reg						not_memory_flag;
	// LS output
    output reg						MemRead1;
    output reg						MemWrite1;
    output reg						memory_flag;
    
    input			[31: 0]			write_register_data;
    input			[ 5: 0]			write_register_index;
    input							write_register_flag;
    
    
		// 103:103	1 link
		// 102:102	1 jumpReg
		// 101:101	1 jump
		// 100:100	1 branch
		// 099:099	1 MemWrite
		// 098:098	1 MemRead							
		// 097:097 Imm src			- LSQ & IQ
		// 096:096 Need Dest Reg?	- LSQ & IQ
		// 095:090 dest reg			- LSQ & IQ
		// 089:089 Src2 rdy			- IQ only
		// 088:083 Src2 phys reg 	- IQ only
		// 082:082 Src1 rdy 		- LSQ & IQ
		// 081:076 Src1 phys reg 	- LSQ & IQ
		// 075:044 32b signExt Imm	- LSQ & IQ
		// 043:038 ALU control		- LSQ & IQ
		// 031:000 Instr			- LSQ & IQ
	
	wire	[ 5: 0] wROBPointer;
    wire	[31: 0] wInstr;
    wire	[ 5: 0] wwriteRegister1;
    wire	[ 5: 0]	wreadRegisterA1;
	wire	[31: 0] wImmediate;
    wire	[ 5: 0]	wALU_control1;
	assign wROBPointer = IQ_full_OUT? IQ_popData_OUT[037:032] : LSQ_full_OUT? LSQ_popData_OUT[037:032] : 0;
    assign Instr = IQ_full_OUT? IQ_popData_OUT[031:000] : LSQ_full_OUT? LSQ_popData_OUT[031:000] : 0;
    assign writeRegister1 = IQ_full_OUT? IQ_popData_OUT[095:090] : LSQ_full_OUT? LSQ_popData_OUT[095:090] : 0;
    assign readRegisterA1 = IQ_full_OUT? IQ_popData_OUT[081:076] : LSQ_full_OUT? LSQ_popData_OUT[081:076] : 0;
	assign Immediate = IQ_full_OUT? IQ_popData_OUT[075:044] : LSQ_full_OUT? LSQ_popData_OUT[075:044] : 0;
    assign ALU_control1 = IQ_full_OUT? IQ_popData_OUT[043:038] : LSQ_full_OUT? LSQ_popData_OUT[043:038] : 0;
	
	reg		[31: 0] Reg [63:0];
	
	always @ (posedge CLK or negedge RESET) begin
		if(!RESET)
		begin
			ROBPointer <= 0;
			Instr1 <= 0;
			writeRegister1 <= 0;
			readRegisterA1 <= 0;
			Operand_A1 <= 0;
			Immediate <= 0;
			ALU_control1 <= 0;
			// instruction 1 input
			readRegisterB1 <= 0;
			Operand_B1 <= 0;
			Instr1_10_6 <= 0;
			ALUSrc1 <= 0;
			RegDest <= 0;
			Branch_flag <= 0;
			// LS output
			Dest_Value1 <= 0;
			MemRead1 <= 0;
			MemWrite1 <= 0;
		end
		else if(!FREEZE)
		begin
			ROBPointer <= wROBPointer;
			Instr1 <= wInstr;
			PCA <= IQ_full_OUT? IQ_popData_OUT[136:105] : LSQ_popData_OUT[136:105];
			writeRegister1 <= wwriteRegister1;
			readRegisterA1 <= wreadRegisterA1;
			Operand_A1 <= Reg[readRegisterA1];
			Immediate <= wImmediate;
			ALU_control1 <= wALU_control1;
			Dest_Value1 <= IQ_full_OUT? Reg[wwriteRegister1] : LSQ_full_OUT? Reg[wwriteRegister1] : 0;
			// instruction 1 input
			readRegisterB1 <= IQ_full_OUT? IQ_popData_OUT[088:083] : 0;
			Operand_B1 <= IQ_full_OUT? Reg[IQ_popData_OUT[088:083]] : 0;
			Instr1_10_6 <= IQ_full_OUT? wInstr[10:6] : 0;
			ALUSrc1 <= IQ_full_OUT? IQ_popData_OUT[097:097] : 0;
			RegDest <= IQ_full_OUT? IQ_popData_OUT[096:096] : 0;
			Branch_flag <= IQ_full_OUT? IQ_popData_OUT[100:100] : 0;
			not_memory_flag <= IQ_full_OUT;
			// LS output
			MemRead1 <= LSQ_full_OUT? IQ_popData_OUT[098:098] : 0;
			MemWrite1 <= LSQ_full_OUT? IQ_popData_OUT[099:099] : 0;
			memory_flag <= LSQ_full_out;
		end
	end
	
	always @ (posedge CLK)
	begin
		if (write_register_flag) 
			Reg[write_register_index] = write_register_data;
	end

endmodule
