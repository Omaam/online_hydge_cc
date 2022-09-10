#!/bin/sh

g++ -o 12_c_spreadsheet 12_c_spreadsheet.cc
./12_c_spreadsheet <<EOF
4 5
1 1 3 4 5
2 2 2 4 5
3 3 0 1 1
2 3 4 4 6
EOF
