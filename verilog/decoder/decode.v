`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:21:55 10/23/2018 
// Design Name: 
// Module Name:    decode 
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
module decode(de_in,en,de_out);

input [3:0]de_in;
input en;
output [15:0]de_out;
reg [15:0]de_out;

always @ (de_in or en)
begin
	if(en) begin
		case(de_in)
			4'h0 : de_out=16'h0001;
			4'h1 : de_out=16'h0002;
			4'h2 : de_out=16'h0004;
			4'h3 : de_out=16'h0008;
			
			4'h4 : de_out=16'h0010;
			4'h5 : de_out=16'h0020;
			4'h6 : de_out=16'h0040;
			4'h7 : de_out=16'h0080;
			
			4'h8 : de_out=16'h0100;
			4'h9 : de_out=16'h0200;
			4'hA : de_out=16'h0400;
			4'hB : de_out=16'h0800;
			
			4'hC : de_out=16'h1000;
			4'hD : de_out=16'h2000;
			4'hE : de_out=16'h4000;
			4'hF : de_out=16'h8000;
		endcase
	end
end

endmodule
