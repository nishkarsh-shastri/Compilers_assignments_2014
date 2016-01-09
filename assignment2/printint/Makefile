
# the make file to print an integer

a.out: mainReadInt.o libreadInt.a
	cc -m32 mainReadInt.o -L. -lreadInt 

mainPrintInt.o:	mainReadInt.c readInteger.h
	cc -Wall -m32 -c mainReadInt.c

libprintInt.a:	printInt.o
		ar -rcs libprintInt.a printInt.o

printInt.o:	printInt.c printInt.h
	cc -Wall -m32 -c printInt.c
clean:
	rm a.out mainPrintInt.o libprintInt.a printInt.o