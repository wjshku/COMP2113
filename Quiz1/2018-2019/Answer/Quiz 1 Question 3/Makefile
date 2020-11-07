Fraction.o: Fraction.cpp Fraction.h
    g++ -c Fraction.cpp
#^this is a TAB

sum.o: sum.cpp Fraction.h
	g++ -c sum.cpp
#^this is a TAB

sum: sum.o Fraction.o
	g++ sum.o Fraction.o -o sum
#^this is a TAB

backup:
	if [ -e bak ]
	then
		rm -rf bak
	fi
	mkdir bak
	copy sum.cpp bak/sum.cpp
	copy Fraction.h bak/Fraction.h
	copy Fraction.cpp bak/Fraction.cpp
#^these are all TABs

.PHONY backup


