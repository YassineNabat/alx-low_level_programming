#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
rm *.o
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
