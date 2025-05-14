# ♟️ Simulador de Movimentos de Peças de Xadrez - Nível Aventureiro

## 📌 Descrição do Desafio

Neste projeto, simulei o movimento das peças de xadrez: **Torre**, **Bispo**, **Rainha** , **Cavalo** utilizando estruturas de repetição em **C**. O objetivo é imprimir no console os movimentos de cada peça de forma didática, aplicando as estruturas `for`, `while`, `do-while` e usar também a combinação com estruturas alinhadas.

---

## 🎯 O que foi implementado

✅ Simulação do movimento da **Torre** (5 casas para a direita) com `for`  
✅ Simulação do movimento do **Bispo** (5 casas na diagonal cima-direita) com `while`  
✅ Simulação do movimento da **Rainha** (8 casas para a esquerda) com `do-while`  
✅ Simulação do movimento do **Cavalo** (2 casas para cima e escolha do usuario e qual direção ele pode ir, direita ou esquerda) com `while` e `For`, estrutura alinhada.   
✅ Criação do menu interativo com usuario, usando **Switch** com `do-while` para verificação das etapas. 

✅ Impressão clara no console da direção de cada movimento.
✅ Menu interativo completo, 100% funcional.


---

## 🧠 Regras de Movimento

| Peça   | Direção                              | Estrutura usada |
|--------|---------------------------------------|------------------|
| Torre  | Horizontal (direita)                 | `for`            |
| Bispo  | Diagonal (cima e direita)            | `while`          |
| Rainha | Todas direções (simula: esquerda)    | `do-while`       |
| Cavalo | Movimento em "L" (simula: esquerda ou direita)    | `while` e `FOR`      |

---

## 🖥️ Exemplo de Execução

```bash
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo:
Cima 
Cima 
Direita ou Esquerda.

```
### 📜 Explicação do Código

#### 1️⃣ Inclusão da Biblioteca

```c
#include <stdio.h>

/* Usada para entrada e saída de dados com printf.*/
```
---

#### 2️⃣ Função Principal

```c
int main() {

*/Função principal onde o programa é executado.*/
```

#### 3️⃣ Lógica das Estruturas
🔹 Torre (5 casas para a Direita)
```c
for (int i = 0; i < 5; i++) {
    printf("Direita\n");
}
🔹 Bispo (5 casas Diagonal - Cima Direita)

```

```c
int j = 0;
while (j < 5) {
    printf("Cima Direita\n");
    j++;
}
🔹 Rainha (8 casas para a Esquerda)
```

```c
int k = 0;
do {
    printf("Esquerda\n");
    k++;
} while (k < 8);

```
```c
    int casasCavalo = 3 ; 
    int selecao;

    while (casasCavalo != 1)
    {
    printf("\nEscolha o Movimento do CAVALO:\n(1) para a direita ou (2) para esquerda):");
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

```
#### Menu interativo usando switch case. 

```c

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


```


## 🛠 Tecnologias Utilizadas

* Linguagem: C

* Estruturas: for, while, do-while

* Estruturas de decisão: if, else

* Menu interativo usando switch

* Terminal para entrada e saída

* Impressão com printf

---

## 🤝 Contribuição

Este projeto é de cunho acadêmico, mas sugestões são bem-vindas! Se desejar colaborar com melhorias ou tirar dúvidas, entre em contato:

📧 E-mail: Jczarf.oliveira@gmail.com

📅 Atualizado em: 13/05/2025
📌 Desenvolvido por: Júlio Cézar Freitas de Oliveira