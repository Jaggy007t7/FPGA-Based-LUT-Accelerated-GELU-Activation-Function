module design;
	integer file;
	logic [31:0]mem[0:2**10-1];
	

	real sign_value;
	real exponent;
	real mantessa;
	real result;
	
	// Main logic;
	initial begin 

      		$readmemb("float32_output.csv",mem);
		file = $fopen("Output.csv","w");

		for(int i=0;i<1024;i++)begin 

			sign_value = (mem[i][31])? -1.0:1.0;
			exponent = mem[i][30:23]-127;
			exponent = 2.0**exponent;
			mantessa = 0.0;
			for(int j=22;j>=0;j--)begin 
				mantessa += mem[i][j]*(2.0**(j-23));
			end
			result = sign_value*(1.0+mantessa)*exponent;
			$fdisplay(file,"value at i=%0d is %f",i,result);
		end
		$fclose(file);
	end


endmodule
