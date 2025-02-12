%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "node.h"

Node *root;

int yylex(void);
void yyerror(const char *s);

%}

%union {
    char* num;
    char *string;
    char *id;
    Node *node;
}

%token <id> NUMBER 
%token <string> KEYWORD
%token <string> IDENTIFIER
%token <string> STRING_LITERAL
%token OPERATOR COMPARE

%right '='
%left '+' '-' '*' '/'

%type <node> program statement_list statement declaration keyword_expr identifier_expr expression string_expr type

%start program

%%

program:
    statement_list { root = create_node("program", 1, $1); }
    ;

statement_list:
    statement { $$ = create_node("statement_list", 1, $1); }
    | statement_list statement { $$ = create_node("statement_list", 2, $1, $2); }
    ;

statement:
    declaration { $$ = create_node("statement", 1, $1); }
    | keyword_expr { $$ = $1; }
    | identifier_expr { $$ = $1; }
    | expression { $$ = $1; }
    | string_expr { $$ = $1; }
    ;

declaration:
    type IDENTIFIER ';' { $$ = create_node("declaration", 2, $1, create_node($2, 0)); }
    ;

type:
    KEYWORD { $$ = create_node($1, 0); }
    /* INT { $$ = create_node("INT", 0); }
    | FLOAT { $$ = create_node("FLOAT", 0); } */
    ;

keyword_expr:
    KEYWORD { $$ = create_node($1, 0); }
    ;

identifier_expr:
    IDENTIFIER { $$ = create_node($1, 0); }
    ;

expression:
    NUMBER { $$ = create_node($1, 0); }
    ;

string_expr:
    STRING_LITERAL { $$ = create_node($1, 0); }
    ;

%%


Node *create_node(char *label, int child_count, ...) {
    Node *node = malloc(sizeof(Node));
    node->label = strdup(label);
    node->child_count = child_count;
    node->children = malloc(child_count * sizeof(Node *));

    va_list args;
    va_start(args, child_count);
    for (int i = 0; i < child_count; i++) {
        node->children[i] = va_arg(args, Node *);
    }
    va_end(args);

    return node;
}

void print_tree(Node *node, int depth) {
    if (!node) return;

    for (int i = 0; i < depth; i++) {
        printf("\t");
    }
    printf("%s\n", node->label);
    
    for (int i = 0; i < node->child_count; i++) {
        print_tree(node->children[i], depth + 1);
    }
}

void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}

int main() {
    if (yyparse() == 0) {
        printf("Parse successful!\n");
        print_tree(root, 0);

    } else {
        printf("Parse failed!\n");
    }
    return 0;
}