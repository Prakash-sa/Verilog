`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:42:37 11/16/2018 
// Design Name: 
// Module Name:    main 
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
module main(
    input [3:0] A,
    output [5:0] B
    );
	 
assign B[0]=A[0];
assign B[1]=((~A[1])&A[0])|(A[1]&(~A[0]));
assign B[3]=((~A[3])&A[2]&(~A[1]))|(A[3]&A[2]&A[1])|(A[3]&(~A[2])&(~A[1]))|(A[3]&A[1]&(~A[0]))|((~A[3])&(~A[2])&A[1]&A[0]);
assign B[2]=(A[2]&(~A[1]))|(A[2]&A[0])|(A[3]&A[2]&A[1])|(A[3]&A[1]&(~A[0]))|((~A[2])&A[1]&(~A[0]));
assign B[4]=(A[3]&(~A[2])&(~A[1]))|((~A[3])&A[2]&A[1])|(A[3]&(~A[2])&(~A[0]));
assign B[5]=(A[3]&A[2])|(A[3]&A[1]&A[0]);

endmodule
