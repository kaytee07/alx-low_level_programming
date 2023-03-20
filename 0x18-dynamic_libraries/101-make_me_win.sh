#!/bin/bash
wget -P ibgiga.so
export LD_PRELOAD="$PWD/libgiga.so"
