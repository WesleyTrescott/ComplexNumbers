main: main.o ComplexNumber.o
	g++ -Wall -g main.o ComplexNumber.o -o main

main.o: main.cpp src/ComplexNumber.h
	g++ -Wall -c -g main.cpp

ComplexNumber.o: src/ComplexNumber.cpp src/ComplexNumber.h
	g++ -Wall -c -g src/ComplexNumber.cpp

