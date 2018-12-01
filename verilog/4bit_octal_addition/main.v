`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:17:42 11/19/2018 
// Design Name: 
// Module Name:    main 
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
module main(input [8:0] A,
input [8:0] B,
output reg [4:0] sum1,sum2,sum3 ,
output reg C_out
    );



always @ (*) begin 

sum1 = A[2:0] + B[2:0] ;
sum2 = A[5:3] + B[5:3] ;
sum3 = A[8:6] + B[8:6] ;
if (sum1>7) begin
		  sum1 = sum1-8;
		  sum2= sum2+1'b1;
		 if (sum2>7) 
			begin
			sum2 = sum2-8;
		   sum3= sum3+1'b1;	 
          if (sum3>7) begin
		     sum3 = sum3-8;
	        C_out= 1'b1;
		  
		     end	
			  
		   end
			else if (sum3>7) begin
				sum3 = sum3-8;
				  C_out= 1'b1;
				  
				end
		  
		end

else if (sum2>7) 
		begin
		 sum2 = sum2-8;
		  sum3= sum3+1'b1;
		  if (sum3>7) begin
		   sum3 = sum3-8;
		  C_out= 1'b1;
		  
		end
  
end
else if (sum3>7) begin
sum3 = sum3-8;
  C_out= 1'b1;
  
end

end


endmodule
