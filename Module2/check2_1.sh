#!/bin/bash

a=100
b=99
if [ $a \> $b ]
then
  echo "$a is larger"
else
  echo "$b is larger"
fi

if [ $a -gt $b ]
then
  echo "$a is larger"
else
  echo "$b is larger"
fi
