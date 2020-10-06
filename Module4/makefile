#This is a Makefile, it needs to be named as makefile or Makefile
gcd.o: gcd.cpp gcd.h
	g++ -c gcd.cpp

gcd_main.o: gcd_main.cpp gcd.h
	g++ -c gcd_main.cpp

gcd: gcd.o gcd_main.o
	g++ gcd.o gcd_main.o -o gcd
