#!/bin/bash
gcc -Wall -fPIC -c *.o
gcc -shared -o liball.so *o
