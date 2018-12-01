`timescale 1ns / 1ps
module main( q_out, qbar_out, clk, reset);

	 input clk; input reset;
    output [1:0] q_out;
    wire [1:0] q_out;
    output [1:0] qbar_out;
	 wire [1:0] qbar_out;
    wire clk;
	 
	 
    jkff M2(q_out[1], qbar_out[1], 1, 1, clk,reset);
	 
    jkff M1(q_out[0], qbar_out[0], 1,1, clk, reset);
   
endmodule

module jkff(output q_out, output qbar_out,
  input j, input k, input clk, input reset);

    reg q;
    assign q_out = q;
    assign qbar_out = ~q;

    always @(posedge clk or posedge reset)
begin
  if (reset == 1'b1) begin
    q <= 1'b0;
  end
  else begin
    case({j,k})
    {1'b0, 1'b0}: begin
        q <= q;
        end
    {1'b0, 1'b1}: begin
        q <= 1'b0;
        end
    {1'b1, 1'b0}: begin
        q <= 1'b1;
        end
    {1'b1, 1'b1}: begin
        q <= ~q;
        end
    endcase
  end
end
endmodule
