#!/bin/bash

gcc -o basic_functions basic_functions.c && ./basic_functions
gcc -o basic_loops basic_loops.c && ./basic_loops
rm -rf ./basic_functions
rm -rf ./basic_loops