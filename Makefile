CC=g++
CFLAGS=-Wall -Werror

.PHONY: all default clean test

all: default test

default: bin/alphabet.exe

test: bin/test.exe
	bin/test.exe

bin/test.exe: bin build/tests.o
	$(CC) $(CFLAGS) build/tests.o -o bin/test.exe

build/tests.o: build test/tests.cpp
	$(CC) $(CFLAGS) -I src -c test/tests.cpp -o build/tests.o

bin/alphabet.exe: bin build/Main.o
	$(CC) $(CFLAGS) build/Main.o -o bin/alphabet.exe

build/Main.o: build src/Main.cpp
	$(CC) $(CFLAGS) -c src/Main.cpp -o build/Main.o

bin:
	mkdir bin

build:
	mkdir build

clean:
	rm -rf bin build

