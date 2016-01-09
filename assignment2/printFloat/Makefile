
# the make file to print an integer

a.out: mainPrintFloat.o libprintFloat.a
	cc -m32 mainPrintFloat.o -L. -lprintFloat 

mainPrintFloat.o:	mainPrintFloat.c printFloat.h
	cc -Wall -m32 -c mainPrintFloat.c

libprintFloat.a:	printFloat.o
		ar -rcs libprintFloat.a printFloat.o

printFloat.o:	printFloat.c printFloat.h
	cc -Wall -m32 -c printFloat.c
clean:
	rm a.out mainPrintFloat.o libprintFloat.a printFloat.o