%{
#include <stdio.h>
#include "node.h"  
#include "parser.tab.h"

%}

TYPE                   "int"|"float"|"long"|"bool"
IDENTIFIER             [a-zA-Z_][a-zA-Z0-9_]*
CONSTANT               [0-9]+(\.[0-9]*)?
OPERATOR               "+"|"-"|"*"|"/"|"="|"|"|","|";"|":"|"."|"["|"]"|"{"|"}"|"("|")"
RELOP                  ">"|"<"|"<>"|"=="|">="|"<="|"!="

%%
"if"        { return IF; }
"else"      { return ELSE; }
"while"     { return WHILE; }
{TYPE}          { yylval.id = strdup(yytext); return TYPE; }
{IDENTIFIER}    { yylval.id = strdup(yytext); return ID; }
{RELOP}         { yylval.id = strdup(yytext); return RELOP;}
{CONSTANT}      { yylval.num= strdup(yytext); return NUM; }
{OPERATOR}      { return yytext[0]; }
[ \t\n]+    { /* Ignora espaços em branco */ }
.           { printf("Caractere desconhecido: %s\n", yytext); }


%%

int yywrap() {
    return 1;
}
