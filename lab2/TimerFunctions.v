`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:18:57 11/05/2020 
// Design Name: 
// Module Name:    TimerFunctions 
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
module TimerFunctions(
	clk,
	reset,
	which_clk,
	timer
  );
	 
	 	 
	input clk, reset;
	input [1:0] which_clk;
	wire seconds_clk;
	reg timer_reg;
	
	output wire timer;

	Clock seconds_clk_setter(
		.clk(clk),
		.reset(reset),
		.seconds(seconds_clk)
	);

	reg [3:0] twelve_seconds_count;
	reg [2:0] six_seconds_count;
	reg [1:0] three_seconds_count;
	reg two_seconds_count;

	parameter TWELVE=2'b00, SIX=2'b01, THREE=2'b10, TWO=2'b11;
	assign timer = timer_reg;

	always @(posedge seconds_clk) begin
		if(reset) begin
			twelve_seconds_count <= 0;
			six_seconds_count <= 0;
			three_seconds_count <= 0;
			two_seconds_count <= 0;
			timer_reg <= 0;
		end
	
		else begin
			case(which_clk) 
				TWELVE: 
					begin
						// reset all others
						six_seconds_count <= 0;
						three_seconds_count <= 0;
						two_seconds_count <= 0;
						
						twelve_seconds_count <= twelve_seconds_count + 1;
						if (twelve_seconds_count === 11) begin
							timer_reg <= ~timer_reg;
							twelve_seconds_count <= 0;
						end
					end
				SIX: 
					begin 
						// reset all others
						twelve_seconds_count <= 0;
						three_seconds_count <= 0;
						two_seconds_count <= 0;
						
						six_seconds_count <= six_seconds_count + 1;
						if (six_seconds_count === 5) begin
							timer_reg <= ~timer_reg;
							six_seconds_count <= 0;
						end
					end
				THREE: 
					begin 
						// reset all others
						twelve_seconds_count <= 0;
						six_seconds_count <= 0;
						two_seconds_count <= 0;
						
						three_seconds_count <= three_seconds_count + 1;
						if (three_seconds_count === 2) begin
							timer_reg <= ~timer_reg;
							three_seconds_count <= 0;
						end
					end
				TWO: 
					begin 
						// reset all others
						twelve_seconds_count <= 0;
						six_seconds_count <= 0;
						three_seconds_count <= 0;

						two_seconds_count <= two_seconds_count + 1;
						if (two_seconds_count === 1) begin
							timer_reg <= ~timer_reg;
							two_seconds_count <= 0;
						end
					end
			endcase
		end
	end


endmodule
