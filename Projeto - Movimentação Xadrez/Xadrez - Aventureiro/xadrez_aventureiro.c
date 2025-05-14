#include <stdio.h>

int main () 
{
    /*
        Aluno: Júlio Cézar Freitas de Oliveira 
        Desafio de código: Xadrez - Aventureiro.
    */

    int menu = 0;
    int sub_menu = 0;

    do
    {
        printf("Simulação sistema de xadrez : \n");

        printf("Peças disponiveis: (selecione a opção) \n");
        puts("(1) Torre  ");
        puts("(2) Bispo  ");
        puts("(3) Rainha ");
        puts("(4) Cavalo ");
        scanf("%d", &menu);

        switch (menu)
        {
            case 1:
            {
                int casasTorre = 5;
                printf("Movimento da TORRE (5 casas para a Direita):\n");
                for (int i = 1; i <= casasTorre; i++) {
                    printf("Direita\n");
                }
                printf("\n");

                puts("Deseja continuar? \n");
                puts("(1) Voltar para o menu principal: ");
                puts("(2) Finalizar o programa: ");
                scanf("%d", &sub_menu);


                if (sub_menu == 1) {
                    menu = 0;
                }
                break;
            }

            case 2:
            {
                int casasBispo = 5;
                int i = 1;
                printf("Movimento do BISPO (5 casas na diagonal Cima Direita):\n");
                while (i <= casasBispo) {
                    printf("Cima Direita\n");
                    i++;
                }
                printf("\n");

                puts("Deseja continuar? \n");
                puts("(1) Voltar para o menu principal: ");
                puts("(2) Finalizar o programa: ");
                scanf("%d", &sub_menu);

                if (sub_menu == 1) {
                    menu = 0;
                }
                break;
            }

            case 3:
            {
                int casasRainha = 8;
                int j = 1;
                printf("Movimento da RAINHA (8 casas para a Esquerda):\n");
                do {
                    printf("Esquerda\n");
                    j++;
                } while (j <= casasRainha);
                printf("\n");

                puts("Deseja continuar? \n");
                puts("(1) Voltar para o menu principal: ");
                puts("(2) Finalizar o programa: ");
                scanf("%d", &sub_menu);

                if (sub_menu == 1) {
                    menu = 0;
                }
                break;
            }

            case 4:
            {
                int casasCavalo = 3 ; 
                int selecao;

                while (casasCavalo != 1)
                {
                    printf("\nEscolha o Movimento do CAVALO:\n(1) para a direita ou (2) para esquerda): ");
                    scanf("%d", &selecao);

                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cima \n");    
                        casasCavalo--;
                    }

                    if (selecao == 1) {
                        printf("Direita\n");
                    } else {
                        printf("Esquerda\n");
                    }

                    printf("\n");

                    puts("Deseja continuar? \n");
                    puts("(1) Voltar para o menu principal: ");
                    puts("(2) Finalizar o programa: ");
                    scanf("%d", &sub_menu);

                    if (sub_menu == 1) {
                        menu = 0;
                    }

                    break;
                }
                break;
            }

            default:
                printf("\nOpção incorreta! selecione novamente \n");
                menu = 0;
                break;
        }

    } while (menu == 0);

    return 0; 
}
