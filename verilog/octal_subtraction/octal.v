`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:09:41 11/19/2018
// Design Name:   octal_sub
// Module Name:   C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/octalsub/octal.v
// Project Name:  octalsub
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: octal_sub
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module octal;

	// Inputs
	reg [5:0] a;
	reg [5:0] b;
	reg cin;

	// Outputs
	wire [5:0] d;

	// Instantiate the Unit Under Test (UUT)
	octal_sub uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.d(d)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

