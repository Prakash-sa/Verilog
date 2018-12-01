`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:51:42 10/29/2018 
// Design Name: 
// Module Name:    srff 
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
module srff(
    input s,
    input r,
    input clk,
    output reg q,
    output reg q1
    );

wire and1,res;
and u_1(and1,~r,q);
or u_2(res,s,and1);
always @(posedge clk) begin
assign q = res;
assign q1 = ~q;
end

endmodule
