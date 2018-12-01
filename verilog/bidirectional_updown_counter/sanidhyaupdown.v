`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:36:15 11/19/2018
// Design Name:   bidirectionalupdowncounter
// Module Name:   C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/sanidhyabidirectionalupdowncounter/sanidhyaupdown.v
// Project Name:  sanidhyabidirectionalupdowncounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bidirectionalupdowncounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sanidhyaupdown;

	// Inputs
	reg up_down;
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	bidirectionalupdowncounter uut (
		.out(out), 
		.up_down(up_down), 
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		up_down = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

