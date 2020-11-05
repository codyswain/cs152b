`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:54:55 11/05/2020
// Design Name:   lab2
// Module Name:   /home/ise/Xilinx_shared/cs152b/lab2/lab2_TB.v
// Project Name:  lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab2_TB;

	// Inputs
	reg clk;
	reg reset;
	reg sensor;
	reg button_walk;

	// Outputs
	wire light_walk;
	wire [2:0] light_main;
	wire [2:0] light_side;
	
	// Masked outputs
	wire main_r, main_y, main_g;
	wire side_r, side_y, side_g;
	
	assign Rm = light_main[2];
	assign Ym = light_main[1];
	assign Gm = light_main[0];
	
	assign Rs = light_side[2];
	assign Ys = light_side[1];
	assign Gs = light_side[0];

	// Instantiate the Unit Under Test (UUT)
	lab2 uut (
		.clk(clk),
		.reset(reset),
		.sensor(sensor), 
		.button_walk(button_walk), 
		.light_walk(light_walk), 
		.light_main(light_main), 
		.light_side(light_side)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		sensor = 0;
		button_walk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#100;
		reset = 0;
		
		// Run through normal cycle 
		// #22000000000
		
		// Side Sensor alters main duration
		sensor = 1;
		// #9000000000
		sensor = 0;
		// #11000000000
		
		// Side Sensor alters side duration
		// #16000000000
		sensor = 1;
		// #5000000000
		sensor = 0;
		
		// Checking walk button latches
		button_walk = 1;
		#100
		button_walk = 0;
		
		
	end

	always @(*) begin
		#100 clk <= ~clk;
	end
      
endmodule

