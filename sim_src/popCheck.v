// popCheck

module popCheck (clk, reset, popOut, dataIn, emptyIn, popValidIn);

parameter DATA_WIDTH = 0;

input	clk, reset, emptyIn, popValidIn;
input 	[DATA_WIDTH-1:0] dataIn;

output	popOut;

// Used to simulate popping
parameter popOrder = 64'h0000_0000_0000_FFFF;//{16'b0000_0000_0010_0000, 48'hFFFF_0000_FFFF};//
reg [5:0] counter;	// Iterate through popOrder
assign popOut = |((popOrder<<counter) & (1<<63)); // Shift popOrder and extract MSb


parameter comment = 1;
always @(posedge clk) begin

	if (reset) 
	begin
	
		//if (!emptyIn) begin
			counter <= counter + 1;
		//end
	
		if (comment) 
		begin
			$display("");
			$display("POPCHECK: Ctr:%d   Empty:%s\t%s\tdataIn:%s(%x)", counter, (emptyIn)?"Y":"N", (popOut)?"POPOUT":"      ", (popValidIn)?"VALID":"INVALID", dataIn);
		end
	
	end
end


// always @(posedge clk) begin

	// if (!reset) begin
		// $display("POPCHECK: RESET");
		// popOut <= 0;
		// counter <= 0;
	// end
	// else begin
	
	
	// end
// end

endmodule
