#!/bin/bash

gcc -o basic_functions basic_functions.c && ./basic_functions
gcc -o basic_loops basic_loops.c && ./basic_loops
gcc -o currency_breakdown currency_breakdown.c && ./currency_breakdown
gcc -o vaccine_decoder vaccine_decoder.c && ./vaccine_decoder
gcc -o arrays arrays.c && ./arrays
rm -rf ./basic_functions  ./basic_loops  ./currency_breakdown ./vaccine_decoder ./arrays