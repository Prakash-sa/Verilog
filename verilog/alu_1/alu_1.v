`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:18:22 10/28/2018 
// Design Name: 
// Module Name:    alu_1 
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
module alu_1(
    input [1:0] func,
    input [3:0] a,
    input [3:0] b,
    output reg [3:0] c
    );
	 
	integer i;
	always @(func or a or b) 
	begin
   
		case(func)
			
			2'b00 : 
				
					begin
						for(i=3;i>=0;i=i-1) begin
							c[i] = a[i]&b[i];
						end
					end
			2'b01 : c = a | b;
			2'b10 : c = a - b;
			default : c = a+b;
		endcase
	end


	

endmodule
