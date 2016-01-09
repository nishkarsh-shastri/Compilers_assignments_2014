
# the make file to print a string

a.out: mainPrintString.o libprintString.a
	cc -m32 mainPrintString.o -L. -lprintString 

mainPrintString.o:	mainPrintString.c printString.h
	cc -Wall -m32 -c mainPrintString.c

libprintString.a:	printString.o
		ar -rcs libprintString.a printString.o

printString.o:	printString.c printString.h
	cc -Wall -m32 -c printString.c
clean:
	rm a.out mainPrintString.o libprintString.a printString.o