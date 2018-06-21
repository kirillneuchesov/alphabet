CPP = g++ -Wall -Werror
OBJ = build/Main.o build/Logic.o build/Inout.o

.PHONY: all clean 

all: bin build default test 

default: bin/alphabet.exe

test: bin/test.exe
	bin/test.exe

bin/alphabet.exe: $(OBJ)
	$(CPP) $(OBJ) -o bin/alphabet.exe 

build/Logic.o: src/Logic.cpp
	$(CPP) -c src/Logic.cpp -o build/Logic.o 

build/Inout.o: src/Inout.cpp
	$(CPP) -c src/Inout.cpp -o build/Inout.o

build/Main.o: src/Main.cpp
	$(CPP) -c src/Main.cpp -o build/Main.o 

bin/test.exe: build/tests.o build/Logic.o build/Inout.o
	$(CPP) build/tests.o build/Logic.o build/Inout.o -o bin/test.exe

build/tests.o: test/tests.cpp
	$(CPP) -c -I src test/tests.cpp -o build/tests.o

build:
	mkdir build

clean: 
	rm -rf bin/*.exe build
