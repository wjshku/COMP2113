#!/bin/bash

list="`ls *.txt`"
for fileName in $list
do
	echo $fileName
done

