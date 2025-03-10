
# 🃏 Super Trunfo - Nível Aventureiro

## 📌 Descrição do Desafio
Neste nível, você irá aprimorar o seu Super Trunfo, adicionando interação com o usuário e uma lógica de comparação mais complexa. O objetivo é permitir que o jogador escolha um atributo para comparar duas cartas de países, utilizando um menu interativo e estruturas condicionais para determinar o vencedor.

---

## 🎯 O que será implementado

✅ **Menu Interativo**: O jogador poderá escolher o atributo de comparação usando a estrutura `switch`.<br>
✅ **Comparação de Atributos**: Implementação da lógica de comparação entre duas cartas com base no atributo escolhido.<br>
✅ **Regras de Comparação**:
- O país com o maior valor no atributo escolhido vence.
- Exceção: Para *Densidade Demográfica*, o país com o menor valor vence.
✅ **Exibição do Resultado**: Exibir de forma clara os nomes dos países, o atributo utilizado, os valores e o resultado final.<br>
✅ **Tratamento de Entrada Inválida**: Implementação de um `default` no `switch` para lidar com escolhas inválidas.<br>

---

## 📜 Regras do Jogo

1️⃣ O jogador escolhe um atributo para a comparação entre duas cartas.
2️⃣ O sistema compara os valores e determina o vencedor seguindo as regras definidas.
3️⃣ O resultado é exibido de maneira intuitiva, mostrando os valores e a carta vencedora.
4️⃣ Caso os valores sejam iguais, o jogo exibe a mensagem **"Empate!"**.

### 🏆 Atributos Comparáveis

| Atributo                | Tipo    | Regra de Comparação |
|-------------------------|--------|--------------------|
| Nome do país           | String | Apenas exibido |
| População              | Int    | Maior vence |
| Área                   | Float  | Maior vence |
| PIB                    | Float  | Maior vence |
| Pontos Turísticos      | Int    | Maior vence |
| Densidade Demográfica  | Float  | **Menor vence** |

---

## 💻 Exemplo de Execução

```bash
Bem-vindo ao Super Trunfo Lógica - Nível Aventureiro!
Escolha um atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica

Escolha: 2

Comparando a Área...

🇧🇷 Brasil - Área: 8.515.767 km²
🇫🇷 França - Área: 643.801 km²

🏆 O vencedor é: Brasil!
```

Caso os valores sejam iguais:
```bash
Comparando a População...

🇩🇪 Alemanha - População: 83.000.000
🇬🇧 Reino Unido - População: 83.000.000

⚖️ Empate!
```

---

## 🛠 Tecnologias Utilizadas
- Linguagem: **C**
- Estruturas de controle: `switch`, `if-else`
- Manipulação de entrada do usuário


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
    Desafio de código: Super Trunfo Lógica- Aventura.
*/

```
### 4️⃣ Declaração de Variáveis

``` C
        char nome_pais_1[18], nome_pais_2[18]; // Nome dos países (até 17 caracteres)
    char codigo_carta_1[5], codigo_carta_2[5]; // Código das cartas (até 4 caracteres)
    unsigned long int qtd_populacao_1, qtd_populacao_2; // População dos países
    float area_km_1, area_km_2; // Área em km²
    float pib_carta_1, pib_carta_2; // PIB em bilhões de reais
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2; // Pontos turísticos

    // **Variaveis para estilo**
    const char estilo [50] = "\n+--------------------------------------+\n" ;

    // **Variáveis para cálculos**
    float densidade_carta_1, densidade_carta_2; // Densidade populacional (hab/km²)
    float pib_capita_carta_1, pib_capita_carta_2; // PIB per capita (PIB/população)
    float super_poder_carta_1, super_poder_carta_2; // Super poder da carta

    const float casting_bilhao = 1000000000.0; // Conversão de PIB para unidades
    const char validacao[30] = "Cadastro com sucesso!"; // Mensagem de validação

    int batalha; // Opção de batalha escolhida pelo usuário

```

Essas variáveis armazenam informações das cartas, como estado, código, nome da cidade, população, área, PIB e número de pontos turísticos, e os cálculos das variáveis para os resultados das questões e as comparações. Usando o menu switch.

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
 
// **Entrada de Dados - Carta 1**
printf("%s",estilo);
printf("Carta 1:\n");
printf("\nDigite o nome do país: ");
scanf(" %17[^\n]", nome_pais_1);
printf("Digite o código da primeira carta: ");
scanf(" %s", codigo_carta_1);
printf("Digite a quantidade da população da primeira carta: ");
scanf("%lu", &qtd_populacao_1);
printf("Digite a área em km² da primeira carta: ");
scanf("%f", &area_km_1);
printf("Digite o PIB da primeira carta (em bilhões): ");
scanf("%f", &pib_carta_1);
printf("Digite o número de pontos turísticos da primeira carta: ");
scanf("%d", &qtd_pontos_turisticos_1);
printf("%s\n", validacao);

// **Entrada de Dados - Carta 2**
printf("%s",estilo);
printf("\nCarta 2:\n");
printf("\nDigite o nome do país: ");
scanf(" %17[^\n]", nome_pais_2);
printf("Digite o código da segunda carta: ");
scanf(" %s", codigo_carta_2);
printf("Digite a quantidade da população da segunda carta: ");
scanf("%lu", &qtd_populacao_2);
printf("Digite a área em km² da segunda carta: ");
scanf("%f", &area_km_2);
printf("Digite o PIB da segunda carta (em bilhões): ");
scanf("%f", &pib_carta_2);
printf("Digite o número de pontos turísticos da segunda carta: ");
scanf("%d", &qtd_pontos_turisticos_2);
printf("%s\n", validacao);

```

### 7️⃣ Área de calculos 

``` C

// **Cálculo da densidade populacional**
densidade_carta_1 = qtd_populacao_1 / area_km_1;
densidade_carta_2 = qtd_populacao_2 / area_km_2;

// **Cálculo do PIB per capita**
pib_capita_carta_1 = (pib_carta_1 * casting_bilhao) / qtd_populacao_1;
pib_capita_carta_2 = (pib_carta_2 * casting_bilhao) / qtd_populacao_2;

// **Cálculo do super poder da carta**
super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1) - densidade_carta_1;
super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2 + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2) - densidade_carta_2;


```

### 8️⃣ Saída dos Dados (Exibição no Terminal)

``` C 

// **Exibição das cartas cadastradas**

printf("%s",estilo);

printf("| Carta 1:                             \n");
printf("| País: %s                             \n", nome_pais_1);
printf("| Código: %s                           \n", codigo_carta_1);
printf("| População: %lu                       \n", qtd_populacao_1);
printf("| Área: %.2f km²                       \n", area_km_1);
printf("| PIB: R$ %.2f bilhões                  \n", pib_carta_1);
printf("| Pontos turísticos: %d                 \n", qtd_pontos_turisticos_1);
printf("| Densidade Populacional: %.2f hab/km²  \n", densidade_carta_1);
printf("| PIB per capita: R$ %.2f               \n", pib_capita_carta_1);
printf("| Super poder: %.2f                     \n", super_poder_carta_1);

printf("%s", estilo);

// **Repetição para a carta 2**

printf("%s",estilo);

printf("| Carta 2:                             \n");
printf("| País: %s                             \n", nome_pais_2);
printf("| Código: %s                           \n", codigo_carta_2);
printf("| População: %lu                       \n", qtd_populacao_2);
printf("| Área: %.2f km²                       \n", area_km_2);
printf("| PIB: R$ %.2f bilhões                  \n", pib_carta_2);
printf("| Pontos turísticos: %d                 \n", qtd_pontos_turisticos_2);
printf("| Densidade Populacional: %.2f hab/km²  \n", densidade_carta_2);
printf("| PIB per capita: R$ %.2f               \n", pib_capita_carta_2);
printf("| Super poder: %.2f                     \n", super_poder_carta_2);

printf("%s", estilo);

```

### 9️⃣ Comparações das Cartas

``` C
// **Comparação entre as cartas**
    
printf("%s",estilo);

printf("\nEscolha um atributo para comparar:");
printf("\n(1) População");
printf("\n(2) Área");
printf("\n(3) PIB");
printf("\n(4) Pontos turísticos");
printf("\n(5) Densidade populacional\n");
printf("\nDigite sua escolha: ");
scanf("%d", &batalha);

printf("%s",estilo);    

```

### Menu Switch 

``` C

// **Lógica para comparar os atributos selecionados**
     
     switch (batalha) {
     case 1:
         
         printf("%s",estilo);           
         printf("| Nome do país: \n");
         printf("| Carta 1: %s\n", nome_pais_1);
         printf("| Carta 2: %s\n", nome_pais_2);
         printf("%s",estilo);            
         break;
     
     case 2:
        
         printf("%s",estilo);
         printf("\n| Atributo usado: (Quantidade populacional) \n");
         printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
         printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);
         if (qtd_populacao_1 > qtd_populacao_2)
             printf("| Vencedor: %s\n", nome_pais_1);
         else if (qtd_populacao_1 < qtd_populacao_2)
             printf("| Vencedor: %s\n", nome_pais_2);
         else if (qtd_populacao_1 == qtd_populacao_2) {
             printf("| Empate!\n");
         }
         printf("%s",estilo);            
         break;
     
     case 3:
         
         printf("%s",estilo);            
         printf("\n| Atributo usado: (Área em km²) \n");
         printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
         printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);
         if (area_km_1 > area_km_2)
             printf("| Vencedor: %s\n", nome_pais_1);
         else if (area_km_1 < area_km_2)
             printf("| Vencedor: %s\n", nome_pais_2);
         else if (area_km_1 == area_km_2) {
             printf("| Empate!\n");
         }
         printf("%s",estilo);            
         break;
     
     case 4:
         
         printf("%s",estilo);            
         printf("\n| Atributo usado: (PIB do país) \n");
         printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
         printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);
         if (pib_carta_1 > pib_carta_2)
             printf("| Vencedor: %s\n", nome_pais_1);
         else if (pib_carta_1 < pib_carta_2)
             printf("| Vencedor: %s\n", nome_pais_2);
         else if (pib_carta_1 == pib_carta_2) {
             printf("| Empate!\n");
         }
         printf("%s",estilo);           
         break;
     
     case 5:
         
         printf("%s",estilo);            
         printf("\n| Atributo usado: (Número de pontos turísticos) \n");
         printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
         printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);
         if (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2)
             printf("| Vencedor: %s\n", nome_pais_1);
         else if (qtd_pontos_turisticos_1 < qtd_pontos_turisticos_2)
             printf("| Vencedor: %s\n", nome_pais_2);
         else if (qtd_pontos_turisticos_1 == qtd_pontos_turisticos_2) {
             printf("| Empate!\n");
         }
         printf("%s",estilo);            
         break;
     
     case 6:
         
         printf("%s",estilo);            
         printf("\n| Atributo usado: (Densidade populacional) \n");
         printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
         printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);
         if (densidade_carta_1 < densidade_carta_2)
             printf("| Vencedor: %s\n", nome_pais_1);
         else if (densidade_carta_1 > densidade_carta_2)
             printf("| Vencedor: %s\n", nome_pais_2);
         else if (densidade_carta_1 == densidade_carta_2){
             printf("| Empate!\n");
         }
         printf("%s",estilo);            
         break;
     
     default:
         printf("%s",estilo);            
         printf("| Opção inválida! Escolha um número entre 1 e 6.\n");
         printf("%s",estilo);            
         
 }

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