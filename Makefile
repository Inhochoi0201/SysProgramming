main: main.o copy.o
	gcc -o main main.o copy.o
main: main.c copy.h
	gcc -c main.c
copy.o: copy.c
	gcc -c copy.c
