`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:56:53 11/20/2020 
// Design Name: 
// Module Name:    increase 
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

module increase(
	image_input,
	enable,
	enable_process,
	clk,
	image_output,
	finish,
	rpo,
	cpo
);

input [7:0] image_input;
input enable, enable_process, clk;
output reg [7:0] image_output;
output reg finish;

// Image resolution
parameter WIDTH = 410;
parameter DEPTH = 361;

// Filter size determines image padding
parameter FILTER_SIZE = 3;
`include "MedianFilter.v"

reg [7:0] raw_image[0:WIDTH][0:DEPTH];
reg [7:0] processed_image[0:WIDTH*FILTER_SIZE][0:DEPTH*FILTER_SIZE];

// Current position input & output
reg [8:0] rpi;
reg [8:0] cpi;
output reg [15:0] rpo;
output reg [15:0] cpo;
reg [15:0] rpo1;
reg [15:0] cpo1;

integer row, col;
integer i, j; 
reg done; 

initial begin

	// Cur pixel positions
	// Cur pixel positions
	rpi = 0;
	cpi = 0; 
	rpo = 0;
	cpo = 0; 
	rpo1 = 0;
	cpo1 = 0; 
	
	// Initialize both matrices
	for (row=0; row<WIDTH; row=row+1) begin
		for (col=0; col<DEPTH; col=col+1) begin
			raw_image[row][col] = 0;
		end
	end
	
	// Initialize processed matrix
	for (row=0; row<WIDTH*FILTER_SIZE; row=row+1) begin
		for (col=0; col<DEPTH*FILTER_SIZE; col=col+1) begin
			processed_image[row][col] = 0;
		end
	end
	
	done = 0;
	finish = 0;
end

always @(posedge clk) begin

	// Store raw image in memory
	if (enable) begin
		raw_image[rpi][cpi] = image_input;
		if (rpi + 1 == WIDTH) begin
			rpi = 0;
			if (cpi + 1 == DEPTH) begin
				cpi = 0;
			end else begin
				cpi = cpi + 1;
			end
		end else begin
			rpi = rpi + 1;
		end
	end
	
	// Processing
	if (!enable && enable_process && !finish) begin
		processed_image[rpo][cpo] = raw_image[rpo/FILTER_SIZE][cpo/FILTER_SIZE];
		//$display("Processed image at X %d and Y %d is: %h", rpo, cpo, processed_image[rpo][cpo]);
		
		// Update coordinates
		if (rpo + 1 == WIDTH*FILTER_SIZE) begin
			rpo = 0;
			if (cpo + 1 == DEPTH*FILTER_SIZE) begin
				finish = 1; 
				cpo = 0; 
			end else begin
				cpo = cpo + 1; 
			end
		end else begin
			rpo = rpo + 1;
		end
	end
	
	// Send processed image to output
	if (finish && !done) begin
		image_output = processed_image[rpo1][cpo1];
		
		if (rpo1 + 1 == WIDTH*FILTER_SIZE) begin
			rpo1 = 0;
			if (cpo1 + 1 == DEPTH*FILTER_SIZE) begin
				done = 1;
			end else begin
				cpo1 = cpo1 + 1; 
			end
		end else begin
			rpo1 = rpo1 + 1;
		end
	end
end

endmodule

