`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:05:01 11/05/2020 
// Design Name: 
// Module Name:    lab2 
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
module lab2(
	clk,
	reset,
	sensor,
	button_walk,
	light_walk,
	light_main,
	light_side
);

input clk, reset, sensor, button_walk;
output reg light_walk;
output reg [2:0] light_main;
output reg [2:0] light_side;

reg [2:0] state;
reg [2:0] next_state;
reg sensor_buffer, walk_buffer;

parameter S1=3'b000, S2=3'b001, S3=3'b010, S4=3'b011, S5=3'b100, S6=3'b101, S7=3'b110, S8=3'b111;

wire seconds;

Clock seconds_clk(
	.clk(clk),
	.reset(reset),
	.seconds(seconds)
    );
	 
wire timer;
reg [1:0] which_clk;

// timer for 12, 6, 3, 2 seconds
TimerFunctions timers (
		.clk(clk), 
		.reset(reset), 
		.which_clk(which_clk), 
		.timer(timer)
	);

// Store walk request
always @ (button_walk)
begin
	if (button_walk == 1'b1) begin
		walk_buffer <= 1'b1;
	end
end

// changing state to next state
always @(posedge clk) begin
	if (reset) begin
		state <= S1;
	   which_clk <= 2'b01;
	end else begin
		@(posedge timer) begin
			state <= next_state;
		end
	end
end

// State Transition Logic
always @ (state)
begin
	case(state)
		S1 : 
			if (sensor == 1'b1) begin
				next_state <= S2;
			end else begin
				next_state <= S3;
			end
		S2 : next_state <= S4;
		S3 : next_state <= S4;
		S4 : 
			if (walk_buffer == 1'b1) begin
				next_state <= S5;
				walk_buffer <= 1'b0;
			end else begin 
				next_state <= S6;
			end
		S5 : next_state <= S6;
		S6 :
			if (sensor == 1'b1) begin
				next_state <= S7;
			end else begin
				next_state <= S8;
			end
		S7 : next_state <= S8;
		S8 : next_state <= S1;
		endcase 
end

// Set the outputs: main stoplight, side stoplight, walk lamp
always @ (next_state, which_clk)
begin
	case(next_state)
	S1 : begin
			light_main <= 3'b001; // green
			light_side <= 3'b100; // red
			light_walk <= 1'b0;
			
			// Six second delay
			which_clk <= 2'b01;
			//@(posedge timer) begin $display("done this"); end
		end
	S2 : begin
			light_main <= 3'b001; // green
			light_side <= 3'b100; // red
			light_walk <= 1'b0;
			
			// Three second delay
			which_clk <= 2'b10;
		end
	S3 : begin
			light_main <= 3'b001; // green
			light_side <= 3'b100; // red
			light_walk <= 1'b0;
			
			// Six second delay
			which_clk <= 2'b01;
		end
	S4 : begin
			light_main <= 3'b010; // yellow
			light_side <= 3'b100; // red
			light_walk <= 1'b0;
			
			// Two second delay
			which_clk <= 2'b11;
		end
	S5 : begin
			light_main <= 3'b100; // red
			light_side <= 3'b100; // red
			light_walk <= 1'b1;	 // walk light on
			
			// Three second delay
			which_clk <= 2'b10;
		end
	S6 : begin
			light_main <= 3'b100; // red
			light_side <= 3'b001; // green
			light_walk <= 1'b0;
			
			// Six second delay
			which_clk <= 2'b01;
		end
	S7 : begin
			light_main <= 3'b100; // red 
			light_side <= 3'b001; // green
			light_walk <= 1'b0;
			
			// Three second delay
			which_clk <= 2'b10;
		end
	S8 : begin
			light_main <= 3'b100; // red
			light_side <= 3'b010; // yellow
			light_walk <= 1'b0;
			
			// Two second delay
			which_clk <= 2'b11;
		end
	endcase
end

endmodule
