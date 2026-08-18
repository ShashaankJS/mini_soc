# Mini-SoC RTL Integration, Verification & Synthesis

A modular Mini-SoC implemented in Verilog, verified using Verilator and GTKWave, synthesized using Yosys, and extended with a UPF power-intent demonstration.

## Project Overview

This project demonstrates a basic RTL-to-hardware design flow by integrating multiple hardware IP blocks into a small Mini-SoC.

### Integrated IP Blocks

- 4-bit synchronous up counter
- 2-bit ALU
- 2:1 2-bit multiplexer

### Architecture

The counter output is divided into two 2-bit values:

```text
              4-bit Counter
                   |
          +--------+--------+
          |                 |
       count[3:2]        count[1:0]
          |                 |
          v                 v
        ALU Input A      ALU Input B
          |                 |
          +-------+---------+
                  |
                2-bit ALU
                  |
                  v
               ALU Output
                  |
                  v
             +----------+
count[3:2] ->|   MUX    |-> soc_out
ALU output ->|          |
             +----------+
