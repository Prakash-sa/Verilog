`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:20 11/20/2018 
// Design Name: 
// Module Name:    bbbhgh 
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
module bbbhgh(L,clock,Q
    );
input [3:0]L;
input clock ;
output [4:0] Q;
reg [4:0]Q;
always @(posedge clock) begin 

Q<=L<<1;
end

endmodule
