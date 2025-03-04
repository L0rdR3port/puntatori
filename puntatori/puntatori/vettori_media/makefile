all: main

clean: main main.o arr.o
	rm main main.o arr.o

main: main.o arr.o
	gcc -o main main.o arr.o

main.o: main.c arr.h
	gcc -c -o main.o main.c

arr.o: arr.c arr.h
	gcc -c -o arr.o arr.c