#!/bin/sh

g++ -o 12_d_matrix_multiplication 12_d_matrix_multiplication.cc
./12_d_matrix_multiplication << EOF
3 2 3
1 2
0 3
4 5
1 2 1
0 3 2
EOF
