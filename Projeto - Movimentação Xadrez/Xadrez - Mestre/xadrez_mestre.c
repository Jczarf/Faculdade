#include <stdio.h>
/*

    Aluno: Júlio Cézar Freitas 
    Desafio de código: Xadrez - Mestre.
*/
// Função que exibe o menu de seleção das peças de xadrez
void func_menu() {
    printf("Simulação sistema de xadrez:\n");
    printf("Peças disponíveis (selecione a opção):\n");
    puts("(1) Torre");
    puts("(2) Bispo");
    puts("(3) Rainha");
    puts("(4) Cavalo");
}

// Função que imprime os movimentos da Torre de forma recursiva
// A torre se move na direção "Direita", decrementando o número de movimentos a cada chamada recursiva
void movimentoTorre(int x) {
    if (x > 0) {
        // Imprime o movimento atual da torre
        printf("%-20s %-15s %d\n", "Direção: Direita", "Movimentos:", x);
        // Chamada recursiva diminuindo o contador de movimentos
        movimentoTorre(x - 1);
    }
}

// Função que simula os movimentos do Bispo usando loops aninhados reais
// O loop externo representa o movimento vertical (linhas) e o interno o movimento horizontal (colunas)
// O bispo se move nas diagonais, então o código imprime movimentos onde linha == coluna
void movimentoBispo(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {       // Loop vertical (linhas)
        for (int j = 1; j <= movimentos; j++) {   // Loop horizontal (colunas)
            if (i == j) {                         // Condição para a diagonal principal (movimento do bispo)
                printf("Movimento %d: Linha %d, Coluna %d -> Direção: Diagonal (↗ Cima Direita)\n", i, i, j);
            }
        }
    }
}

// Função que imprime os movimentos da Rainha de forma recursiva
// Aqui, a Rainha se move na direção "Esquerda", decrementando o número de movimentos a cada chamada recursiva
void movimentoRainha(int x) {
    if (x > 0) {
        // Imprime o movimento atual da rainha
        printf("%-25s %-10s %d\n", "Direção: Esquerda", "Movimentos:", x);
        // Chamada recursiva diminuindo o contador de movimentos
        movimentoRainha(x - 1);
    }
}

// Função que imprime o movimento do Cavalo usando loops aninhados
// O movimento simula o cavalo subindo duas casas (loop interno de 2 iterações para "Cima")
// e depois uma casa à direita (loop interno de 1 iteração para "Direita")
// O parâmetro x serve como contador para a quantidade de movimentos exibidos (incrementado a cada passo)
void movimentoCavalo(int x) {
    for (int i = 0; i < 1; i++) {        // Loop externo apenas para organização (executa uma vez)
        for (int j = 0; j < 2; j++) {    // Movimento vertical (2 casas para cima)
            printf("%-25s %-10s %d\n", "Direção: Cima", "Movimentos:", x++);
        }
        for (int j = 0; j < 1; j++) {    // Movimento horizontal (1 casa para a direita)
            printf("%-25s %-10s %d\n", "Direção: Direita", "Movimentos:", x);
        }
    }
}

// Função principal que controla o programa e o menu interativo
int main() {
    int menu;

    do {
        func_menu();        // Exibe o menu de seleção
        scanf("%d", &menu); // Lê a opção escolhida pelo usuário

        switch (menu) {
            case 1: { // Caso a Torre seja selecionada
                int count_torre = 5; // Número de movimentos simulados
                printf("Você selecionou Torre:\n");
                movimentoTorre(count_torre); // Chama função recursiva da torre
                break;
            }
            case 2: { // Caso o Bispo seja selecionado
                int count_bispo = 5; // Número de movimentos simulados
                printf("Você selecionou Bispo:\n");
                movimentoBispo(count_bispo); // Chama função com loops aninhados para o bispo
                break;
            }
            case 3: { // Caso a Rainha seja selecionada
                int count_rainha = 8; // Número de movimentos simulados
                printf("Você selecionou Rainha:\n");
                movimentoRainha(count_rainha); // Chama função recursiva da rainha
                break;
            }
            case 4: { // Caso o Cavalo seja selecionado
                int count_cavalo = 1; // Contador inicial de movimentos
                printf("Você selecionou Cavalo:\n");
                movimentoCavalo(count_cavalo); // Chama função com loops para o cavalo
                break;
            }
            default: // Caso a opção seja inválida
                printf("Opção incorreta! Selecione novamente.\n");
                menu = 0; // Reseta o menu para forçar nova entrada
                break;
        }

    } while (menu == 0); // Repete o menu até o usuário escolher uma opção válida

    return 0; // Finaliza o programa
}
