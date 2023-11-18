#!/bin/bash
wget -P .. https://raw.githubusercontent.com/TMaropela/alx-low_level_programming/master/0x18-dynamic_libraries/libhacked.so
export LD_PRELOAD="PWD/../libhacked.so"
