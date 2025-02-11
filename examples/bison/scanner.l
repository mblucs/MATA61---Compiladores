%{
#include "parser.tab.h"
%}

%%

[0-9]+      { yylval.num = atoi(yytext); return NUM; }
[ \t\n]     { /* Ignora espaços em branco */ }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return MULT; }
"/"         { return DIV; }
"("         { return OPAR; }
")"         { return CPAR; }

%%

int yywrap() {
    return 1;
}