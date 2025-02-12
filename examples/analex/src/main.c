#include <stdio.h>
#include <stdlib.h>

/* Inclua os headers necess�rios */
#include "parser.tab.h"
#include "node.h"

/* Declara��es de fun��es externas (geradas pelo Flex e Bison) */
extern FILE *yyin; // File pointer para a entrada do Flex
extern int yyparse(); // Fun��o que inicia a an�lise sint�tica (Bison)

/* Vari�vel global para a raiz da �rvore sint�tica (declarada no parser.y) */
extern Node *root;

int main() {
    FILE *inputFile, *outputFile; // Ponteiros para os arquivos de entrada e sa�da

    /* Abre o arquivo input.c para leitura */
    inputFile = fopen("input.c", "r");
    if (!inputFile) {
        fprintf(stderr, "Erro ao abrir o arquivo input.c\n");
        return 1; // Retorna c�digo de erro
    }

    /* Abre o arquivo de sa�da para escrita */
    outputFile = fopen("tree_out.txt", "w"); // "w" para sobrescrever o arquivo, "a" para adicionar
    if (!outputFile) {
        fprintf(stderr, "Erro ao abrir o arquivo de sa�da tree_out.txt\n");
        fclose(inputFile); // Fecha o arquivo de entrada antes de sair
        return 1; // Retorna c�digo de erro
    }

    /* Configura o Flex para ler do arquivo */
    yyin = inputFile;

    /* Realiza o parsing (an�lise sint�tica) */
    if (yyparse() == 0) {
        fprintf(outputFile, "An�lise sint�tica completa!\n");

        /* Imprime a �rvore sint�tica */
        fprintf(outputFile, "�rvore Sint�tica:\n");
        print_tree(root, 0, outputFile); // Passa o ponteiro para o arquivo

        /* Libera a mem�ria alocada para a �rvore sint�tica */
        free_tree(root);
    } else {
        fprintf(stderr, "Erro: An�lise sint�tica falhou!\n");
        fclose(inputFile);
        fclose(outputFile);
        return 1; // Retorna c�digo de erro
    }

    /* Fecha os arquivos */
    fclose(inputFile);
    fclose(outputFile);

    return 0; // Retorna sucesso
}
