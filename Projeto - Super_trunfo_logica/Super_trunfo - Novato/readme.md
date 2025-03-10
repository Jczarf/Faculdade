# 🃏 Super Trunfo - Nível Novato

## 📌 Descrição do Desafio
Neste nível, você irá implementar a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora com base em um único atributo numérico. Esta etapa é uma continuação do desafio anterior, onde as cartas já foram cadastradas com suas respectivas informações.

---

## 🎯 O que será implementado

✅ **Recebimento de dados de duas cartas**: As cartas conterão os seguintes atributos:
- Estado (string)
- Código da carta (string)
- Nome da cidade (string)
- População (int)
- Área (float)
- PIB (float)
- Número de pontos turísticos (int)

✅ **Cálculo automático de atributos derivados**:
- Densidade Populacional = População / Área
- PIB per capita = PIB / População

✅ **Comparação de Atributos**:
- A comparação será feita com base em **um único atributo numérico** definido diretamente no código.
- Para todos os atributos, exceto Densidade Populacional, vence o maior valor.
- Para Densidade Populacional, vence o menor valor.

✅ **Exibição do Resultado**:
- O programa imprimirá o nome das cidades comparadas, o atributo utilizado e os valores de cada uma.
- Exibirá a cidade vencedora ou informará se houve empate.

---

## 📜 Regras do Jogo

| Atributo Comparável     | Regra de Comparação |
|-------------------------|--------------------|
| População              | Maior vence |
| Área                   | Maior vence |
| PIB                    | Maior vence |
| PIB per capita         | Maior vence |
| Densidade Populacional | **Menor vence** |

---

## 💻 Exemplo de Execução

```bash
Comparação de cartas (Atributo: PIB per capita):

🏙️ Carta 1 - Curitiba (PR): 42.000
🏙️ Carta 2 - Porto Alegre (RS): 38.000

🏆 Resultado: Carta 1 (Curitiba) venceu!
```

Caso os valores sejam iguais:
```bash
Comparação de cartas (Atributo: População):

🏙️ Carta 1 - Salvador (BA): 2.900.000
🏙️ Carta 2 - Fortaleza (CE): 2.900.000

⚖️ Resultado: Empate!
```

---

## 🛠 Tecnologias Utilizadas
- Linguagem: **C**
- Estruturas de decisão: `if`, `if-else`
- Operações matemáticas básicas
- Impressão formatada no terminal

---

### 📌 Estrutura Geral

O código solicita ao usuário que insira dados de duas cartas e, em seguida, exibe esses dados no terminal. Além disso, ele calcula a densidade populacional e o PIB per capita de cada cidade, permitindo a comparação entre as cartas. Por fim, ele calcula o super poder de cada carta, que é uma métrica composta por vários atributos.

## 📜 Explicação do Código

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
    Aluno: Júlio Cézar Freitas De Oliveira
    Desafio de código: Super Trunfo Lógica- Novato.
*/

```
### 4️⃣ Declaração de Variáveis

``` C
    // ** Declaração de variáveis **
    char estado_1, estado_2; // Estados das cartas (A-H)
    char codigo_carta_1[5], codigo_carta_2[5]; // Códigos das cartas (até 4 caracteres)
    char nome_cidade_1[18], nome_cidade_2[18]; // Nomes das cidades (até 17 caracteres)
    unsigned long int qtd_populacao_1, qtd_populacao_2; // População das cidades
    float area_km_1, area_km_2; // Área das cidades em km²
    float pib_carta_1, pib_carta_2; // PIB das cidades em bilhões de reais
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2; // Pontos turísticos das cidades
    
    // ** Variaveis para calculos **
    float pib_capita_carta_1, pib_capita_carta_2; // PIB per capita das cartas
    float densidade_carta_1, densidade_carta_2; // Densidade populacional das cartas
    float super_poder_carta_1, super_poder_carta_2; // Super poder das cartas
    
    // ** Variaveis para conversões **
    const float casting_bilhao = 1000000000; // Constante para conversão de bilhões para unidades
    const char validacao[30] = "Cadastro com sucesso!"; // Mensagem de validação
    // ** Variaveis para estilo **
    const char estilo [50] = "\n+--------------------------------------+\n" ;    

```

Essas variáveis armazenam informações das cartas, como estado, código, nome da cidade, população, área, PIB e número de pontos turísticos, e os cálculos das variáveis para os resultados das questões.

### 5️⃣ Entrada de Dados para a Carta 1

``` C
    Carta 1 :     
    printf("%s",estilo) ;

    printf("\nCarta 1:\n");
    
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da primeira carta: ");
    scanf(" %s", codigo_carta_1);

    printf("Digite o nome da primeira cidade: ");
    scanf(" %17[^\n]", nome_cidade_1);

    printf("Digite a quantidade da população da primeira carta: ");
    scanf("%ld", &qtd_populacao_1);

    printf("Digite a área em km2 da primeira carta: ");
    scanf("%f", &area_km_1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib_carta_1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &qtd_pontos_turisticos_1);

    printf("%s\n", validacao);
    
```
Cada scanf recebe um dado do usuário e armazena na variável correspondente.
scanf(" %17[^\n]", nome_cidade_1); → Lê até 17 caracteres, sendo escolhido o valor 18 pois o maior estado em 17 letras + 1 do caractere nulo, permitindo espaços.
Após inserir os dados, exibe "Cadastro com sucesso!".


### 6️⃣ Entrada de Dados para a Carta 2

``` C
 
    printf("%s", estilo);
    
    printf("\nCarta 2:\n")
    
    printf("Digite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado_2)
    
    printf("Digite o código da segunda carta: ");
    scanf(" %s", codigo_carta_2)
    
    printf("Digite o nome da segunda cidade: ");
    scanf(" %17[^\n]", nome_cidade_2)
    
    printf("Digite a quantidade da população da segunda carta: ");
    scanf("%ld", &qtd_populacao_2)
    
    printf("Digite a área em km2 da segunda carta: ");
    scanf("%f", &area_km_2)
    
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib_carta_2)
    
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &qtd_pontos_turisticos_2)
    
    printf("%s\n", validacao);

```

### 7️⃣ Área de calculos 

``` C

// **Cálculo da densidade populacional** 

densidade_carta_1 = qtd_populacao_1 / area_km_1 ; 

densidade_carta_2 = qtd_populacao_2 / area_km_2 ;

// **Cálculo do PIB per capita** 

pib_capita_carta_1 = (pib_carta_1 * casting_bilhao) / qtd_populacao_1 ;

pib_capita_carta_2 = (pib_carta_2 * casting_bilhao) / qtd_populacao_2 ;

// **Cálculo do super poder da carta**

super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1) - densidade_carta_1;

super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2 + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2) - densidade_carta_2;


```

### 8️⃣ Saída dos Dados (Exibição no Terminal)

``` C 
// Saída para o usuário, cartas cadastradas

// Estilo de linha para melhorar a visualização

// Primeira carta:

printf("%s", estilo);

printf("| Carta 1:                             \n");
printf("| Estado: %c                            \n", estado_1);
printf("| Código: %s                           \n", codigo_carta_1);
printf("| Nome da cidade: %s                  \n", nome_cidade_1);
printf("| População: %lu                       \n", qtd_populacao_1);
printf("| Área: %.2f km2                       \n", area_km_1);
printf("| PIB: R$ %.2f bilhões de reais        \n", pib_carta_1);
printf("| Número de pontos turísticos: %d      \n", qtd_pontos_turisticos_1);
printf("| Densidade Populacional: %.2f hab/km2 \n", densidade_carta_1);
printf("| PIB per capita: R$ %.2f             \n", pib_capita_carta_1);
printf("| Super poder: %.2f                     \n", super_poder_carta_1);
printf("%s", estilo);



// Segunda carta:
            
printf("%s", estilo);
printf("| Carta 2:                             \n");
printf("| Estado: %c                            \n", estado_2);
printf("| Código: %s                           \n", codigo_carta_2);
printf("| Nome da cidade: %s                  \n", nome_cidade_2);
printf("| População: %lu                      \n", qtd_populacao_2);
printf("| Área: %.2f km2                       \n", area_km_2);
printf("| PIB: R$ %.2f bilhões de reais        \n", pib_carta_2);
printf("| Número de pontos turísticos: %d      \n", qtd_pontos_turisticos_2);
printf("| Densidade Populacional: %.2f hab/km2 \n", densidade_carta_2);
printf("| PIB per capita: R$ %.2f             \n", pib_capita_carta_2);
printf("| Super poder: %.2f                   \n", super_poder_carta_2);
printf("%s",estilo);


```

### 9️⃣ Comparações das Cartas

``` C
// Comparações das cartas

printf("%s",estilo);
printf("\n| Atributo usado: (Quantidade populacional) \n");
printf("| Carta 1: %-20s %lu habitantes\n", nome_cidade_1, qtd_populacao_1);
printf("| Carta 2: %-20s %lu habitantes\n", nome_cidade_2, qtd_populacao_2);

if (qtd_populacao_1 > qtd_populacao_2) {
    printf("| Vencedor: %s\n", nome_cidade_1);
            
} else if (qtd_populacao_1 < qtd_populacao_2) {
    printf("| Vencedor: %s\n", nome_cidade_2);
}  
printf("%s", estilo);

```

###  Retorno da Função

```c

return 0;

```
Indica que o programa foi executado com sucesso.


## 🤝 Contribuição

Este repositório é de uso acadêmico, mas estou aberto a sugestões e melhorias. Caso tenha alguma dúvida ou sugestão, entre em contato!

📧 **E-mail para contato:** [Jczarf.oliveira@gmail.com](mailto\:Jczarf.oliveira@gmail.com)

---

📅 **Atualizado em:** 10/03/2025 📌 **Desenvolvido por:** Júlio Cézar