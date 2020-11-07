while read x ; 
do 
	a=($x)
	echo -ne "${a[1]} \t"
	number=$((a[0] / 5))
	if [ "$number" -gt 0 ]
	then
		for j in $(seq 1 $number);
		do
			echo -n "*"
		done
	fi
	echo 
done
