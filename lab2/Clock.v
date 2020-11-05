`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:04:34 11/05/2020 
// Design Name: 
// Module Name:    Clock 
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

module Clock(
	clk,
	reset,
	seconds
    );
	
	parameter TIMESCALE_HALF_SECOND = 4000; 
	
	input clk, reset;
	reg [31:0] count;
	reg SECONDS_CLK;
	
	output wire seconds;
	assign seconds = SECONDS_CLK;
	
	always @(posedge clk) begin
		if (reset) begin
			SECONDS_CLK <= 1;
			count <= 0;
		end
		else begin
			if (count === TIMESCALE_HALF_SECOND) begin
				SECONDS_CLK <= ~SECONDS_CLK;
				count <= 0;
			end		
			else
				count <= count + 1;
		end
	end

endmodule
