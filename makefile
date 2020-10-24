main: **/*.cpp **/*.h
	g++ **/*.cpp **/*.h main.cpp -o main -I .
	
run:
	./main