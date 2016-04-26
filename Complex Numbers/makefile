main: main.o ComplexNumber.o
	g++ -Wall -g main.o ComplexNumber.o -o main

main.o: main.cpp ComplexNumber.h
	g++ -Wall -c -g main.cpp

ComplexNumber.o: ComplexNumber.cpp ComplexNumber.h
	g++ -Wall -c -g ComplexNumber.cpp

