# ♟️ Simulador de Movimentos de Peças de Xadrez - Nível Iniciante

## 📌 Descrição do Desafio

Neste projeto, simulei o movimento das peças de xadrez: **Torre**, **Bispo** e **Rainha**, utilizando estruturas de repetição em **C**. O objetivo é imprimir no console os movimentos de cada peça de forma didática, aplicando as estruturas `for`, `while` e `do-while`.

---

## 🎯 O que foi implementado

✅ Simulação do movimento da **Torre** (5 casas para a direita) com `for`  
✅ Simulação do movimento do **Bispo** (5 casas na diagonal cima-direita) com `while`  
✅ Simulação do movimento da **Rainha** (8 casas para a esquerda) com `do-while`  
✅ Impressão clara no console da direção de cada movimento.

---

## 🧠 Regras de Movimento

| Peça   | Direção                              | Estrutura usada |
|--------|---------------------------------------|------------------|
| Torre  | Horizontal (direita)                 | `for`            |
| Bispo  | Diagonal (cima e direita)            | `while`          |
| Rainha | Todas direções (simula: esquerda)    | `do-while`       |

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

## 🛠 Tecnologias Utilizadas

* Linguagem: C

* Estruturas: for, while, do-while

* Terminal para entrada e saída

* Impressão com printf

---

## 🤝 Contribuição

Este projeto é de cunho acadêmico, mas sugestões são bem-vindas! Se desejar colaborar com melhorias ou tirar dúvidas, entre em contato:

📧 E-mail: Jczarf.oliveira@gmail.com

📅 Atualizado em: 13/05/2025
📌 Desenvolvido por: Júlio Cézar Freitas de Oliveira