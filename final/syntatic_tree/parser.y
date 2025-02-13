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
    char *str;
    Node *node;
}

%token <str> ID NUM RELOP TYPE STRING_LITERAL
%token IF ELSE WHILE RETURN

%left '+' '-'
%left '*' '/'
%right '='
%nonassoc RELOP

%type <node> program 

%type <node> statement statement_list 
%type <node> if_statement loop_statement return_statement

%type <node> attribution  declaration function 
%type <node> identifier id_list 
%type <node> parameter_list_opt parameter_list parameter 
%type <node> expression_list expression

%type <node> type comparison


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
    | attribution { $$ = create_node("statement", 1, $1); }
    | if_statement { $$ = create_node("statement", 1, $1); }
    | loop_statement { $$ = create_node("statement", 1, $1); }
    | return_statement { $$ = create_node("statement", 1, $1); }
    | function { $$ = create_node("statement", 1, $1); }
    ;

declaration:
    type id_list ';' { $$ = create_node("declaration", 2, $1, $2); }
    | type function { $$ = create_node("declaration", 2, $1, $2); }
    | type attribution { $$ = create_node("declaration", 2, $1, $2); }
    ;

type:
    TYPE { $$ = create_node("type_specifier", 1, create_node($1, 0)); }   //INT | FLOAT | LONG | BOOL | CHAR | CONST | DOUBLE | ENUM | VOID
    ;

id_list:
    identifier { $$ = $1; }
    | id_list ',' identifier { $$ = create_node("id_list", 2, $1, $3); }
    ;

identifier:
    ID { $$ = create_node("identifier", 1, create_node($1, 0)); }
    | ID '[' NUM ']' { $$ = create_node("array", 2, create_node("identifier", 1, create_node($1, 0)), create_node("array_size", 1, create_node($3, 0))); }
    ;
    
function:
    ID '(' parameter_list_opt ')' '{' statement_list '}' { $$ = create_node("function_definition", 3, create_node("function_name", 1, create_node($1, 0)), $3, $6); }
    | ID '(' parameter_list_opt ')' ';' { $$ = create_node("function_declaration", 2, create_node("function_name", 1, create_node($1, 0)), $3); }
    ;

parameter_list_opt:
    parameter_list { $$ = $1; }
    | /* empty */ { $$ = create_node("parameter_list", 0); }
    ;

parameter_list:
    parameter { $$ = create_node("parameter_list", 1, $1); }
    | parameter_list ',' parameter { $$ = create_node("parameter_list", 2, $1, $3); }
    ;

parameter:
    type ID { $$ = create_node("parameter", 1, create_node("declaration", 2, $1, create_node("identifier", 1, create_node($2, 0)))); }
    | expression { $$ = create_node("parameter", 1, $1); }
    ;

attribution:
    identifier '=' expression ';' { $$ = create_node("attribution", 2, $1, $3); }
    ;

if_statement:
    IF '(' comparison ')' '{' statement_list '}' ELSE '{' statement_list '}' { $$ = create_node("if_statement", 3, $3, $6, $10); }
    | IF '(' comparison ')' '{' statement_list '}' { $$ = create_node("if_statement", 2, $3, $6); }
    ;

comparison:
    expression RELOP expression { $$ = create_node("compare", 3, $1, create_node("relop",1,create_node($2,0)),$3); }
    // TODO: reduce to boolean

loop_statement:
    WHILE '(' comparison ')' '{' statement_list '}' { $$ = create_node("loop_statement", 2, $3, $6); }
    ;

return_statement:
    RETURN expression ';' { $$ = create_node("return_statement", 1, $2); }
    | RETURN ';' { $$ = create_node("return_statement", 0); }
    ;

expression:
    NUM { $$ = create_node("literal_value", 1, create_node($1, 0)); }
    | identifier { $$ = $1; }
    | STRING_LITERAL { $$ = create_node("string_literal", 1, create_node($1, 0)); }
    | expression '+' expression { $$ = create_node("add", 2, $1, $3); }
    | expression '-' expression { $$ = create_node("subtract", 2, $1, $3); }
    | expression '*' expression { $$ = create_node("multiply", 2, $1, $3); }
    | expression '/' expression { $$ = create_node("divide", 2, $1, $3); }
    | '(' expression ')' { $$ = $2; }
    | '{' expression_list '}' { $$ = create_node("expression_list", 1, $2); }  // {1, 2, 3, 4, 5}
    | function { $$ = $1; }
    ;

expression_list:
    expression { $$ = create_node("expression_list", 1, $1); }
    | expression_list ',' expression { $$ = create_node("expression_list", 2, $1, $3); }
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
