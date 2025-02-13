/*
MATA61 - Compiladores - 2024.2
Analisador Léxico - C
*/
#include <stdio.h>
int x;
int a, b, c[2];

// Função que retorna um número inteiro
int soma(int a, int b) {
    return a + b;
}


// Função que retorna um número flutuante
float media(float x, float y) {
    return (x + y) / 2;
}

// Função que não retorna nada
void imprimirMensagem() {
    printf("Executando a função imprimirMensagem.\n");
    return;
}
