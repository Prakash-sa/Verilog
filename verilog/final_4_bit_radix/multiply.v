`timescale 1ns / 1ps
module partial(input [3:0] input1,
input [2:0] seg,
output reg [7:0] output1 );

	always @(*) begin

	 case(seg) 
					3'b000:output1=$signed(1'b0);
					3'b001:output1=$signed(input1);
					3'b010:output1=$signed(input1);
					3'b011:
						begin
						output1=$signed(input1);
						output1=$signed(input1)<<<1;
						end
					3'b100:begin
						output1=$signed(input1);
						output1=$signed(~output1+1'b1);
						output1=$signed(output1)<<<1;
						end
					3'b101:begin
						output1=$signed(input1);
						output1=$signed(~output1+1'b1);
						end
					3'b110:begin
						output1=$signed(input1);
						output1=$signed(~output1+1'b1);
						end
					3'b111:output1=$signed(4'b0);	
		endcase


	end

endmodule


module multiply(input [3:0] a,
input [3:0] b,
output [7:0] c
    );
	 
wire [7:0] temp [1:0];
partial p0(a,{b[1:0],1'b0},temp[0]);
partial p1(a,b[3:1],temp[1]);
	 
assign c = $signed(temp[0])+$signed(temp[1]<<2);

endmodule
