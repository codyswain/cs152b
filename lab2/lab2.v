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
	sensor,
	button_walk,
	light_walk,
	light_main,
	light_side
);

input clk, sensor, button_walk;
output light_walk;
output [2:0] light_main;
output [2:0] light_side;

reg [2:0] state;
reg [2:0] next_state;

parameter S1=3'b000, S2=3'b001, S3=3'b010, S4=3'b011, S5=3'b100, S6=3'b101, S7=3'b110, S8=3'b111;

always @ (state)
begin
	case(state)
		S1 : 
			if (sensor == 1'b1) begin
				next_state <= S2;
			end else begin
				next_state <= S3;
			end
		S2 :
			
end

endmodule
