#!/bin/bash
for file in *.c; do
    gcc -Wall -fPIC -c *.o
done
gcc -shared -o liball.so *o
