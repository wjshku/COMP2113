#!/bin/bash

list="`ls ./quotations/*.qua`"
product="$1"
time=0
for i in $list
do

	number=`grep $product $i|cut -d ':' -f 2`
	let "temp = $number"
	if [ $time -eq 0 ]
	then
		let "b = $temp"
	fi
	if [ $temp -lt $b ]
	then
		let "b = $temp"
	fi
	let "time = $time + 1"
done
echo $b
