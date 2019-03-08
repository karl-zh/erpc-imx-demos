#!/bin/sh
#cmake -DCMAKE_TOOLCHAIN_FILE="../armgcc.cmake" -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug  .
#make -j4
export ARMGCC_DIR=/usr/local/gcc-arm-none-eabi-7-2018-q2-update
cmake -DCMAKE_TOOLCHAIN_FILE="../armgcc.cmake" -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release  .
make -j4
