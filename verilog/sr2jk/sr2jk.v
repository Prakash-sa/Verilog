`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:03:32 10/29/2018 
// Design Name: 
// Module Name:    sr2jk 
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
module sr2jk(
    input j,
    input k,
    input clk,
    output q,
    output q1
    );
	 
and u1(w,j,q1);
and u2(x,~k,q);
srff u3(x,w,clk,q,q1);

endmodule
