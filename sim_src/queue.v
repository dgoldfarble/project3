/*
CIRCULAR FIFO Implementation

Boundary cases:
1. Empty buffer. Pop.
2. Empty Buffer. Push.
3. Empty Buffer. Push and popReq_IN.
4. Full Buffer. Push.
5. Full Buffer. Pop.
6. Full Buffer. Push and popReq_IN.
7. Normal case. Pop.
8. Normal case. Push.
9. Normal case. Push and popReq_IN.
*/

module queue (	clk,
				reset,
				pushReq_IN,		// Push	requested
				data_IN,		// Pushed data
				popReq_IN,		// Pop requested
				data_OUT,		// Popped data. Check popValid_OUT also
				emptyFlag_OUT,	// high when buffer is empty
				fullFlag_OUT,	// High when buffer is full
				popValid_OUT);	// High when the popped data is Valid. Can be during bypass or normal operation.

// SUPPLY DURING INSTANTIATION:
	parameter	DATA_WIDTH 	= 0; 	// in bits
	parameter	ADDR_WIDTH 	= 0;	// in bits
	parameter 	SHOW_DEBUG 	= 1; 	// True/False. Show debugging comments or not
	parameter	QUEUE_NAME	= "Q";	// Name of queue. Useful in debugging


/////////////////////////////////////////////////////////////////////////////////
input 	clk;
input	reset;
input	pushReq_IN;
input	popReq_IN;
input [DATA_WIDTH-1:0]	data_IN;

output [DATA_WIDTH-1:0]	data_OUT;
output 	emptyFlag_OUT;
output 	fullFlag_OUT;
output	popValid_OUT;

`define JUNK	(3134914741) 	// BADB00B5
`define MAX_BUF (1<<ADDR_WIDTH)	// Max no of elements in buf

reg	[DATA_WIDTH-1:0]	buffer [`MAX_BUF-1:0];
reg	[ADDR_WIDTH-1:0]	head;
reg [ADDR_WIDTH-1:0]	tail;
reg [ADDR_WIDTH :0]		count;

wire 	pushNpop;	// All systems are a go for pushing and a-poppin'
wire	doBypassBuf;// Bypass the buffer during simult. push and pop && buffer is currently empty


wire [DATA_WIDTH-1:0]	wDataIn;
assign wDataIn = (pushReq_IN)?data_IN:`JUNK;

////////////////////////////////////////////////////////////

assign 	emptyFlag_OUT 	= (count == 0);
assign 	fullFlag_OUT	= (count == `MAX_BUF);
assign 	doBypassBuf 	= emptyFlag_OUT && pushReq_IN && popReq_IN; // Bypass buffer when simult. read and write when empty
assign 	pushNpop 		= (!fullFlag_OUT && pushReq_IN) && (!emptyFlag_OUT && popReq_IN); // All systems are a go for pushing and a-poppin'

// Update buffer counter
always @(posedge clk) begin

	if (!reset)
		count		<= 0;
	else begin
		
		if (pushNpop || doBypassBuf)
			// This handles two cases. Both, when pushReq_IN and popReq_IN are
			// simultaneously high, but the first case is when the
			// buffer is neither empty nor full and the 2nd case is
			// when the buffer is empty
			count <= count;
		else if (popReq_IN)
		begin
			// popReq_IN
			if (emptyFlag_OUT)
				count <= count - 0;
			else
				count <= count - 1;
		end else if (pushReq_IN)
		begin
			// pushReq_IN
			if (fullFlag_OUT)
				count <= count + 0;
			else
				count <= count + 1;
		end
	end
end

// Get some tail or a head
always @(posedge clk) begin
	if (!reset) begin
		tail 		<= 0;
		head 		<= 0;
	end else begin
		if (!doBypassBuf) begin
			if ((!fullFlag_OUT && pushReq_IN))
				tail <= tail + 1;
			else
				tail <= tail;
				
			if (!emptyFlag_OUT && popReq_IN)
				head <= head + 1;
			else
				head <= head;		
		end else begin
			head <= head;
			tail <= tail;
		end
	end
end

// Do pushReq_IN
always @(posedge clk) begin
	if (!reset) begin
		buffer[tail] <= 0;
	end
	else if ((!fullFlag_OUT && pushReq_IN) && !doBypassBuf) begin
		buffer [tail] <= wDataIn;
	end 
	else begin
		buffer [tail] <= buffer [tail];
	end
end


// Do popReq_IN
always @(posedge clk) begin
	
	if (!reset)
	begin
		data_OUT <= `JUNK;
	end else
	begin
		if (doBypassBuf) begin
			data_OUT <= wDataIn;
			popValid_OUT <= 1;
		end
		else if (!emptyFlag_OUT && popReq_IN) begin
			data_OUT <= buffer [head];
			popValid_OUT <= 1;
		end
		else begin
			data_OUT <= `JUNK;	
			popValid_OUT <= 0;
		end
	end
end


////////////// DEBUG STUFF////////////////////////////////////////////////

integer	idx;
reg [ADDR_WIDTH-1:0]	shortIdx;

always @(posedge clk) begin
	if (SHOW_DEBUG)
	begin
		$display("----------------Q: %s------------------",QUEUE_NAME);
		$display("Count: %d %s%s %s", count, (emptyFlag_OUT)?"EMPTY!":" ", (fullFlag_OUT)?"FULL!":" ", (doBypassBuf)?"<---BYPASS!":" ");
		$display("Push: %s(%x) Pop: %s(%x) %s", (pushReq_IN)?"Y":"N", wDataIn, (popReq_IN)?"Y":"N", data_OUT, (pushNpop)?"<---PUSHPOP":"       ");
		// $display("In:%x Out:%x", data_IN, data_OUT);
		for (idx = 0; idx < `MAX_BUF; idx = idx + 1)
		begin
			shortIdx = idx[ADDR_WIDTH-1:0];
			
			if (shortIdx == tail && shortIdx== head)
				$display ("BUF[%d]: %x %s", idx, buffer[idx], "<--HEAD <--TAIL");
			else begin
				if (shortIdx == head)
					$display ("BUF[%d]: %x %s", idx, buffer[idx], "<--HEAD");
				
				if (shortIdx == tail)
					$display ("BUF[%d]: %x %s", idx, buffer[idx], "        <--TAIL");
			end

			if (shortIdx != tail && shortIdx!= head)
				$display ("BUF[%d]: %x %s", idx, buffer[idx], "");		
		end
	
	end // if (SHOW_DEBUG)
end

initial begin
		for (idx = 0; idx < `MAX_BUF; idx = idx + 1)
		begin
			buffer[idx] = `JUNK;
		end
end

endmodule
