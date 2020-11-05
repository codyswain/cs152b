`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:43:55 11/05/2020
// Design Name:   TimerFunctions
// Module Name:   /home/ise/Xilinx_Shared/cody_repo/cs152b/lab2/TimerFunctionsTest.v
// Project Name:  lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TimerFunctions
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TimerFunctionsTest;

	// Inputs
	reg clk;
	reg reset;
	reg [1:0] which_clk;

	// Outputs
	wire timer;

	// Instantiate the Unit Under Test (UUT)
	TimerFunctions uut (
		.clk(clk), 
		.reset(reset), 
		.which_clk(which_clk), 
		.timer(timer)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		which_clk = 2'b11;

		// Wait 100 ns for global reset to finish
		#500;
		
		reset = 1;
		#500;
		reset = 0;
      #500;
		// Add stimulus here
		
	end
	
	always @(*) begin
		#100 clk <= ~clk;
	end
	
	always @(*) begin
		@(posedge timer) begin which_clk <= which_clk + 1; $display("changing now"); end
	end

      
endmodule

