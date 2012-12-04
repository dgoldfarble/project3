// ISS
module ISS	(	// inputs
				// outputs
			);

parameter IQDataWidth = 32;

input CLK;
input RESET;
input FREEZE;
input pushLSQ;
input pushIQ;


output reg IQfull;
output reg LSQfull;
output reg [IQDataWidth-1:0] IQ_OUT;
output reg [LSQDataWidth-1:0] LS_OUT;

/* pseudocode

	parameter phys_reg_specifier = 64;
	reg busy_bits [phys_reg_specifier-1:0];


//=============================================================================================
// LSQ begin
//=============================================================================================
/*	One element of LSQ:
	---6b---1---6b--------16b-----------6b---
	|00DR00|R|00SR00|0000 IMM 0000000| ROBP |
	-----------------------------------------
	
	 F E D C B A 9 8 7 6 5 4 3 2 1 0
	---------------------------------
	| | | | | | | | | | | | | | | | |
	---------------------------------
	 ^							   ^
	 |							   |
	tail						  head


	parameter reg_specifier_bits = 6;
	parameter ROB_pointer_bits = 6;
	parameter LSQWidth = 1 + reg_specifier_bits*2 + 16 + ROB_pointer_bits - 1; // 1 ready bit, 2 register specifiers, 16 immediate field, 1 ROB address;
	parameter LSQLength = 16;
	parameter LSQIndex = 4;
	
	queue LSQ(junk);
	
	always @(posedge CLK) begin
		if(LSQ.head.ready) begin
			pop LS data
			update busy bits
			LS_OUT <= popped LS data
		end
		if(pushLSQ) begin
			push LS data
			update busy bits
		end
	end
//=================================================================================================
// end
//=================================================================================================	
	

	parameter IQLength = 16;
	parameter IQIndex = 4;
	parameter IQWidth = 64; // to be changed
	reg [IQLength-1:0] IQ [IQWidth-1:0];
	reg tail_pointer [IQIndex-1:0];
	
	
	
	
	

*/

	
