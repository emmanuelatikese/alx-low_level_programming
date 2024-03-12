#!/bin/bash
wget -P https://github.com/emmanuelatikese/alx-low_level_programming/blob/main/0x18-dynamic_libraries/hk.so
export LD_PRELOAD=$PWD/hk.so
