#!/bin/bash

for f in $(find ios_flang_runtime -name "*.F*" -type f -exec grep -Iq . {} \; -print); do

if ! [ -f $f.o ]; then
build/bin/gfortran -DDESC_I8=1 -DPGFLANG=1 -arch arm64 -c $f -o $f.o
fi

done
