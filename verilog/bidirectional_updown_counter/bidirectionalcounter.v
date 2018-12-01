`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:16:27 11/19/2018 
// Design Name: 
// Module Name:    bidirectionalupdowncounter 
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
module bidirectionalupdowncounter(q,clk,reset,mode);
input mode,clk,reset;output [3:0]q;
reg [3:0]q;
always @(posedge clk) begin
if (reset)  begin
q=4'b0000;
end
else if (mode) begin
q=q+4'b0001;
end
else begin
q=q-4'b0001;
end
end


endmodule 