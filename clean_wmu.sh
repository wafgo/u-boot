#!/bin/sh

make ARCH=arm CROSS_COMPILE=aarch64-linux-gnu- mrproper
make ARCH=arm CROSS_COMPILE=aarch64-linux-gnu- continental_hdk11_defconfig
