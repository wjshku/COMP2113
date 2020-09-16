#!/bin/bash

echo "Do you want to remove all .txt files?(Y/N)"
read ans
if [ans=="Y"]
then
       	rm -rf *.txt
	echo "All removed"
fi
