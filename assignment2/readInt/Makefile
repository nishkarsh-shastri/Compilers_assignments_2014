
# the make file to print an integer

a.out: mainReadInt.o libreadInt.a
	cc -m32 mainReadInt.o -L. -lreadInt 

mainReadInt.o:	mainReadInt.c readInteger.h
	cc -Wall -m32 -c mainReadInt.c

libreadInt.a:	readInteger.o
		ar -rcs libreadInt.a readInteger.o

readInteger.o:	readInteger.c readInteger.h
	cc -Wall -m32 -c readInteger.c
clean:
	rm a.out mainReadInt.o libreadInt.a readInteger.o