https://eqdrs.github.io/compilers/2019/09/08/implementando-um-analisador-lexico-usando-o-flex.html

flex main.l && g++ lex.yy.c -lfl -o main && ./main main.c main.lex
flex main.l && g++ lex.yy.c -lfl -o main && ./main erroCommentEOF.c erroCommentEOF.lex
flex main.l && g++ lex.yy.c -lfl -o main && ./main erroStringEOF.c erroStringEOF.lex


Classes dos tokens:
//  ID      Identificador  (variáveis)
//  NUM     Literal número (inteiro ou flutuante)
//  STR     Literal string 
//  KEY     Palavra-chave
//  SYM     Operadores

erroCommentEOF
erroStringEOF
erroInvalidChar
erroInvalidVar