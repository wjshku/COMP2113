all: client1 client2 client2 client3 client4

client1: client1.o Pokemon.o
	g++ -o client1 client1.o Pokemon.o
client2: client2.o Pokemon.o
	g++ -o client2 client2.o Pokemon.o
client3: client3.o Pokemon.o
	g++ -o client3 client3.o Pokemon.o
client4: client4.o Pokemon.o
	g++ -o client4 client4.o Pokemon.o
Pokemon.o: Pokemon.cpp Pokemon.h
	g++ -c Pokemon.cpp
client1.o: client1.cpp
	g++ -c client1.cpp
client2.o: client2.cpp
	g++ -c client2.cpp
client3.o: client3.cpp
	g++ -c client3.cpp
client4.o: client4.cpp
	g++ -c client4.cpp
