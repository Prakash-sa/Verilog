`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:24:21 11/19/2018 
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
module main(input [7:0] A,
input [7:0] B,
output reg [7:0] O,
output C_out
    );
reg [7:0]def;
reg [7:0]def2;
reg [7:0]def1;
always @(*)begin

if(A>B) begin
def = 8'b11111111-B;
O=A+def+1'b1;


end
else if (A<B) begin
def1 = 8'b11111111-B;
def2=A+def1;
O = -8'b11111111+def2;
end
else if (A==B) begin
O=8'b00000000;
end

end
endmodule
