a.out: ass5_12CS10034_translator.o globalVariables.o  y.tab.o lex.yy.o ass5_12CS10034_main.o 
	g++ ass5_12CS10034_main.o lex.yy.o y.tab.o ass5_12CS10034_translator.o globalVariables.o -lfl
	./a.out<conditiontest.c >conditiontest_output.c
	./a.out<expressiontest.c >expressiontest_output.c
	./a.out<declarationtest.c >declarationtest_output.c
	./a.out<functiontest.c >functiontest_output.c
	./a.out<looptest.c >looptest_output.c
lex.yy.c: ass5_12CS10034.l
	flex ass5_12CS10034.l
y.tab.c: ass5_12CS10034.y
	yacc -dtv ass5_12CS10034.y
ass5_12CS10034_main.o: ass5_12CS10034_main.c
	g++ -c ass5_12CS10034_main.c
lex.yy.o: lex.yy.c
	g++ -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -c y.tab.c  #printing all the grammar rules found in yacc file
	# Remove  -DYYDEBUG to check only the syntax
ass5_12CS10034_translator.o: ass5_12CS10034_translator.cxx
	g++ -c ass5_12CS10034_translator.cxx
globalVariables.o: globalVariables.c
	g++ -c globalVariables.c	

clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass5_12CS10034_main.o a.out ass5_12CS10034_translator.o globalVariables.o
