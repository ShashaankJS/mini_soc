#!/bin/bash

echo "======================================"
echo " UPF Power Intent Demonstration"
echo "======================================"

# Always run from the directory containing this script
cd "$(dirname "$0")" || exit 1

echo
echo "[1] Checking project files..."

ls -lh chip_top.v chip_top_tb.v chip_top.upf

if [ $? -ne 0 ]; then
    echo
    echo "Required project files are missing."
    exit 1
fi

echo
echo "[2] Compiling RTL with Verilator..."

verilator --binary --trace \
    chip_top.v \
    chip_top_tb.v \
    --top-module chip_top_tb

if [ $? -ne 0 ]; then
    echo
    echo "RTL compilation failed."
    exit 1
fi

echo
echo "[3] Running RTL simulation..."

./obj_dir/Vchip_top_tb

if [ $? -ne 0 ]; then
    echo
    echo "Simulation failed."
    exit 1
fi

echo
echo "[4] Checking waveform..."

if [ -f upf_demo.vcd ]; then
    echo "Waveform generated successfully:"
    ls -lh upf_demo.vcd
else
    echo "Waveform file was not generated."
    exit 1
fi

echo
echo "======================================"
echo " RTL simulation completed"
echo "======================================"

echo
echo "IMPORTANT:"
echo "Verilator simulated the RTL only."
echo "The UPF file is power-intent metadata."
echo "A UPF-aware simulator is required to actually"
echo "apply and verify the power domains."
