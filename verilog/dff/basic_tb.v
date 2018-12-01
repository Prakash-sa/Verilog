// Verilog test fixture created from schematic C:\Users\Prakash Saini\Documents\study\hardareprograming\newproject\basic.sch - Sun Aug 12 11:42:38 2018

`timescale 1ns / 1ps

module basic_basic_sch_tb();

// Inputs
   reg B;
   reg C;
   reg A;

// Output
   wire F1;

// Bidirs

// Instantiate the UUT
   basic UUT (
		.B(B), 
		.C(C), 
		.A(A), 
		.F1(F1)
   );
// Initialize Inputs
   `ifdef auto_init
       initial begin
		B = 0;
		C = 0;
		A = 0;
   `endif
endmodule
