`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:45:47 11/20/2018 
// Design Name: 
// Module Name:    prakashraj 
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
module dff(d,clk,q);
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
module FOURbit_up_B();
reg clk;
reg d;
wire [3:0]q;
initial
clk = 0;
always 
#1 clk = !clk;
dff a1(!q[0],clk,q[0]);
dff a2(!q[1],!q[0],q[1]);
dff a3(!q[2],!q[1],q[2]);
dff a4(!q[3],!q[2],q[3]);
endmodule
