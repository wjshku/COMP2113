#!/bin/bash

cp file1 file2 2>/dev/null 
if [ -e file2 ]
then
	echo "copy"
else
	echo "$0:oops" 2>&1
fi
