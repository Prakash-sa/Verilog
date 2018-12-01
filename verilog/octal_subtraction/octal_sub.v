`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:58:33 11/19/2018 
// Design Name: 
// Module Name:    octal_sub 
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
module octal_sub(
    input [5:0] a,
    input [5:0] b,
    input cin,
    output [5:0] d
    );

    wire [6:1] borrow; 
     full_sub FA0(borrow[1],d[0],a[0],b[0],cin);
     full_sub FA1(borrow[2],d[1],a[1],b[1],borrow[1]);
     full_sub FA2(borrow[3],d[2],a[2],b[2],borrow[2]);

     full_sub FA3(borrow[4],d[3],a[3],b[3],borrow[3]);
     full_sub FA4(borrow[5],d[4],a[4],b[4],borrow[4]);
     full_sub FA5(borrow[6],d[5],a[5],b[5],borrow[5]);

endmodule
