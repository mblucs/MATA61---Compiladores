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
}

/* %token <num> NUM
%left PLUS MINUS    
%left MULT DIV
%token OPAR CPAR */

// Declaração dos tokens

%token <num> CONSTANT
%token <string> KEYWORD
%token <string> IDENTIFIER
%token <string> STRING_LITERAL
%token <string> PUNCTUATOR


%start program

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
        printf("statement KEY: %s\n", $1);
    }
    ;

identifier_expr:
    IDENTIFIER {
        printf("ID: %s\n", $1);
    }
    ;

const_expr:
    CONSTANT { 
        printf("%d\n", $1); 
    }
    ;

string_expr:
    STRING_LITERAL {
        printf("STR: %s\n", $1);
    }
    ;

punctuator_expr:
    PUNCTUATOR {
        printf("%s\n", $1);
    }
    ;


%%

void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
