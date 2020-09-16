#!/bin/bash

echo "&1"
cp file1 file2 1>/dev/null 2>&1
if [ -e file2 ]
then
	echo "copy successfully"
else
	echo "$0:oops"
fi

