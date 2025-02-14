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
    int vetorInteiros[5] = {1, 2, 3, 4, 5};
    float vetorFlutuantes[4] = {1.1, 2.2, 3.3, 4.4};

    
    // Acesso e atribuição às variáveis e elementos do vetor
    inteiro = 5;
    vetorInteiros[1] = inteiro * 2;
    vetorInteiros[0] = vetorInteiros[0];
    // vetorInteiros[2] = soma(inteiro, vetorInteiros[3]); //TODO: attribution: identifier '=' expression | expression = function

    // flutuante += 0.2;
    vetorFlutuantes[1] = flutuante / 4;
    // vetorFlutuantes[2] = media(vetorFlutuantes[3], inteiro*0.5);

    
    // Imprimindo os valores atualizados
    printf("inteiro = %d\n", inteiro);
    printf("vetorInteiros[1] = %d\n", vetorInteiros[1]);
    printf("vetorInteiros[2] = %d\n", vetorInteiros[2]);
    
    printf("\n");

    printf("flutuante = %.2f\n", flutuante);
    printf("vetorFlutuantes[1] = %.2f\n", vetorFlutuantes[1]);
    printf("vetorFlutuantes[2] = %.2f\n", vetorFlutuantes[2]);

    printf("\n");

    // Condicional simples
    if (flutuante > 15.0 && flutuante < 30.0) {
        printf("O valor de 'flutuante' está entre 15.0 e 30.0.\n");
    } 

    // Condicional composta
    if (inteiro > 10) {
        printf("O valor de 'inteiro' é maior que 10.\n");
    } else if (inteiro < 10) {
        printf("O valor de 'inteiro' é menor que 10.\n");
    } else {
        printf("O valor de 'inteiro' é igual a 10.\n");
    }

    printf("\n");

    // Comandos de repetição
    printf("Repetição usando FOR:\n");

    for (int i = 0 ; i < 5 ; i++) {
        printf(i);
        //TODO: printf("vetorInteiros[%d] = %d\n", i, vetorInteiros[i]);
    }

    
    printf("\nRepetição usando WHILE:\n");
    int j = 0;
    while (j < 5) {
        printf(j);
        // printf("vetorInteiros[%d] = %d\n", j, vetorInteiros[j]);
        j++;
    }

    
    printf("\nRepetição usando DO WHILE:\n");
    int k = 0;
    do {
        printf(k);
        // printf("vetorInteiros[%d] = %d\n", k, vetorInteiros[k]);
        k++;
    } while (k < 5);
    
    printf("\n");

    // Chamando funções definidas
    imprimirMensagem();
    
    return;
}