%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);
%}

%union {
    int num;
}
%token <num> NUM

%left PLUS MINUS    
%left MULT DIV
%token OPAR CPAR


%start end

%type <num> end expr

%%

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

%%

void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
