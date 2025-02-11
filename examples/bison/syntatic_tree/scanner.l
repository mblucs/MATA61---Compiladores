%{
#include <stdio.h>
#include "node.h"  
#include "parser.tab.h"

%}

%%

[0-9]+      { yylval.num= strdup(yytext); return NUM; }
"int"       { return INT; }
"float"     { return FLOAT; }
"if"        { return IF; }
"else"      { return ELSE; }
"while"     { return WHILE; }
"<"         { yylval.id = strdup(yytext); return RELOP;}
[a-zA-Z_][a-zA-Z0-9_]* { yylval.id = strdup(yytext); return ID; }
"="         { return ASSIGN; }
";"         { return SEMICOLON; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"{"         { return LBRACE; }
"}"         { return RBRACE; }

[ \t\n]+    { /* Ignora espaços em branco */ }
.           { printf("Caractere desconhecido: %s\n", yytext); }

%%

int yywrap() {
    return 1;
}
