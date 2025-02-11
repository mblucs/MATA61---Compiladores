bison -d parser.y
flex scanner.l
gcc parser.tab.c lex.yy.c -o main
./main < input