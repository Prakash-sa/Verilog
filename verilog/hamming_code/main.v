`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:02:15 11/20/2018 
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



module main(data,data_parity,clk,out,bit_error,k);
  input [7:0]data;
  input [11:0]data_parity;
  input clk;
  output [11:0]out,k;
  output [3:0]bit_error;
  reg [5:0]p1;
  reg [5:0]p2;
  reg [4:0]p3;
  reg [4:0]p4;
  reg [11:0]copy1;
  integer i;
  initial i = 1;
  always @(posedge clk)begin
    if(i==1)
                     copy1 = data_parity;
                     i = 2;
  end
  always @(posedge clk)begin
    p1 = {copy1[11],copy1[9],copy1[7],copy1[5],copy1[3],copy1[1]};
                     p2 = {copy1[10:9],copy1[6:5],copy1[2:1]};
                     p3 = {copy1[8:5],copy1[0]};
                     p4 = copy1[4:0];
  end
 
  wire o11,o10,o8,o4;
  wire [31:0]noise;
  count c1(p1,o11,clk);
  count c2(p2,o10,clk);
  count c3(p3,o8,clk);
  count c4(p4,o4,clk);
  assign out ={o11,o10,data_parity[9],o8,data_parity[7:5],o4,data_parity[3:0]};
  error_detect err(out,clk,p1,p2,p3,p4,bit_error,k);
endmodule

module count(in,out,clk);
input [5:0]in;
input clk;
output reg out;
reg [5:0]stor;
reg j;
reg [2:0]k;
integer i,m;
initial begin
i = 0;
m = 0;
k = 3'b0;
end
always @(in)begin
stor <= in;
end
always @(posedge clk)begin
if(k<7)begin
j = stor[5];
if(j==1)
i = i + 1;
k = k + 1;
stor = stor<<1;
end
if(k==7)begin
if(i%2==0)
out = 1'b0;
else
out = 1'b1;
end
end
endmodule

module error_detect(input [11:0]in,input clk,input [5:0]p1,p2,input [4:0]p3,p4,output reg [3:0]bit_error,output reg[11:0]k);
reg [3:0]num;
reg [31:0]num1;
//integer bit_error;
initial  begin
bit_error = 0;
num1 = 32'b0;
num = num1[31:28];
end
always @(in)
k <= in;
reg [5:0]p1x,p2x;reg [4:0]p3x,p4x;
always @(posedge clk)begin
k[num] = 1;
                     p1x = {k[11],k[9],k[7],k[5],k[3],k[1]};
                     p2x = {k[10:9],k[6:5],k[2:1]};
                     p3x = {k[8:5],k[0]};
                     p4x = k[4:0];
end
always @(p1)begin
if(p1!=p1x)
bit_error = bit_error + 1;
if(p2!=p2x)
bit_error = bit_error + 2;
if(p3!=p3x)
bit_error = bit_error + 4;
if(p4!=p4x)
bit_error = bit_error + 8;
end
endmodule





