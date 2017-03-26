all:Score.o main.o
	g++ Score.o main.o

Score.o: Score.cpp Score.h
	g++ -c Score.cpp

main.o: main.cpp Score.h
	g++ -c main.cpp
	
