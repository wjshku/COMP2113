#This makes main

d2boh.o: d2boh.cpp d2boh.h
	g++ -pedantic-errors -std=c++11 -c $<

main.o: main.cpp d2boh.h
	g++ -pedantic-errors -std=c++11 -c $<

main: main.o d2boh.o
	g++ -pedantic-errors -std=c++11 $^ -o $@

clean:
	rm -f d2bon.o main.o main

.PHONY: clean
