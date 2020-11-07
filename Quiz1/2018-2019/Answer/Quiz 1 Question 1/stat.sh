#!/bin/bash
records=`cat Library_*.log | grep "^$1" | grep "Borrow" | cut -d, -f2-3`
if [ "$records" ]
then
    book=`echo "${records}" | sort -t, -k2,2 | uniq -c | cut -d, -f2 | sort | uniq -c | sort -t, -nr -k1,1`
    number=`echo "${book}" | head -c 7`
    echo $number
    echo "${book}" | grep "${number}"
else
    echo "No records found"
fi
