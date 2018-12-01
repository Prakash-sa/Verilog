`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:00:44 11/19/2018 
// Design Name: 
// Module Name:    full_sub 
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
module full_sub(
output borrow,
    output diff,
    input ain,
    input bin,
    input cin
    );
	assign diff = ain^bin^cin;

    assign borrow = ((~ain)&bin) | (bin&cin) |(cin&(~ain));


endmodule
