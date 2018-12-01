`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:45:53 10/28/2018 
// Design Name: 
// Module Name:    flip_flop 
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
module flip_flop(
    input d,
    input clk,
    input en,
    input pre,
    output reg q
    );

always @(posedge clk or posedge pre)
begin
if(pre) 
	q<=1'b1;
else if (en)
	q<=d;

end

endmodule

