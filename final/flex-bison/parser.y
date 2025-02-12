%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);

char* numToString(double num) {
    char *str = (char *)malloc(20 * sizeof(char));
    if (str == NULL) {
        yyerror("Memory allocation failed");
        exit(1);
    }
    sprintf(str, "%f", num);
    return str;
}
%}

%union {
    double num;
    char *string;
}

/* %token <num> NUM
%left PLUS MINUS    
%left MULT DIV
%token OPAR CPAR */

// Declaração dos tokens

%token <num> NUMBER
%token <string> KEYWORD
%token <string> IDENTIFIER
%token <string> STRING_LITERAL
%token <string> OPERATOR
%token <string> COMPARE


%right '='
%left '+' '-' '*' '/'

%start program
/* %type <string> statement 
%type <num> expression */

%%
program:
    statement_list
    ;

statement_list:
    statement_list statement 
    | statement
    ;

statement:
declaration
    keyword_expr
    | identifier_expr
    | expression
    | string_expr
    ;

declaration:
    keyword_expr identifier_expr {
        printf("declaration\n");
    }
    ;

keyword_expr:
    KEYWORD {
        printf("(KEY: %s)\n", $1);
    }
    ;

identifier_expr:
    IDENTIFIER {
        printf("(ID: %s)\n", $1);
    }
    ;

expression:
    NUMBER { 
        printf("%f\n", $1); 
    }
    ;

string_expr:
    STRING_LITERAL {
        printf("STR: %s\n", $1);
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
