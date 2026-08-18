`timescale 1ns/1ps

module chip_top_tb;

    reg clk;
    reg reset;
    reg [7:0] data_in;

    wire [7:0] data_out;

    chip_top dut (
        .clk      (clk),
        .reset    (reset),
        .data_in  (data_in),
        .data_out (data_out)
    );

    initial begin
        $dumpfile("upf_demo.vcd");
        $dumpvars(0, chip_top_tb);

        clk = 0;
        reset = 1;
        data_in = 8'h05;

        #20;

        reset = 0;

        #20;
        data_in = 8'h10;

        #20;
        data_in = 8'h20;

        #20;
        data_in = 8'h30;

        #20;

        $finish;
    end

    always #5 clk = ~clk;

endmodule
