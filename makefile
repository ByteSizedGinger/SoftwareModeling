main: **/*.cpp
	g++ **/*.cpp main.cpp -o main -I .
	
run:
	./main