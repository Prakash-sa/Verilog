module tase();
reg clk;
reg d;
wire [3:0]q;
initial
clk = 0;
always 
#1 clk = !clk;
main a1(!q[0],clk,q[0]);
main a2(!q[1],!q[0],q[1]);
main a3(!q[2],!q[1],q[2]);
main a4(!q[3],!q[2],q[3]);
endmodule

