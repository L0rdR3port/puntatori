all: main

clean: main main.o vettori.o
	rm main main.o vettori.o

main: main.o vettori.o
	gcc -o main main.o vettori.o

main.o: main.c vettori.h
	gcc -c -o main.o main.c

vettori.o: vettori.c vettori.h
	gcc -c -o vettori.o vettori.c