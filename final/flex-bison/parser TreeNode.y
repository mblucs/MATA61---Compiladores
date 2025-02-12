%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);

typedef struct TreeNode {
    char *token;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

TreeNode* createNode(char *token, TreeNode *left, TreeNode *right) {
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->token = strdup(token);
    node->left = left;
    node->right = right;
    return node;
}

void printTree(TreeNode *root, int level) {
    if (root == NULL) return;
    for (int i = 0; i < level; i++) printf("  ");
    printf("%s\n", root->token);
    printTree(root->left, level + 1);
    printTree(root->right, level + 1);
}

void freeTree(TreeNode *root) {
    if (root == NULL) return;
    free(root->token);
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

TreeNode *root;
%}

%union {
    double num;
    char *string;
    TreeNode *node;

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
%type <node> statement_list statement declaration keyword_expr identifier_expr expression string_expr

%%
program:
    statement_list{
        root = $1;
        printTree(root, 0);
        freeTree(root);
    }
    ;

statement_list:
    statement_list statement { $$ = createNode("statement_list", $1, $2); }
    | statement { $$ = $1; }
    ;

statement:
    declaration { $$ = $1; }
    | keyword_expr { $$ = $1; }
    | identifier_expr { $$ = $1; }
    | expression { $$ = $1; }
    | string_expr { $$ = $1; }
    ;

declaration:
    keyword_expr identifier_expr {
        $$ = createNode("declaration", $1, $2);
    }
    ;

keyword_expr:
    KEYWORD {
        $$ = createNode($1, NULL, NULL);
        // printf("(KEY: %s)\n", $1);
    }
    ;

identifier_expr:
    IDENTIFIER {
        $$ = createNode($1, NULL, NULL);
        // printf("(ID: %s)\n", $1);
    }
    ;

expression:
    NUMBER { 
        $$ = createNode($1, NULL, NULL);
        
        // printf("%f\n", $1); 
    }
    ;

string_expr:
    STRING_LITERAL {
        $$ = createNode($1, NULL, NULL);
        // printf("STR: %s\n", $1);        
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
