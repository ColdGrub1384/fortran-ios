#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

NAME="flang"

if [ $(uname -m) == "x86_64" ]; then
CONTAINER="ubuntu"
else
CONTAINER="naturlich/x86_64-ubuntu"
fi

docker ps --format '{{.Names}}' | grep "flang" &> /dev/null

if [ $? != 0 ]; then
    docker run -d --name "$NAME" -v "$DIR/../share:/root/host" -v /Users:/Users -v /var/folders:/var/folders -it $CONTAINER &> /dev/null
fi

docker exec -it flang /root/host/setup-container.sh $PWD $@

cp -rf inbox/* $PWD &> /dev/null
rm -rf inbox/* &> /dev/null
