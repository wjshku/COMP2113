Fraction.o: Fraction.cpp Fraction.h
	g++ -c $<

sum.o: sum.cpp Fraction.h
	g++ -c $<

sum: Fraction.o sum.o
	g++ $^ -o $@

clean:
	rm -f *.o sum

backup:
	if [ -e bak ]
	then
		rm -rf bak
	fi
	mkdir bak 
	cp Fraction.cpp Fraction.h sum.cpp ./bak

.PHONY: clean, backup
