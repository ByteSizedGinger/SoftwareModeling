main: src/*/*.cpp src/*/*/*.cpp src/*/*/*/*.cpp src/*/*.h src/*/*/*.h src/*/*/*/*.h src/main.cpp
	g++ src/*/*.cpp src/*/*/*.cpp src/*/*/*/*.cpp src/main.cpp -o bin/main -I src
	
run:
	./bin/main

doc: src/*/*.cpp src/*/*/*.cpp src/*/*/*/*.cpp src/*/*.h src/*/*/*.h src/*/*/*/*.h src/main.cpp
	doxygen doc/Doxyfile