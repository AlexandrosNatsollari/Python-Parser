default:
	bison -y -d projbison.y
	flex projflex.l 
	gcc -c y.tab.c lex.yy.c
	gcc y.tab.o lex.yy.o -o parser
	./parser