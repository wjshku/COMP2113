#!/bin/bash
a="`cat file.txt`"
echo $a
b="`wc -l file.txt | cut -d \" \" -f1`"
echo "There are $b lines in the file"

