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

// Image resolution
parameter WIDTH = 410;
parameter DEPTH = 361;

// Filter size determines image padding
parameter FILTER_SIZE = 3;

// Here add FILTER_SIZE // 2 
// TODO: Right shift the parameter val??
reg [7:0] full_image[0:WIDTH+2][0:DEPTH+2];

// Used for tracking cur pos while filling in full_image
reg [8:0] row_ptr_in;
reg [8:0] col_ptr_in;

// Used for tracking cur pos while writing output
reg [8:0] row_ptr_out;
reg [8:0] col_ptr_out;

// Padding to add to Width and Depth
reg [3:0] pad_total;

// Pointer adjustment for image pos with padding
reg [3:0] pad_half; 

integer row, col;

initial begin
	// Adjust image width for padding
	assign pad_total = FILTER_SIZE >> 1;
	
	// Adjust coordinate pointers for padding
	assign pad_half = FILTER_SIZE >> 2;
	
	// Set inital values for reading pixels
	row_ptr_in = pad_half;
	col_ptr_in = pad_half; 
	row_ptr_out = pad_half;
	col_ptr_out = pad_half; 
	
	// Zero pad the 2D image matrix
	for (row=0; row<WIDTH+pad_total; row=row+1) begin
		for (col=0; col<DEPTH+pad_total; col=col+1) begin
			full_image[row][col] = 0;
		end
	end
end

always @(posedge clk) begin
	// Populate full_image matrix
	if (enable) begin
		full_image[row_ptr_in][col_ptr_in] = image_input;
		if (row_ptr_in + 1 == WIDTH) begin
			row_ptr_in = pad_half;
			if (col_ptr_in + 1 == DEPTH) begin
				col_ptr_in = pad_half;
			end else begin
				col_ptr_in = col_ptr_in + 1;
			end
		end else begin
			row_ptr_in = row_ptr_in + 1;
		end
	end
	
	if (!enable && enable_process) begin
		// Write matrix to image output
		image_output = full_image[row_ptr_out][col_ptr_out];
		if (row_ptr_out + 1 == WIDTH) begin
			row_ptr_out = pad_half;
			if (col_ptr_out + 1 == DEPTH) begin
				col_ptr_out = pad_half;
				finish = 1;
			end else begin
				col_ptr_out = col_ptr_out + 1; 
			end
		end else begin
			row_ptr_out = row_ptr_out + 1;
		end
	end
	
end

endmodule
