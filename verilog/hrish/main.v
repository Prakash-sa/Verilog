`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:52:28 11/20/2018 
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
module main(d,clk,q);
input d;
input clk;
wire d;
wire clk;
output q;
reg q;
initial
q = 1'b0;
always @(posedge clk)begin
q <= d;
end
endmodule
//************************Test Bench******************//


