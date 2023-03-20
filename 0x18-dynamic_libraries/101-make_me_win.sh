#!/bin/bash
wget -P ibgiga.so
export LD_PRELOAD="$./libgiga.so"
