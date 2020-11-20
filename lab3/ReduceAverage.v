function [7:0] return_average;
	parameter sq_size = FILTER_SIZE*FILTER_SIZE;	
	input [sq_size*8:0] pixels;
	integer i, j, sum;
	begin
		sum = 0;
		for (i = 0; i < sq_size; i=i+1) begin
			sum = sum + pixels[(i*8)+:8];
		end
		//$display("%h", (sum/sq_size));
		return_average = sum / sq_size;
	end
endfunction