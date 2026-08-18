#!/bin/bash

echo "======================================"
echo "     Mini-SoC Yosys Synthesis"
echo "======================================"

cd "$(dirname "$0")"

echo "[1] Running Yosys synthesis..."

yosys mini_soc.ys

if [ $? -ne 0 ]; then
    echo "Synthesis failed!"
    exit 1
fi

echo "[2] Synthesis completed successfully!"

if [ -f mini_soc_netlist.v ]; then
    echo "[3] Generated: mini_soc_netlist.v"
else
    echo "ERROR: Netlist was not generated!"
    exit 1
fi

echo "======================================"
echo "       Synthesis Complete"
echo "======================================"
