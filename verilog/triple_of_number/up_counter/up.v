`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:30:27 11/18/2018 
// Design Name: 
// Module Name:    up 
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
module up(
    output reg [1:0] q,
    input clk,
    input reset
    );
always @(posedge clk ) begin


	if (reset)  begin
	q=2'b00;
	end
	else begin
	q=q+2'b01;
	end


end

endmodule
