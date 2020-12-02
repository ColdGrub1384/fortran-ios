#!/bin/bash

cd classic-flang-llvm-project
mkdir -p build
cd build

if [ ! -e "LLVM.xcodeproj" ]; then
    cmake -G Xcode ../llvm
fi

BIN_PATH="Debug/bin/llc"

if [ ! -e "$BIN_PATH" ]; then
    xcodebuild ONLY_ACTIVE_ARCH=NO -scheme llc -sdk macosx build SYMROOT=../../build_llc
fi

rm -rf ../../build_llc
yes | cp -rf "$BIN_PATH" ../../build/bin
