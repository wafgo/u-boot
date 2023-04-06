#!/bin/sh
./clean_wmu.sh 
bear make -j4 ARCH=arm CROSS_COMPILE=aarch64-linux-gnu- all
