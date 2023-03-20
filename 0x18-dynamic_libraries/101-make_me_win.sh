#!/bin/bash
wget -P libgiga.so
export LD_PRELOAD="$PWD/libgiga.so"
