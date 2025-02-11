flex main.l && g++ lex.yy.c -lfl -o main && ./main main.c main.lex
flex main.l && g++ lex.yy.c -lfl -o main && ./main erroCommentEOF.c erroCommentEOF.lex
flex main.l && g++ lex.yy.c -lfl -o main && ./main erroStringEOF.c erroStringEOF.lex

Referências: 
https://open-std.org/JTC1/SC22/WG14/www/docs/n3435.pdf - Seção 6.4.
https://eqdrs.github.io/compilers/2019/09/08/implementando-um-analisador-lexico-usando-o-flex.html


---

type lex file.l
type yacc file.y
type cc lex.yy.c y.tab.h -ll
type ./a.out

---

flex lexer.l
bison -d grammar.y
gcc -o compiler compiler.c grammar.tab.c lex.yy.c