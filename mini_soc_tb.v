`timescale 1ns/1ps

module mini_soc_tb;

    reg clk = 0;
    reg rst = 1;
    reg alu_sel = 0;
    reg mux_sel = 0;

    wire [1:0] soc_out;

    // 10 ns clock period
    always #5 clk = ~clk;

    // Instantiate Mini-SoC
    mini_soc dut (
        .clk(clk),
        .rst(rst),
        .alu_sel(alu_sel),
        .mux_sel(mux_sel),
        .soc_out(soc_out)
    );

    initial begin

        // Create waveform file
        $dumpfile("dump.vcd");
        $dumpvars(0, mini_soc_tb);

        // Keep reset active initially
        #10 rst = 0;

        // Change ALU to subtraction
        #20 alu_sel = 1;

        // Select ALU output through MUX
        #30 mux_sel = 1;

        // Change ALU back to addition
        #40 alu_sel = 0;

        // Select counter MSBs through MUX
        #20 mux_sel = 0;

        // Finish simulation
        #50 $finish;

    end

endmodule
