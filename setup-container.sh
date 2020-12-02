#!/bin/bash

cd /root/host
dpkg -i --force-depends deb/*.deb &> /dev/null 
export PATH="/root/host/flang/bin:$PATH"
cd $1
flang "${@:2}"
