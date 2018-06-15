CC=g++
CFLAGS=-Wall -Werror

default: bin/alphabet

bin/alphabet: bin build/Main.o
	$(CC) $(CFLAGS) build/Main.o -o bin/alphabet

build/Main.o: build src/Main.cpp
	$(CC) $(CFLAGS) -c src/Main.cpp -o build/Main.o

bin:
	mkdir bin

build:
	mkdir build

clean:
	rm -rf bin build

