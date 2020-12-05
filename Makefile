
CFLAGS= -Wall -g 

all: libmyBank.a main
main: main.o libmyBank.a
	gcc $(CFLAGS) -o main main.o libmyBank.a
libmyBank.a: myBank.o
	ar -rcs libmyBank.a myBank.o
myBank.o: myBank.c myBank.h
	gcc $(CFLAGS) -c myBank.c
main.o: main.c myBank.h
	gcc $(CFLAGS) -c main.c
	
.PHONY: clean all

clean:
	rm *.o libmyBank.a main










