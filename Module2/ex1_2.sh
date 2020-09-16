#!/bin/bash

#Compile the code
g++ add.cpp -o add
#run the code and display the result
./add < input.txt > output.txt
cat output.txt
