`timescale 1ns/1ps

// Mini-SoC integrating:
// 1. 4-bit Counter
// 2. 2-bit ALU
// 3. 2:1 MUX

module mini_soc (
    input clk,
    input rst,
    input alu_sel,
    input mux_sel,
    output [1:0] soc_out
);

    wire [3:0] count;
    wire [1:0] alu_out;

    // Counter IP
    counter u_counter (
        .clk(clk),
        .rst(rst),
        .count(count)
    );

    // ALU IP
    // Upper 2 bits of counter -> A
    // Lower 2 bits of counter -> B
    alu u_alu (
        .a(count[3:2]),
        .b(count[1:0]),
        .sel(alu_sel),
        .result(alu_out)
    );

    // MUX IP
    // mux_sel = 0 -> counter MSBs
    // mux_sel = 1 -> ALU output
    mux2x1 u_mux (
        .in0(count[3:2]),
        .in1(alu_out),
        .sel(mux_sel),
        .out(soc_out)
    );

endmodule
