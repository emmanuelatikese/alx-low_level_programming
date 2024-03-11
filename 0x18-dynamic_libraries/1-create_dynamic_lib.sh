#!/bin/bash
'''This is about converting .o to .so'''
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
rm *.o
