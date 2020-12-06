CC=gcc
AR = ar
OBJECTS_MAIN = main.o
FLAGS = -Wall -g


all : libmyBank.a mains 

#static
mains: $(OBJECTS_MAIN) libmyBank.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) myBank.o

#creating static lib.a	
libmyBank.a: myBank.o
	$(AR) -rcs libmyBank.a myBank.o

main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c

myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
	
	
.PHONY: clean

clean:
	rm -f  *.o mains *.a 