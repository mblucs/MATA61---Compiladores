#include <stdio.h>

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
    printf("Executando a função imprimirMensagem!\n");
}

int main() {
    // Declaração e inicialização de variáveis numéricas
    int inteiro = 10;
    float flutuante = 20.5;

    // Declaração e inicialização de vetores
    int vetorInteiros[5] = {1, 2, 3, 4, 5};
    float vetorFlutuantes[3] = {1.1, 2.2, 3.3};

    // Acesso e atribuição às variáveis e elementos do vetor
    inteiro = 15;
    vetorInteiros[2] = inteiro * 2;
    flutuante = flutuante + vetorFlutuantes[1];

    // Imprimindo os valores atualizados
    printf("Inteiro: %d\n", inteiro);
    printf("Flutuante: %.2f\n", flutuante);
    printf("VetorInteiros[2]: %d\n", vetorInteiros[2]);

    // Condicional simples
    if (inteiro > 10) {
        printf("O valor de 'inteiro' é maior que 10.\n");
    }

    // Condicional composta
    if (flutuante > 15.0 && flutuante < 30.0) {
        printf("'flutuante' está entre 15.0 e 30.0.\n");
    } else {
        printf("'flutuante' não está no intervalo esperado.\n");
    }

    // Comando de repetição (laço 'for')
    printf("Elementos do vetorInteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("vetorInteiros[%d] = %d\n", i, vetorInteiros[i]);
    }

    // Chamando funções definidas
    int resultadoSoma = soma(10, 20);
    printf("Resultado da soma: %d\n", resultadoSoma);

    float resultadoMedia = media(10.5, 20.5);
    printf("Resultado da média: %.2f\n", resultadoMedia);

    imprimirMensagem();

    // Comando de repetição (laço 'while')
    int contador = 0;
    printf("Laço 'while' iniciado:\n");
    while (contador < 3) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    return 0;
}
