main: */*.cpp */*/*.cpp */*/*/*.cpp */*.h */*/*.h */*/*/*.h main.cpp
	g++ */*.cpp */*/*.cpp */*/*/*.cpp */*.h */*/*.h */*/*/*.h main.cpp -o main -I .
	
run:
	./main