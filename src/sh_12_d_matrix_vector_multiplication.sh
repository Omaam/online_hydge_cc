#!/bin/sh

g++ -o 12_d_matrix_vector_multiplication 12_d_matrix_vector_multiplication.cc
./12_d_matrix_vector_multiplication << EOF
3 4
1 2 0 1
0 3 0 1
4 1 1 0
1
2
3
0
EOF
