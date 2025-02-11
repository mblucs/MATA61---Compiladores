%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "node.h"

Node *root;

int yylex();
void yyerror(const char *s);
%}

%union {
    char* num;
    char *id;
    Node *node;
}

%token <id> ID NUM RELOP
%token INT FLOAT IF ELSE WHILE
%token ASSIGN SEMICOLON LPAREN RPAREN LBRACE RBRACE

%type <node> program statement statement_list expression attribution if_statement type declaration condition

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
    attribution { $$ = create_node("statement", 1, $1); }
    | if_statement { $$ = create_node("statement", 1, $1); }
    | declaration { $$ = create_node("statement", 1, $1); }
    ;

declaration:
    type ID SEMICOLON { $$ = create_node("declaration", 2, $1, create_node($2, 0)); }
    ;

type:
    INT { $$ = create_node("INT", 0); }
    | FLOAT { $$ = create_node("FLOAT", 0); }
    ;

attribution:
    ID ASSIGN expression SEMICOLON { $$ = create_node("attribution", 2, create_node($1, 0), $3); }
    ;

if_statement:
    IF LPAREN condition RPAREN LBRACE statement_list RBRACE ELSE LBRACE statement_list RBRACE { $$ = create_node("if_statement", 3, $3, $6, $10); }
    | IF LPAREN condition RPAREN LBRACE statement_list RBRACE { $$ = create_node("if_statement", 2, $3, $6); }
    ;
condition:
    expression RELOP expression { $$ = create_node("condition", 3, $1, create_node("relop",1,create_node($2,0)),$3); }

expression:
    NUM { $$ = create_node($1, 0); }
    | ID { $$ = create_node($1, 0); }
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
    fprintf(stderr, "Erro de sintaxe: %s\n", s);
}

int main() {
    if (yyparse() == 0) {
        print_tree(root, 0);
    }
    return 0;
}
