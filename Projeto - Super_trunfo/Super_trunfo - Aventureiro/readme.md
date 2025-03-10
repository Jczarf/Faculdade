 # 🃏 Super Trunfo - Nível Aventureiro

## 📌 Descrição do Desafio
Neste nível, você irá aprimorar o sistema do **Super Trunfo de Países**, adicionando cálculos automáticos para **Densidade Populacional** e **PIB per Capita**. Esses novos atributos ajudarão a enriquecer a análise das cidades no jogo.

---

## 🎯 O que será implementado

✅ **Entrada de Dados**: O usuário poderá inserir os dados de duas cartas.
✅ **Armazenamento das Informações**: Os dados serão armazenados corretamente.
✅ **Cálculo Automático de Novos Atributos**:
   - **Densidade Populacional** = População / Área (habitantes por km²)
   - **PIB per Capita** = PIB / População (riqueza média por habitante)
✅ **Exibição Formatada**: O programa imprimirá os dados de cada cidade com os valores calculados, formatados com **duas casas decimais**.
✅ **Eficiência**: O programa realizará os cálculos de forma otimizada, garantindo uma boa performance.

### 🔹 Atributos das Cartas
Cada carta conterá os seguintes atributos:

| Atributo                   | Tipo   | Descrição |
|----------------------------|--------|-----------|
| Estado                     | Char   | Uma letra de 'A' a 'H' representando um estado |
| Código da Carta            | String | A letra do estado seguida de um número (ex: A01, B03) |
| Nome da Cidade             | String | Nome da cidade |
| População                  | Int    | Número de habitantes |
| Área (km²)                 | Float  | Área da cidade |
| PIB (bilhões de reais)     | Float  | Produto Interno Bruto |
| Número de Pontos Turísticos | Int    | Quantidade de pontos turísticos |
| **Densidade Populacional**  | Float  | População / Área |
| **PIB per Capita**          | Float  | PIB / População |

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
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais
```

---

## 🛠 Tecnologias Utilizadas
- Linguagem: **C**
- Estruturas de entrada: `scanf` para capturar dados do usuário.
- Operações matemáticas para cálculos de densidade populacional e PIB per capita.
- Impressão formatada no terminal com `printf`.

---
### 1️⃣ Inclusão Biblioteca 

```c

    #include <stdio.h>

```
Inclui a biblioteca padrão do C para entrada e saída de dados (printf, scanf etc.).



### 2️⃣ Função Principal

```c

    int main () {}

```
Inicia a função main(), onde o programa será executado.


### 3️⃣ Comentário com Informações do Autor

```c 

/*
    Aluno : Júlio Cézar Freitas De Oliveira
    Desafio de código : Super Trunfo - Aventureiro.
*/

```
### 4️⃣ Declaração de Variáveis

```c

    / **Declaração das variáveis**
    char estado_1, estado_2; // Estados das cartas (A-H)
    char codigo_carta_1[5], codigo_carta_2[5]; // Códigos das cartas (até 4 caracteres)
    char nome_cidade_1[18], nome_cidade_2[18]; // Nomes das cidades (até 17 caracteres)
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

```

Essas variáveis armazenam informações das cartas, como estado, código, nome da cidade, população, área, PIB e número de pontos turísticos, e os cálculos das variáveis para os resultados das questões.


### 5️⃣ Entrada de Dados para a Carta 1

``` C
    // Carta 1:

    printf("%s", estilo); 
    printf("Carta 1:\n");

    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da primeira carta: ");
    scanf(" %s", codigo_carta_1);

    printf("Digite o nome da primeira cidade: ");
    scanf(" %17[^\n]", nome_cidade_1);

    printf("Digite a quantidade da população da primeira carta: ");
    scanf("%d", &qtd_populacao_1);

    printf("Digite a área em km2 da primeira carta: ");
    scanf("%f", &area_km_1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib_carta_1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &qtd_pontos_turisticos_1);

    printf("%s\n", validacao);

    // Carta 2:
    
    printf("%s", estilo);
    printf("\nCarta 2:\n");

    printf("Digite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da segunda carta: ");
    scanf(" %s", codigo_carta_2);

    printf("Digite o nome da segunda cidade: ");
    scanf(" %17[^\n]", nome_cidade_2);

    printf("Digite a quantidade da população da segunda carta: ");
    scanf("%d", &qtd_populacao_2);

    printf("Digite a área em km2 da segunda carta: ");
    scanf("%f", &area_km_2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib_carta_2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &qtd_pontos_turisticos_2);

    printf("%s\n", validacao);

```
Cada scanf recebe um dado do usuário e armazena na variável correspondente.
scanf(" %18[^\n]", nome_cidade_1); → Lê até 18 caracteres, sendo escolhido o valor 18 pois o maior estado em 17 letras + 1 do caractere nulo, permitindo espaços.
Após inserir os dados, exibe "Cadastro com sucesso!".

### 6️⃣ Saída dos Dados (Exibição no Terminal)

``` C
    printf("%s",estilo);

    printf("| Carta 1:                              \n")  ;
    printf("| Estado: %c                            \n", estado_1);
    printf("| Código: %s                            \n", codigo_carta_1);
    printf("| Nome da cidade: %s                    \n", nome_cidade_1);
    printf("| População: %d                         \n", qtd_populacao_1);
    printf("| Área: %.2f km2                        \n", area_km_1);
    printf("| PIB: R$ %.2f bilhões de reais         \n", pib_carta_1);
    printf("| Número de pontos turísticos: %d       \n", qtd_pontos_turisticos_1);
    printf("| Densidade Populacional: %.2f hab/km2  \n", densidade_carta_1);
    printf("| PIB per capita: R$ %.2f               \n", pib_capita_carta_1);
    
    printf("%s", estilo); 

    // Segunda carta:
    
    printf("%s", estilo); 

    printf("| Carta 2:                              \n");
    printf("| Estado: %c                            \n", estado_2);
    printf("| Código: %s                            \n", codigo_carta_2);
    printf("| Nome da cidade: %s                    \n", nome_cidade_2);
    printf("| População: %d                         \n", qtd_populacao_2);
    printf("| Área: %.2f km2                        \n", area_km_2);
    printf("| PIB: R$ %.2f bilhões de reais         \n", pib_carta_2);
    printf("| Número de pontos turísticos: %d       \n", qtd_pontos_turisticos_2);
    printf("| Densidade Populacional: %.2f hab/km2  \n", densidade_carta_2);
    printf("| PIB per capita: R$ %.2f               \n", pib_capita_carta_2);
   
    printf("%s", estilo); 

```

### 8️⃣ Área de calculos : 

```c
   
    // Cálculos para cumprir os critérios do desafio 2

    // Calculo para densidade populacional 
    densidade_carta_1 = qtd_populacao_1 / area_km_1 ; 
    
    densidade_carta_2 = qtd_populacao_2 / area_km_2 ; 
    
    //Calculos para PIB per capita 
    pib_capita_carta_1 = (pib_carta_1 * casting_bilhao) / qtd_populacao_1 ;
    
    pib_capita_carta_2 = (pib_carta_2 * casting_bilhao) / qtd_populacao_2 ;

    //Calculo para o Super poder 
    super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1) - densidade_carta_1;

    super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2 + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2) - densidade_carta_2;


```

Indica que o programa foi executado com sucesso.

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
