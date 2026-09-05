all: main.o pintor.o
	gcc main.o pintor.o -o main -lSDL2

main.o: main.c pintor.o
	gcc -c main.c

pintor.o:pintor.c pintor.h
	gcc -c pintor.c

clean:
	rm *.o&&rm main