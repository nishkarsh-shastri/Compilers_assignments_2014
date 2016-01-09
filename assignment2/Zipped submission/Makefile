
# the make file to print a string

a.out: mainFile.o libAll.a
	cc -m32 mainFile.o -L. -lAll

mainFile.o:	mainFile.c myl.h
	cc -Wall -m32 -c mainFile.c

libAll.a:	ass2_12CS10034.o
		ar -rcs libAll.a ass2_12CS10034.o

ass2_12CS10034.o:	ass2_12CS10034.c myl.h
	cc -Wall -m32 -c ass2_12CS10034.c
clean:
	rm a.out mainFile.o libAll.a ass2_12CS10034.o