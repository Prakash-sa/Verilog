`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:37:36 10/29/2018 
// Design Name: 
// Module Name:    jkff 
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
module jkff(
    input j,
    input k,
    input clk,
    output reg q,
    output reg q1
    );
wire and1,and2,res;
and u_1(and1,j,~q);
and u_2(and2,~k,q);
or u_3(res,and1,and2);

always @(posedge clk) begin
assign q=res;
assign q1=~q;
end
endmodule
