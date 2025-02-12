#include <stdio.h>
#include <stdlib.h>

/* Inclua os headers necessários */
#include "parser.tab.h"
#include "node.h"

/* Declarações de funções externas (geradas pelo Flex e Bison) */
extern FILE *yyin; // File pointer para a entrada do Flex
extern int yyparse(); // Função que inicia a análise sintática (Bison)

/* Variável global para a raiz da árvore sintática (declarada no parser.y) */
extern Node *root;

int main() {
    FILE *inputFile, *outputFile; // Ponteiros para os arquivos de entrada e saída

    /* Abre o arquivo input.c para leitura */
    inputFile = fopen("input.c", "r");
    if (!inputFile) {
        fprintf(stderr, "Erro ao abrir o arquivo input.c\n");
        return 1; // Retorna código de erro
    }

    /* Abre o arquivo de saída para escrita */
    outputFile = fopen("tree_out.txt", "w"); // "w" para sobrescrever o arquivo, "a" para adicionar
    if (!outputFile) {
        fprintf(stderr, "Erro ao abrir o arquivo de saída tree_out.txt\n");
        fclose(inputFile); // Fecha o arquivo de entrada antes de sair
        return 1; // Retorna código de erro
    }

    /* Configura o Flex para ler do arquivo */
    yyin = inputFile;

    /* Realiza o parsing (análise sintática) */
    if (yyparse() == 0) {
        fprintf(outputFile, "Análise sintática completa!\n");

        /* Imprime a árvore sintática */
        fprintf(outputFile, "Árvore Sintática:\n");
        print_tree(root, 0, outputFile); // Passa o ponteiro para o arquivo

        /* Libera a memória alocada para a árvore sintática */
        free_tree(root);
    } else {
        fprintf(stderr, "Erro: Análise sintática falhou!\n");
        fclose(inputFile);
        fclose(outputFile);
        return 1; // Retorna código de erro
    }

    /* Fecha os arquivos */
    fclose(inputFile);
    fclose(outputFile);

    return 0; // Retorna sucesso
}
