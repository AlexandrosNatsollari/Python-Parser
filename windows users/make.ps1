./win_bison.exe -y -v -d ./Project/bison.y 
./win_flex.exe ./Project/flex.l
gcc -c y.tab.c lex.yy.c
gcc y.tab.o lex.yy.o -o myParser.exe

