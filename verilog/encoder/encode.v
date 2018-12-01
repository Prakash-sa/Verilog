`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:01:02 10/23/2018 
// Design Name: 
// Module Name:    encode 
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
module encode(en_in,en_out,enable
    );
input [15:0]en_in;
input enable;
output [3:0]en_out;
reg [3:0]en_out;

always @ (enable or en_in)
begin
	if(enable) begin
		if(en_in==16'h0001)begin
			en_out=0;
		end if(en_in==16'h0002)begin
			en_out=1;
		end if(en_in==16'h0004)begin
			en_out=2;
		end if(en_in==16'h0008)begin
			en_out=3;
		end if(en_in==16'h0010)begin
			en_out=4;
		end if(en_in==16'h0020)begin
			en_out=5;
		end if(en_in==16'h0040)begin
			en_out=6;
		end if(en_in==16'h0080)begin
			en_out=7;
		end if(en_in==16'h0100)begin
			en_out=8;
		end if(en_in==16'h0200)begin
			en_out=9;
		end
	end
end

endmodule
