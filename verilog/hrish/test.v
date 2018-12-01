`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:54:24 11/20/2018
// Design Name:   main
// Module Name:   C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/hrish/test.v
// Project Name:  hrish
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg d;
	reg clk;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.d(d), 
		.clk(clk), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		d = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

