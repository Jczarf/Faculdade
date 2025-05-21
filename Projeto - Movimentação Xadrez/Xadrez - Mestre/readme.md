# ♟️ Simulador de Movimentos de Peças de Xadrez - Nível Mestre

## 📌 Descrição do Desafio

Neste projeto, simulo os movimentos das peças de xadrez: **Torre**, **Bispo**, **Rainha** e **Cavalo**, aplicando estruturas de repetição e recursão na linguagem **C**. O programa exibe um menu interativo que permite ao usuário escolher a peça para visualizar seus movimentos simulados de maneira didática no console.

---

## 🎯 O que foi implementado

- **Menu interativo** para seleção da peça de xadrez  
- Movimentos simulados para as peças:  
  - **Torre**: movimento para a direita utilizando recursão  
  - **Bispo**: movimento na diagonal para cima-direita utilizando loops aninhados (`for`)  
  - **Rainha**: movimento para a esquerda utilizando recursão  
  - **Cavalo**: movimento em “L” (2 casas para cima e 1 para a direita) utilizando loops aninhados (`for`)  
- Impressão clara e formatada no console, mostrando direção e contagem de movimentos  
- Validação de entrada para garantir opção válida  

---

## 🧠 Regras de Movimento e Estruturas Usadas

| Peça   | Direção                           | Estrutura usada     |
|--------|----------------------------------|---------------------|
| Torre  | Horizontal (Direita)              | Recursão            |
| Bispo  | Diagonal (Cima Direita)           | Loops aninhados `for`|
| Rainha | Horizontal (Esquerda)             | Recursão            |
| Cavalo | Movimento em "L" (2 cima, 1 direita)| Loops aninhados `for`|

---

## 🖥️ Exemplo de Execução

```bash
Simulação sistema de xadrez:
Peças disponíveis (selecione a opção):
(1) Torre
(2) Bispo
(3) Rainha
(4) Cavalo
1
Você selecionou Torre:
Direção: Direita Movimentos: 5
Direção: Direita Movimentos: 4
Direção: Direita Movimentos: 3
Direção: Direita Movimentos: 2
Direção: Direita Movimentos: 1

```


---

## 📜 Explicação do Código:

### 1️⃣ Inclusão da Biblioteca

```c
#include <stdio.h>  // Biblioteca para entrada e saída padrão (printf, scanf)
```
### 2️⃣ Menu Interativo
---
A função `func_menu()` exibe as opções disponíveis para o usuário escolher qual peça deseja simular.

### 3️⃣ Menu Interativo
---
- Torre (recursiva)
```c
void movimentoTorre(int x) {
    if (x > 0) {
        printf("Direção: Direita       Movimentos: %d\n", x);
        movimentoTorre(x - 1);
    }
}
```
- Bispo (Loops aninhados for)
```c
void movimentoBispo(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        for (int j = 1; j <= movimentos; j++) {
            if (i == j) {
                printf("Movimento %d: Linha %d, Coluna %d -> Direção: Diagonal (↗ Cima Direita)\n", i, i, j);
            }
        }
    }
}

```
- Rainha (Recursiva)
```c
void movimentoRainha(int x) {
    if (x > 0) {
        printf("Direção: Esquerda      Movimentos: %d\n", x);
        movimentoRainha(x - 1);
    }
}


```
- Cavalo (Loops aninhados for)
```c
void movimentoCavalo(int x) {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Direção: Cima         Movimentos: %d\n", x++);
        }
        for (int j = 0; j < 1; j++) {
            printf("Direção: Direita      Movimentos: %d\n", x);
        }
    }
}

```
### 4️⃣ Menu Interativo
---
O `main()` controla o fluxo, recebe a opção do usuário, chama as funções correspondentes e garante que o programa só prossiga com uma opção válida.

### 🛠 Tecnologias Utilizadas
---
- Linguagem: C

- Estruturas de controle: for, do-while, if-else, switch-case, recursão

- Entrada e saída pelo terminal (scanf, printf)
---

### 🤝 Contribuição
Projeto de caráter acadêmico e didático. Sugestões, dúvidas e contribuições são bem-vindas!

📧 Contato: Jczarf.oliveira@gmail.com
📅 Atualizado em: 21/05/2025
📌 Desenvolvido por: Júlio Cézar Freitas de Oliveira