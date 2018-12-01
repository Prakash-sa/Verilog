`timescale 1ns / 1ps

module main(clk,rst,inp,outp);
   input clk,rst,inp;
   output outp;
   reg outp;
   reg[2:0]state;
   
   parameter s0=1,s1=1,s2=2,s3=3;
   
   always @(posedge clk or posedge rst)
     begin
      if(rst)
       begin
        state <= s0;
        outp <=0;
       end
      else
       case(state)
         s0: if(inp)
           begin
            state<=s1;
            outp<=0;
           end
           else
             begin
               state<=s0;
               outp<=0;   //'o'
             end
         s1: if(inp)
             begin
              state<=s0;
              outp<=0;
             end
             else
               begin
                state<=s2; 
                outp<=0;
               end
           s2: if(inp)
               begin
                 state<=s2;
                 outp<=0;
               end
					else
					 begin
					 state<=s3;
					 outp<=0;
					end
				s3: if(inp)
				    begin
					   state<=s0;
						outp<=1;
					end
					
		endcase
		end
endmodule

