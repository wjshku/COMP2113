#!/bin/bash
allStudents=`ls ./submissions`
alltestcase=`ls ./testcases`
for student in $allStudents
do
    if [ -d "./submissions/$student" ]
    then 
        cd ./submissions/$student
	
        if [ -e assign.cpp ]
        then
            g++ assign.cpp -o assign.o 2>error.txt
	    
            if [ -e assign.o ]
            then
		    cp assign.o ../assign.o
		    for testcase in $alltestcase
		    do
			   
			    ../assign.o<../../testcases/$testcase/input.txt>output.txt
			    result=`diff output.txt ../../testcases/$testcase/correct.txt`
		    if [ ${#result} -ne 0 ]
		    then
			    echo "$student $testcase: Wrong answer"
		    else
			    echo "$student $testcase: Correct"
		    fi
		    done
            else
                echo "$student Cannot be compiled."
            fi
        fi
        cd ..
    fi
done   

#!!This is the solution of exercise 2.4!!
#!!You should modify this mark.sh to a new mark.sh!!
