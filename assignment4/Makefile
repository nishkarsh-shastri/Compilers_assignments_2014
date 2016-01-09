a.out: y.tab.o lex.yy.o ass4_12CS10034_main.o 
	gcc ass4_12CS10034_main.o lex.yy.o y.tab.o -lfl
	./a.out < testfile.c  #getting the testfile from the current directory
lex.yy.c: ass4_12CS10034.l
	flex ass4_12CS10034.l
y.tab.c: ass4_12CS10034.y
	yacc -dtv ass4_12CS10034.y
ass4_12CS10034_main.o: ass4_12CS10034_main.c
	gcc -c ass4_12CS10034_main.c
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c
y.tab.o:    y.tab.c
	gcc -DYYDEBUG -c y.tab.c  #printing all the grammar rules found in yacc file
	# Remove  -DYYDEBUG to check only the syntax
clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass4_12CS10034_main.o a.out
