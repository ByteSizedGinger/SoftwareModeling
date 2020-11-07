../bin/main: */*.cpp */*/*.cpp */*/*/*.cpp */*.h */*/*.h */*/*/*.h main.cpp
	g++ */*.cpp */*/*.cpp */*/*/*.cpp main.cpp -o ../bin/main -I .
	
run:
	../bin/main

doc: */*.cpp */*/*.cpp */*/*/*.cpp */*.h */*/*.h */*/*/*.h main.cpp
	doxygen ../doc/Doxyfile