`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:08:27 11/05/2020
// Design Name:   Clock
// Module Name:   /home/ise/Xilinx_Shared/Lab2/Clock_test.v
// Project Name:  Lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Clock
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Clock_test;

	// Inputs
	reg clk;
	reg reset;
	
	// Outputs
	wire seconds;
	
	// Instantiate the Unit Under Test (UUT)
	Clock uut (
		.clk(clk),
		.reset(reset),
		.seconds(seconds)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		// Wait 100 ns for global reset to finish
		#100;
      reset = 1;
		#500;
		reset = 0;
		// Add stimulus here
	end
	
	always @(*) begin
		#100 clk <= ~clk;
	end
      
endmodule

