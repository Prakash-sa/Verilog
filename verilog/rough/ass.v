module partialproduct(input1,segment,output1);
	input [3:0] input1;
	input [2:0] segment;
	output reg [7:0] output1;
	
		always @(*) begin
			case (segment)
				3'b000:output1=$unsigned(1'b0);
				3'b001:output1=$unsigned(input1);
				3'b010:output1=$unsigned(input1);
				3'b011:
					begin
					output1=$unsigned(input1);
					output1=$unsigned(input1)<<<1;
					end
				3'b100:begin
					output1=$unsigned(input1);
					output1=$unsigned(~output1+1'b1);
					output1=$unsigned(output1)<<<1;
					end
				3'b101:begin
					output1=$unsigned(input1);
					output1=$unsigned(~output1+1'b1);
					end
				3'b110:begin
					output1=$unsigned(input1);
					output1=$unsigned(~output1+1'b1);
					end
				3'b111:output1=$unsigned(4'b0);	
			endcase
		end
	
endmodule
 
module boothmulitplier(a,b,c);
	input [3:0] a;
	input [3:0] b;
	output [7:0] c;
	wire [7:0] temp [1:0];
	
	partialproduct p0(a,{b[1:0],1'b0},temp[0]);
	partialproduct p1(a,b[3:1],temp[1]);
	
	
	
	assign c = $unsigned(temp[0])+$unsigned(temp[1]<<<2);
	
	
endmodule