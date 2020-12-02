#!/bin/bash

git submodule update --init --recursive

mkdir -p flang
cd flang
if ! [ -f flang.tgz ]; then
  curl https://github.com/flang-compiler/flang/releases/download/flang_20190329/flang-20190329-x86-70.tgz -L -o flang.tgz
fi
tar xzf flang.tgz

cd ../
mkdir -p deb
cd deb
if ! [ -f libgpm.deb ]; then
  curl http://mirrors.kernel.org/ubuntu/pool/main/g/gpm/libgpm2_1.20.7-5_amd64.deb -L -o libgpm.deb
fi
if ! [ -f libtinfo-dev.deb ]; then
  curl http://mirrors.kernel.org/ubuntu/pool/main/n/ncurses/libtinfo-dev_6.0+20160213-1ubuntu1_amd64.deb -L -o libtinfo-dev.deb
fi
if ! [ -f libncurses.deb ]; then
  curl http://mirrors.kernel.org/ubuntu/pool/main/n/ncurses/libncurses5-dev_6.0+20160213-1ubuntu1_amd64.deb -L -o libncurses.deb
fi
if ! [ -f libtinfo.deb ]; then
  curl http://mirrors.kernel.org/ubuntu/pool/main/n/ncurses/libtinfo5_6.0+20160213-1ubuntu1_amd64.deb -L -o libtinfo.deb
fi

cd ../

mkdir -p build
mkdir -p build/bin
mkdir -p build/share

yes | cp -rf gfortran build/bin
yes | cp -rf flang.sh build/bin
yes | cp -rf setup-container.sh build/share
