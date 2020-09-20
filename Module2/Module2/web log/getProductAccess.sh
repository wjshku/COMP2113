#!/bin/bash
filename=$1
result=`cut -d "	" -f 1,4 $filename|grep "/products/"|sort|uniq`
echo "$result"
