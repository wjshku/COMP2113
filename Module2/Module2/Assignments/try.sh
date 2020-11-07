#!/bin/bash
allstudents="`ls ./submission`"
for student in $allstudents
do
	
	echo $student
	cd ./submission/$student
	files=`ls`
	echo "Directory entered"
	echo $files
	cd ../..
	echo "Directory quited"
done
