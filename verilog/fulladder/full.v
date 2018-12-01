`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:47:25 10/26/2018 
// Design Name: 
// Module Name:    full 
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
module full(
    input x,
    input y,
    input z,
    output sum,
    output carry
    );
wire and_1,and_2,xor_2;
    
xor u_xor_1 (sum,x,y,z);
xor u_xor_2 (xor_2,z,y);
	 
and u_and1 (and_1,z,y);
and u_and2 (and_2,x,xor_2);
	
or u_or (carry,and_1,and_2);




endmodule
