all: main

clean: main main.o conta_spazi.o
	rm main main.o conta_spazi.o

main: main.o conta_spazi.o
	gcc -g -o main main.o conta_spazi.o

main.o: main.c conta_spazi.h
	gcc -g -c -o main.o main.c

contaspazi.o: conta_spazi.c conta_spazi.h
	gcc -g -c -o conta_spazi.o conta_spazi.c