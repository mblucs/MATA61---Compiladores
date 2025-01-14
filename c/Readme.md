flex main.l && g++ lex.yy.c -lfl -o main && ./main main.c main.lex
flex main.l && g++ lex.yy.c -lfl -o main && ./main erroCommentEOF.c erroCommentEOF.lex
flex main.l && g++ lex.yy.c -lfl -o main && ./main erroStringEOF.c erroStringEOF.lex

Referências: 
https://open-std.org/JTC1/SC22/WG14/www/docs/n3435.pdf - Seção 6.4.
https://eqdrs.github.io/compilers/2019/09/08/implementando-um-analisador-lexico-usando-o-flex.html
