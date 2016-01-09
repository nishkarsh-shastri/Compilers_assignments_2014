a.out: y.tab.o lex.yy.o ass3_12CS10034_main.o 
	gcc ass3_12CS10034_main.o lex.yy.o y.tab.o -lfl
	./a.out < testfile.c
lex.yy.c: ass3_12CS10034.l
	flex ass3_12CS10034.l
y.tab.c: ass3_12CS10034.y
	yacc -dtv ass3_12CS10034.y
ass3_12CS10034_main.o: ass3_12CS10034_main.c
	gcc -c ass3_12CS10034_main.c
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c
y.tab.o:    y.tab.c
	gcc -c y.tab.c
clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass3_12CS10034_main.o a.out
