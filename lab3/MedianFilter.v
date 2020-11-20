function [7:0] return_median;
	parameter sq_size = FILTER_SIZE*FILTER_SIZE;
	parameter median_helper = (1-(sq_size&1)); // 1 if even, 0 if odd
	
	input [sq_size*8:0] pixels;
	reg [7:0] current_max;
	reg [7:0] temp;
	integer i, j, max_loc;
	reg [sq_size*8:0] sorted_pixels;
	begin
		sorted_pixels = pixels;
		for (i = 0; i < sq_size; i=i+1) begin
			current_max = sorted_pixels[(i*8)+:8];
			max_loc = i;
			for (j = i+1; j < sq_size; j=j+1) begin
				if (current_max > sorted_pixels[(j*8)+:8]) begin
					current_max = sorted_pixels[(j*8)+:8];
					max_loc = j;
				end
			end
			
			temp = sorted_pixels[(i*8)+:8];
			sorted_pixels[(i*8)+:8] = current_max;
			sorted_pixels[(max_loc*8)+:8] = temp;
			
			//$display("%h", current_max);
		end
													// only counted if even size         // always counted towards median
		return_median = ((median_helper*sorted_pixels[((sq_size>>1)-1)*8+:8]) + sorted_pixels[(sq_size>>1)*8+:8] ) 
																>> 
												(median_helper); // 1 if odd, 2 if even
		//$display("%h", return_median);
	end
endfunction