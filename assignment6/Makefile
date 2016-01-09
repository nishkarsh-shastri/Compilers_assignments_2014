a.out: ass6_12CS10034_translator.o globalVariables.o  y.tab.o lex.yy.o ass6_12CS10034_main.o 
	g++  ass6_12CS10034_main.o lex.yy.o y.tab.o ass6_12CS10034_translator.o globalVariables.o -lfl
lex.yy.c: ass6_12CS10034.l
	flex ass6_12CS10034.l
y.tab.c: ass6_12CS10034.y
	yacc -dtv ass6_12CS10034.y
ass6_12CS10034_main.o: ass6_12CS10034_main.c
	g++ -c ass6_12CS10034_main.c
lex.yy.o: lex.yy.c
	g++ -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -c y.tab.c  #printing all the grammar rules found in yacc file
	# Remove  -DYYDEBUG to check only the syntax
ass6_12CS10034_translator.o: ass6_12CS10034_translator.cxx
	g++ -c ass6_12CS10034_translator.cxx
globalVariables.o: globalVariables.c
	g++ -c globalVariables.c	

run1: a.out ass6_12CS10034_test1.c 
	./a.out < ass6_12CS10034_test1.c > ass6_12CS10034_1.s
	gcc -m32 ass6_12CS10034_1.s myl.c -o 1.out
	./1.out
run2: a.out ass6_12CS10034_test2.c
	./a.out < ass6_12CS10034_test2.c > ass6_12CS10034_2.s
	gcc -m32 ass6_12CS10034_2.s myl.c -o 2.out
	./2.out
run3: a.out ass6_12CS10034_test3.c
	./a.out < ass6_12CS10034_test3.c > ass6_12CS10034_3.s
	gcc -m32 ass6_12CS10034_3.s myl.c -o 3.out
	./3.out
run4: a.out ass6_12CS10034_test4.c
	./a.out < ass6_12CS10034_test4.c > ass6_12CS10034_4.s
	gcc -m32 ass6_12CS10034_4.s myl.c -o 4.out
	./4.out
run5: a.out ass6_12CS10034_test5.c
	./a.out < ass6_12CS10034_test5.c > ass6_12CS10034_5.s
	gcc -m32 ass6_12CS10034_5.s myl.c -o 5.out
	./5.out

clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass6_12CS10034_main.o a.out ass6_12CS10034_translator.o globalVariables.o
