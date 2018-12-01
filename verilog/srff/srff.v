`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:59:14 10/29/2018 
// Design Name: 
// Module Name:    srff 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module srff(
    input s,
    input r,
    input clk,
    output reg q,
    output reg q1
    );

reg [1:0]sr;

	always @(posedge clk)
	  begin
	  sr={s,r};
	  case(sr)
		 2'd0: begin q=q; q1=q1; end
		 2'd1: begin q=1'b0; q1=1'b1; end
		 2'd2: begin q=1'b1; q1=1'b0; end
		 2'd3: begin q=1'bx; q=1'bx; end
	endcase
	end

endmodule
