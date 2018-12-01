`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:38:16 11/17/2018 
// Design Name: 
// Module Name:    Decimal 
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
module Decimal(
    input [3:0] A,
    input [3:0] B,
    output reg [3:0] C,
    input Carry_in,
	 output reg Carry_out
    );

reg [4:0] sumtemp;
always @(A or B or C )
begin 

	sumtemp = A+B+Carry_in;
	if(sumtemp>9)
		begin
			sumtemp=sumtemp+6;
			Carry_out=1;
			C=sumtemp[3:0];
		end


	else
		begin
			C=sumtemp[3:0];
			Carry_out=0;
		end
end

endmodule
