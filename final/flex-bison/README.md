bison -d parser.y
flex scanner.l
gcc parser.tab.c lex.yy.c -o main
./main < input.c

====

cd ./UFBA/MATA61---Compiladores/final/flex-bison
flex scanner.l && g++ lex.yy.c -lfl -o main && ./main input.c flex.txt
