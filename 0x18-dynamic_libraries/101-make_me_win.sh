#!/bin/bash
wget -P https://github.com/kaytee07/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$./libgiga.so"
