`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:49:23 10/23/2018 
// Design Name: 
// Module Name:    d_flip 
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
module d_flip(D,clk,Q);

input D,clk;
output Q;
reg Q;
always @(D or clk)

if(clk)
Q=D;
	 


endmodule
