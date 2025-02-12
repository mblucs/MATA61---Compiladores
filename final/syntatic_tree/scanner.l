%{
#include <stdio.h>
#include "node.h"  
#include "parser.tab.h"

%}

KEYWORD                "alignas"|"alignof"|"auto"|"break"|"case"|"constexpr"|"continue"|"default"|"do"|"extern"|"false"|"for"|"goto"|"inline"|"nullptr"|"register"|"restrict"|"short"|"signed"|"sizeof"|"static"|"static_assert"|"struct"|"switch"|"thread_local"|"true"|"typedef"|"typeof"|"typeof_unqual"|"union"|"unsigned"|"volatile"|"_Atomic"|"_BitInt"|"_Complex"|"_Decimal128"|"_Decimal32"|"_Decimal64"|"_Generic"|"_Lengthof"|"_Noreturn"
TYPE                   "int"|"float"|"long"|"bool"|"char"|"const"|"double"|"enum"|"void"
IDENTIFIER             [a-zA-Z_][a-zA-Z0-9_]*
CONSTANT               [0-9]+(\.[0-9]*)?
OPERATOR               "+"|"-"|"*"|"/"|"="|"|"|","|";"|":"|"."|"["|"]"|"{"|"}"|"("|")"
RELOP                  ">"|"<"|"<>"|"=="|">="|"<="|"!="

%%
"if"            { return IF; }
"else"          { return ELSE; }
"while"         { return WHILE; }
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
