#!/bin/bash

./build_fortran_sources.sh

cd ios_flang_runtime
xcodebuild -configuration Release ARCHS=arm64 ONLY_ACTIVE_ARCH=NO -scheme ios_flang_runtime -sdk iphoneos build SYMROOT=build

mkdir -p ../build/share
yes | cp -rf build/Release-iphoneos/* ../build/share
