`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:54:47 11/19/2018
// Design Name:   main
// Module Name:   C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/melay_machine/my.v
// Project Name:  melay_machine
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

module my;

	// Inputs
	reg clk;
	reg rst;
	reg inp;

	// Outputs
	wire outp;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.rst(rst), 
		.inp(inp), 
		.outp(outp)
	);

	initial begin
		// Initialize Inputs
		clk = 1`'b0;
		rst = 0;
		inp = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

