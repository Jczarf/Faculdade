# 🃏 Super Trunfo - Nível Novato

## 📌 Descrição do Desafio
Neste primeiro nível, você irá construir a base do nosso jogo **Super Trunfo de Países**. O objetivo é criar um programa que permita ao usuário cadastrar as cartas, inserindo informações sobre diferentes cidades.

---

## 🎯 O que será implementado

✅ **Entrada de Dados**: O usuário poderá inserir as informações de duas cartas.
✅ **Armazenamento das informações**: Os dados serão armazenados em variáveis apropriadas.
✅ **Exibição das Cartas**: O programa imprimirá os dados de cada carta de forma organizada e legível.


### 🔹 Atributos das Cartas
Cada carta conterá os seguintes atributos:

| Atributo                  | Tipo   | Descrição |
|---------------------------|--------|-----------|
| Estado                    | Char   | Uma letra de 'A' a 'H' representando um estado |
| Código da Carta           | String | A letra do estado seguida de um número (ex: A01, B03) |
| Nome da Cidade            | String | Nome da cidade |
| População                 | Int    | Número de habitantes |
| Área (km²)                | Float  | Área da cidade |
| PIB (bilhões de reais)    | Float  | Produto Interno Bruto |
| Número de Pontos Turísticos | Int    | Quantidade de pontos turísticos |

---

## 📜 Exemplo de Execução

```bash
🃏 Bem-vindo ao Super Trunfo de Países!

🔹 Insira os dados da primeira carta:
Estado: A
Código da Carta: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11
PIB: 699.28
Número de Pontos Turísticos: 50

🔹 Insira os dados da segunda carta:
Estado: B
Código da Carta: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25
PIB: 300.50
Número de Pontos Turísticos: 30

📜 Cartas cadastradas:

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
```

---

## 🛠 Tecnologias Utilizadas
- Linguagem: **C**
- Estruturas de entrada: `scanf` para capturar dados do usuário.
- Armazenamento de strings e números em variáveis adequadas.
- Impressão formatada no terminal com `printf`.

---

## 📜 Explicação do Código

### 📌 Estrutura Geral

O código solicita ao usuário que insira dados de duas cartas e, em seguida, exibe esses dados no terminal.

### 1️⃣ Inclusão Biblioteca 

```c

    #include <stdio.h>

```
Inclui a biblioteca padrão do C para entrada e saída de dados (printf, scanf etc.).



### 2️⃣ Função Principal

```c

    int main () {

```
Inicia a função main(), onde o programa será executado.


### 3️⃣ Comentário com Informações do Autor

```c 

    /*
    Aluno : Júlio Cézar Freitas De Oliveira
    Desafio de código : Super Trunfo - Iniciante.
    */

```
### 4️⃣ Declaração de Variáveis


``` C
    Declaração das variáveis para armazenar informações das cartas.
    char estado_1, estado_2; → Armazena o estado da cidade da carta.
    char codigo_carta_1[5], codigo_carta_2[5]; → Código identificador da carta.
    char nome_cidade_1[18], nome_cidade_2[18]; → Nome da cidade.
    int qtd_populacao_1, qtd_populacao_2; → População da cidade.
    float area_km_1, area_km_2; → Área em km² da cidade.
    float pib_carta_1, pib_carta_2; → PIB da cidade.
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2; → Número de pontos turísticos.
    const char validacao[30] = "Cadastro com sucesso!"; → Mensagem fixa exibida após cada cadastro.

```C
    
    printf("%s", estilo);
    
    printf("\nCarta 1:");
    
    printf("\nDigite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo_carta_1);

    printf("Digite o nome da primeira cidade: ");
    scanf(" %18[^\n]", nome_cidade_1);

    printf("Digite a quantidade da população da primeira carta: ");
    scanf("%d", &qtd_populacao_1);

    printf("Digite a área em km2 da primeira carta: ");
    scanf("%f", &area_km_1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib_carta_1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &qtd_pontos_turisticos_1);

    printf("\n%s\n", validacao);
    
    // Carta 2:

    printf("%s", estilo);

    printf("\nCarta 2:\n");

    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo_carta_2);

    printf("Digite o nome da segunda cidade: ");
    scanf(" %18[^\n]", nome_cidade_2);

    printf("Digite a quantidade da população da segunda carta: ");
    scanf("%d", &qtd_populacao_2);

    printf("Digite a área em km2 da segunda carta: ");
    scanf("%f", &area_km_2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib_carta_2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &qtd_pontos_turisticos_2);

    printf("\n%s\n", validacao);

```

Cada scanf recebe um dado do usuário e armazena na variável correspondente.
scanf(" %18[^\n]", nome_cidade_1); → Lê até 18 caracteres, sendo escolhido o valor 18 pois o maior estado em 17 letras + 1 do caractere nulo, permitindo espaços.
Após inserir os dados, exibe "Cadastro com sucesso!".


### 6️⃣ Saída dos Dados (Exibição no Terminal)

``` C

    // Primeira carta:
    
    printf("%s", estilo);
    printf("| Carta 1:                              \n");
    printf("| Estado: %c                            \n", estado_1);
    printf("| Código: %s                            \n", codigo_carta_1);
    printf("| Nome da cidade: %s                    \n", nome_cidade_1);
    printf("| População: %d                         \n", qtd_populacao_1);
    printf("| Área: %.2f km2                        \n", area_km_1);
    printf("| PIB: R$ %.2f bilhões                  \n", pib_carta_1);
    printf("| Pontos turísticos: %d                 \n", qtd_pontos_turisticos_1);
    printf("%s", estilo);
    

    // Segunda carta:
    printf("%s", estilo);
    printf("| Carta 2:                             \n");
    printf("| Estado: %c                           \n", estado_2);
    printf("| Código: %s                           \n", codigo_carta_2);
    printf("| Nome da cidade: %s                   \n", nome_cidade_2);
    printf("| População: %d                        \n", qtd_populacao_2);
    printf("| Área: %.2f km2                       \n", area_km_2);
    printf("| PIB: R$ %.2f bilhões                 \n", pib_carta_2);
    printf("| Pontos turísticos: %d                \n", qtd_pontos_turisticos_2);
    printf("%s", estilo);

```
### 8️⃣ Retorno da Função

```c

    return 0;

```
Indica que o programa foi executado com sucesso.


## 🤝 Contribuição

Este repositório é de uso acadêmico, mas estou aberto a sugestões e melhorias. Caso tenha alguma dúvida ou sugestão, entre em contato!

📧 **E-mail para contato:** [Jczarf.oliveira@gmail.com](mailto\:Jczarf.oliveira@gmail.com)

---

📅 **Atualizado em:** 10/03/2025 📌 **Desenvolvido por:** Júlio Cézar


