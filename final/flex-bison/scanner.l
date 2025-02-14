%{
#include <stdio.h>
#include "node.h"  
#include "parser.tab.h"

%}

%option noyywrap
%option yylineno
%state COMMENT
%state STRING_STATE

QUOTE                  ["]
DIRECTIVE              ^#.*$
LINE_COMMENT           \/\/[^\n]*
BEGIN_BLOCK_COMMENT    "/*"
END_BLOCK_COMMENT      "*/"
BLOCK_COMMENT_BODY     [^*\/]+

KEYWORD                "alignas"|"alignof"|"auto"|"break"|"case"|"constexpr"|"continue"|"default"|"do"|"extern"|"false"|"for"|"goto"|"inline"|"nullptr"|"register"|"restrict"|"short"|"signed"|"sizeof"|"static"|"static_assert"|"struct"|"switch"|"thread_local"|"true"|"typedef"|"typeof"|"typeof_unqual"|"union"|"unsigned"|"volatile"|"_Atomic"|"_BitInt"|"_Complex"|"_Decimal128"|"_Decimal32"|"_Decimal64"|"_Generic"|"_Lengthof"|"_Noreturn"
TYPE                   "int"|"float"|"long"|"bool"|"char"|"const"|"double"|"enum"|"void"
IDENTIFIER              [a-zA-Z_][a-zA-Z0-9_]*

CONSTANT                [0-9]+(\.[0-9]*)?
STRING_LITERAL          [^"]*\"

 /* |"->"|"?"|": :"|"..."|"#" */
OPERATOR               "+"|"-"|"*"|"/"|"%"|"="|","|";"|":"|"."|"["|"]"|"{"|"}"|"("|")"
RELATIONAL_OP           ">"|"<"|"<>"|"=="|">="|"<="|"!="
LOGICAL_OP             "&&"|"||"
BITWISE_OP             "&"|"|"|"^"|"~"|"<<"|">>"
ASSIGN_OP              "+="|"-="|"*="|"/="|"%="|"<<="|">>="|"&="|"^="|"|="
INC_DEC_OP             "++"|"--"
PREPROCESSOR_OP        "##"|"<:"|":>"|"<%"|"%>"|"%:"|"%:%:"
UNARY_OP               "!"|"~"
TERNARY_OP             "\?"

%%
"if"                { return IF; }
"else"              { return ELSE; }
"return"            { return RETURN; }
"while"             { return WHILE_LOOP; }
"for"               { return FOR_LOOP; }
"do"                { return DO_LOOP; }
{TYPE}              { yylval.str = strdup(yytext); return TYPE; }
{IDENTIFIER}        { yylval.str = strdup(yytext); return ID; }

{RELATIONAL_OP}     { yylval.str = strdup(yytext); return RELATIONAL_OP; }
{LOGICAL_OP}        { yylval.str = strdup(yytext); return LOGICAL_OP; }
{BITWISE_OP}        { yylval.str = strdup(yytext); return BITWISE_OP; }
{ASSIGN_OP}         { yylval.str = strdup(yytext); return ASSIGN_OP; }
{INC_DEC_OP}        { yylval.str = strdup(yytext); return INC_DEC_OP; }
{PREPROCESSOR_OP}   { yylval.str = strdup(yytext); return PREPROCESSOR_OP; }
{UNARY_OP}          { yylval.str = strdup(yytext); return UNARY_OP; }
{TERNARY_OP}        { yylval.str = strdup(yytext); return TERNARY_OP; }
{OPERATOR}          { return yytext[0]; }

{CONSTANT}          { yylval.num = strdup(yytext); return NUM; }

[ \t\n]+            { /* Ignore whitespace and newline */ }
{DIRECTIVE}         { /* Ignore preprocessor directives */ }
{LINE_COMMENT}      { /* Ignore single-line comments */ }

{BEGIN_BLOCK_COMMENT}           { BEGIN COMMENT; }
<COMMENT>{END_BLOCK_COMMENT}    { BEGIN INITIAL; }
<COMMENT>{BLOCK_COMMENT_BODY}   { /* Ignore block comment body */ }
{QUOTE}                         { BEGIN STRING_STATE; }
<STRING_STATE>{STRING_LITERAL}  { 
  BEGIN INITIAL;
  yylval.str = strdup(yytext); return STRING_LITERAL;
}
.               { printf("Unknown character: %s\n", yytext); }

<COMMENT><<EOF>> {                // Error for unclosed comment
    fprintf(stderr, "Error: Unclosed comment at line %d\n", yylineno);
    return 0;
}

<STRING_STATE><<EOF>> {           // Error for unclosed string
    fprintf(stderr, "Error: Unclosed string at line %d\n", yylineno);
    return 0;
}

%%
/* 
int yywrap() {
    return 1;
} */