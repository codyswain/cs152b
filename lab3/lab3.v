`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:49:29 11/18/2020 
// Design Name: 
// Module Name:    lab3 
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
module lab3(
	image_input,
	enable,
	enable_process,
	clk,
	image_output,
	finish
);

input [7:0] image_input;
input enable, enable_process, clk;
output reg [7:0] image_output;
output reg finish;
reg done; 

// Image & Filter Size
parameter WIDTH = 410;
parameter DEPTH = 361;
parameter FILTER_SIZE = 3;
`include "MedianFilter.v"

// Raw & Processed Image Memory
reg [7:0] raw_image[0:WIDTH+(FILTER_SIZE/2)][0:DEPTH+(FILTER_SIZE/2)];
reg [7:0] processed_image[0:WIDTH+(FILTER_SIZE/2)][0:DEPTH+(FILTER_SIZE/2)];

// Actual image starting position (adjusted for padding)
reg [3:0] img_start;

// Current position (input & output) 
reg [8:0] rpi;
reg [8:0] cpi;
reg [8:0] rpo;
reg [8:0] cpo;

// Median Filter Variables
reg [10:0] pixel_avg;
reg [FILTER_SIZE*FILTER_SIZE*8:0] window;


// Loop counters
integer row, col;
integer i, j, k;

initial begin
	done = 0;
	finish = 0;

	// Adjusted image start coordinate (w/ padding)
	assign img_start = FILTER_SIZE >> 1;
	
	// Set inital values for reading pixels
	rpi = img_start;
	cpi = img_start; 
	rpo = img_start;
	cpo = img_start;
	
	// Zero pad the 2D image matrices
	for (row=0; row<WIDTH+(FILTER_SIZE-1); row=row+1) begin
		for (col=0; col<DEPTH+(FILTER_SIZE-1); col=col+1) begin
			raw_image[row][col] = 0;
			processed_image[row][col] = 0;
		end
	end
end

always @(posedge clk) begin

	// Populate raw_image matrix
	if (enable) begin
		raw_image[rpi][cpi] = image_input;
		if (rpi + 1 == WIDTH) begin
			rpi = img_start; // reset
			if (cpi + 1 == DEPTH) begin
				cpi = img_start; // reset
			end else begin
				cpi = cpi + 1;
			end
		end else begin
			rpi = rpi + 1;
		end
	end
	
	// Processing
	if (!enable && enable_process && !finish) begin
		
		// Case determines computation
		case (1) 
			3'b000  : begin // Low pass filter
				pixel_avg = 
					raw_image[rpo-1][cpo-1] + raw_image[rpo][cpo-1] + raw_image[rpo+1][cpo-1] +
					raw_image[rpo-1][cpo] + raw_image[rpo][cpo] + raw_image[rpo+1][cpo] +
					raw_image[rpo-1][cpo+1] + raw_image[rpo][cpo+1] + raw_image[rpo+1][cpo+1];
				pixel_avg = pixel_avg / 9;
				processed_image[rpo][cpo] = pixel_avg[7:0]; //pixel_avg = {2'b00, pixel_avg[7:2]};
			end
			3'b001 : begin // Median Filter
				k = 0; 
				for (i = rpo - (FILTER_SIZE /2); i <= rpo + (FILTER_SIZE /2); i=i+1) begin
					for (j = cpo - (FILTER_SIZE /2); j <= cpo + (FILTER_SIZE /2); j=j+1) begin
						if (i < 0 || j < 0 || i>WIDTH || j>DEPTH)
							window[k*8+:8] = 128;
						else
							window[k*8+:8] = raw_image[i][j][7:0];
						k = k + 1;
					end
				end
				processed_image[rpo][cpo] = return_median(window);
			end
			3'b010  : begin // High pass filter
				pixel_avg = 8*raw_image[rpo][cpo] - 
					(raw_image[rpo-1][cpo-1] + raw_image[rpo][cpo-1] + raw_image[rpo+1][cpo-1] +
					raw_image[rpo-1][cpo] + raw_image[rpo+1][cpo] +
					raw_image[rpo-1][cpo+1] + raw_image[rpo][cpo+1] + raw_image[rpo+1][cpo+1]);
				pixel_avg = pixel_avg / 9;
				processed_image[rpo][cpo] = pixel_avg[7:0]; //pixel_avg = {2'b00, pixel_avg[7:2]};
			end
			default : begin
			end 
		 endcase
		 
		 // Iterate through image cordinates
		 if (rpo + 1 == WIDTH) begin
			rpo = img_start;
			if (cpo + 1 == DEPTH) begin
				cpo = img_start;
				finish = 1;
			end else begin
				cpo = cpo + 1; 
			end
		end else begin
			rpo = rpo + 1;
		end
	end
	
	// Send processed image to output
	if (finish && !done) begin
		image_output = processed_image[rpo][cpo];
		if (rpo + 1 == WIDTH) begin
			rpo = img_start;
			if (cpo + 1 == DEPTH) begin
				done = 1;
			end else begin
				cpo = cpo + 1; 
			end
		end else begin
			rpo = rpo + 1;
		end
	end
	
	
end

endmodule



	
		// Median Filter
		// 1. For row, col, load cartesian product of (row-1,row,row+1)x(col-1,col,col+1)
		// 	into a list of window*window size
		// 2. Sort this list
		// 3. For row_idx, col_idx, take window_size*window_size//2 and place into output
		
		// Resize Filter
		// 1. If resize_type == 0 (reduce): row=pad_half*2, col=pad_half*2
		// * size of output: WIDTH-(window//2)
		// * number of iterations will be width-(window//2)
		// * and depth-(window//2)
		// * where you get avg from cartesian product of (row-1,row,row+1)x(col-1,col,col+1)
		// * and place that in output at row, col
		//  
		// 2. If resize_type == 1 (increase): 7 
		// * For a given image of WIDTH, DEPTH
		// * increased will be of size WIDTH*window, DEPTH*window
		// * for row, col in original, populate cartesian product of [row*3:row*3+2]x[col*3:col*3+2]
		// * with the value of the pixel at row, col
		
		// Write matrix to image output