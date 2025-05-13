#include <stdio.h>

int main() {
    /*

    Aluno: Júlio Cézar Freitas de Oliveira
    Desafio de código: Xadrez - Novato.
    
    */

    // ------------------------------
    // Movimento da TORRE (FOR LOOP)
    // ------------------------------
    int casasTorre = 5;
    printf("Movimento da TORRE (5 casas para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ------------------------------
    // Movimento do BISPO (WHILE LOOP)
    // ------------------------------
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do BISPO (5 casas na diagonal Cima Direita):\n");
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // ------------------------------
    // Movimento da RAINHA (DO-WHILE LOOP)
    // ------------------------------
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da RAINHA (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
