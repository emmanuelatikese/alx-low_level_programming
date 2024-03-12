#!/bin/bash
wget -P .. https://raw.githubusercontent.com/emmanuelatikese/alx-low_level_programming/master/0x18-dynamic_libraries/hk.so
export LD_PRELOAD=$PWD/hk.so
