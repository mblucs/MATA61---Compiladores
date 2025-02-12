#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "node.h"

Node *create_node(char *label, int child_count, ...) {
    Node *node = malloc(sizeof(Node));
    if (!node) {
        perror("Erro ao alocar memória para nó");
        exit(EXIT_FAILURE);
    }
    node->label = strdup(label);
     if (!node->label) {
        perror("Erro ao duplicar a string");
        exit(EXIT_FAILURE);
    }
    node->child_count = child_count;
    node->children = malloc(child_count * sizeof(Node *));
    if (!node->children) {
        perror("Erro ao alocar memória para filhos");
        exit(EXIT_FAILURE);
    }

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

void free_tree(Node *node) {
    if (!node) return;

    free(node->label);
    for (int i = 0; i < node->child_count; i++) {
        free_tree(node->children[i]);
    }
    free(node->children);
    free(node);
}
