#!/bin/bash
FILES=$(pwd)/*
for f in $FILES
do
    FILE="$(basename $f)"
    if [[ $FILE =~ ^[0-9]{3}_ ]]; then
        mv $FILE 0$FILE
    fi
done