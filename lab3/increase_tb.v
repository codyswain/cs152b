`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:03:42 11/20/2020
// Design Name:   increase
// Module Name:   /home/ise/Xilinx_shared/cs152b/lab3/increase_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: increase
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module increase_tb;

	// Inputs
	reg [7:0] image_input;
	reg enable;
	reg enable_process;
	reg clk;

	// Outputs
	wire [7:0] image_output;
	wire finish;
	
	// TEMP 
	wire [15:0] rpo;
	wire [15:0] cpo;
	
		// Test Variables
	integer fd_in; 		// Input file descriptor
	integer fd_out;		// Output file descriptor
	integer reader; 		// Current position in file
	integer pixel;			// Current pixel
	integer WIDTH, DEPTH;
	
	parameter FILTER_SIZE = 3;

	// Instantiate the Unit Under Test (UUT)
	increase uut (
		.image_input(image_input), 
		.enable(enable), 
		.enable_process(enable_process), 
		.clk(clk), 
		.image_output(image_output), 
		.finish(finish),
		.rpo(rpo),
		.cpo(cpo)
	);

	initial begin
		// Initialize Inputs
		image_input = 0;
		enable = 0;
		enable_process = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		// Variable Assignment
		WIDTH = 410;
		DEPTH = 361;
        
		// File Descriptor Assigment
		fd_in = $fopen("noisy_cat.text", "r");
		if (!fd_in) begin
			$display("Input file not opened successfully: %0d", fd_in);
			$finish;
		end
		fd_out = $fopen("increased_image.text", "w");
		if (!fd_out) begin
			$display("Output file not opened successfully: %0d", fd_out);
			$finish;
		end
		
		#100
		
		// Load image into memory
		enable = 1; enable_process = 0;
		for (pixel=0; pixel<WIDTH*DEPTH; pixel=pixel+1) begin
			reader = $fscanf(fd_in, "%d,", image_input); #2;
		end
		
		// Perform data processing
		enable = 0; enable_process = 1;
	end
	
	// Triggered when processing is finished
	always @(finish) begin
		for (pixel=0; pixel<(1230*1083); pixel=pixel+1) begin // 1332090
			if (pixel == (1230*1083)-1) begin
				$fwrite(fd_out, "%d", image_output);
			end else begin
				$fwrite(fd_out, "%d,", image_output); #2;
			end
		end
		
		// Clean up
		// $fclose(fd_in);
		//$fclose(fd_out);
	end
	
	always
		#1 clk = !clk; // T = 2ns
      
endmodule

