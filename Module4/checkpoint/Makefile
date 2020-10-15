# DO NOT edit Makefile in the editor
# Either copy-and-paste from your version,
#   or use the "Submission" tab
FLAG = -pedantic-errors -std=c++11
gcd.o: gcd.cpp gcd.h
	g++ $(FLAG) -c $<
lcm.o: lcm.cpp lcm.h
	g++ $(FLAG) -c $<
calc.o: calc.cpp gcd.h lcm.h
	g++ $(FLAG) -c $<
calc: calc.o lcm.o gcd.o
	g++ $(FLAG) $^ -o $@
clean:
	rm -f *.o calc
.PHONY: clean
