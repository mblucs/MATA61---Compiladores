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

int main(){
    // Declaração e inicialização de variáveis numéricas
    int inteiro = 10;
    float flutuante = 20.5;

    
    // Declaração e inicialização de vetores
    // int vetorInteiros[5] = {1, 2, 3, 4, 5};
    // float vetorFlutuantes[4] = {1.1, 2.2, 3.3, 4.4};

    return;
}