%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);
%}

%union {
    int num;
    char *string;
    char *id;
}

/* %token <num> NUM
%left PLUS MINUS    
%left MULT DIV
%token OPAR CPAR */

// Declaração dos tokens

%token <string> KEYWORD
%token <id> IDENTIFIER
%token <num> CONSTANT
%token <string> STRING_LITERAL
%token <string> PUNCTUATOR


%start program
/* %type <num> end expr */


%%
program:
    program statement
    | statement
    ;

statement:
    keyword_expr
    | identifier_expr
    | const_expr
    | string_expr
    | punctuator_expr
    ;

keyword_expr:
    KEYWORD {
        printf("Palavra-chave reconhecida: %s\n", $1);
    }
    ;

identifier_expr:
    IDENTIFIER {
        printf("Identificador reconhecido: %s\n", $1);
    }
    ;

const_expr:
    CONSTANT {
        printf("Constante reconhecida: %d\n", $1);
    }
    ;

string_expr:
    STRING_LITERAL {
        printf("String reconhecida: %s\n", $1);
    }
    ;

punctuator_expr:
    PUNCTUATOR {
        printf("Punctuator reconhecido: %s\n", $1);
    }
    ;


/* 
end:
    expr                { printf("%d\n",$1); }
expr:
    expr PLUS expr      { $$ = $1 + $3; }
    | expr MINUS expr   { $$ = $1 - $3; }
    | expr MULT expr    { $$ = $1 * $3; }
    | expr DIV expr     { $$ = $1 / $3; }
    | OPAR expr CPAR    { $$ = $2; }
    | NUM               { $$ = $1; }
    ;
 */

%%

void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
