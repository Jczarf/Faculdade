Super Trunfo - Mestre

   Bem-vindo ao repositório do projeto **Super Trunfo - Mestre**! Este projeto foi desenvolvido como parte das atividades acadêmicas da faculdade.
   ## 📌 Sobre o Projeto
   Este projeto é uma implementação básica do jogo **Super Trunfo**, onde os jogadores comparam atributos de cartas para determinar o vencedor. Ele inclui:
   - Implementação de lógica de comparação de cartas.
   - Estruturação básica de um jogo.
   - Interface simples via terminal.
   ## 📁 Estrutura do Repositório
   ```
   Faculdade/
    Projeto - Super_trunfo / 
    Super_Trunfo - Mestre /
    │-- super_trunfo_mestre.c  # Código-fonte principal
    │-- super_trunfo_mestre    # Arquivo executável (compilado)
    │-- README.md              # Documentação do projeto

   ```
   ## 🛠️ Tecnologias Utilizadas
   O projeto foi desenvolvido utilizando:
   - **Linguagem:** C
   - **Compilador:** GCC
   - **Ferramentas:** Git, VS Code
   ## 🚀 Como Executar o Projeto
   1. Clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/seu-repositorio.git
   ```
2. Navegue até a pasta do projeto:
   ```bash
   cd Super_Trunfo_Mestre
   ```
3. Compile o código:
   ```bash
    gcc super_trunfo_mestre.c -o super_trunfo_mestre
   ```
4. Execute o programa:
   ```bash
    ./super_trunfo_mestre
   ```

## 📜 Explicação do Código

### 📌 Estrutura Geral

O código solicita ao usuário que insira dados de duas cartas e, em seguida, exibe esses dados no terminal. Além disso, ele calcula a densidade populacional e o PIB per capita de cada cidade, permitindo a comparação entre as cartas. Por fim, ele calcula o super poder de cada carta, que é uma métrica composta por vários atributos.

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
    Desafio de código: Super Trunfo - Mestre.
*/

```
### 4️⃣ Declaração de Variáveis

```c

    const int qtd_cartas = 2; // Quantidade de cartas no jogo
    int identificador_carta, comparador; // Variáveis para comparações
    char estado_1, estado_2; // Estados das cartas (A-H)
    char codigo_carta_1[5], codigo_carta_2[5]; // Códigos das cartas (até 4 caracteres)
    char nome_cidade_1[18], nome_cidade_2[18]; // Nomes das cidades (até 17 caracteres)
    unsigned long int qtd_populacao_1, qtd_populacao_2; // População das cidades
    float area_km_1, area_km_2; // Área das cidades em km²
    float pib_carta_1, pib_carta_2; // PIB das cidades em bilhões de reais
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2; // Pontos turísticos das cidades
    float calc_densidade_populacional; // Variável para cálculo da densidade populacional
    float calc_pib_per_capita; // Variável para cálculo do PIB per capita
    float pib_capita_carta_1, pib_capita_carta_2; // PIB per capita das cartas
    float densidade_carta_1, densidade_carta_2; // Densidade populacional das cartas
    const float casting_bilhao = 1000000000; // Constante para conversão de bilhões para unidades
    const char validacao[30] = "Cadastro com sucesso!"; // Mensagem de validação

```

Essas variáveis armazenam informações das cartas, como estado, código, nome da cidade, população, área, PIB e número de pontos turísticos, e os cálculos das variáveis para os resultados das questões.

### 5️⃣ Entrada de Dados para a Carta 1

``` //Carta 1 :
    printf("Carta 1:\n");

    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo_carta_1);

    printf("Digite o nome da primeira cidade: ");
    scanf(" %18[^\n]", nome_cidade_1);

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
scanf(" %18[^\n]", nome_cidade_1); → Lê até 18 caracteres, sendo escolhido o valor 18 pois o maior estado em 17 letras + 1 do caractere nulo, permitindo espaços.
Após inserir os dados, exibe "Cadastro com sucesso!".


### 6️⃣ Entrada de Dados para a Carta 2

```  //Carta 2 :
    printf("\nCarta 2:\n");

    printf("Digite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo_carta_2);

    printf("Digite o nome da segunda cidade: ");
    scanf(" %18[^\n]", nome_cidade_2);

    printf("Digite a quantidade da população da segunda carta: ");
    scanf("%ld", &qtd_populacao_2);

    printf("Digite a área em km2 da segunda carta: ");
    scanf("%f", &area_km_2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib_carta_2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &qtd_pontos_turisticos_2);

    printf("%s\n", validacao);

```

### 7️⃣ Saída dos Dados (Exibição no Terminal)

``` //Carta 1 :

    printf("\n+--------------------------------------+\n");
    printf("| Carta 1:                             |\n");
    printf("| Estado: %c                            |\n", estado_1);
    printf("| Código: %s                           |\n", codigo_carta_1);
    printf("| Nome da cidade: %s                  |\n", nome_cidade_1);
    printf("| População: %lu                       |\n", qtd_populacao_1);
    printf("| Área: %.2f km2                       |\n", area_km_1);
    printf("| PIB: R$ %.2f bilhões de reais        |\n", pib_carta_1);
    printf("| Número de pontos turísticos: %d      |\n", qtd_pontos_turisticos_1);
    printf("| Densidade Populacional: %.2f hab/km2 |\n", densidade_carta_1);
    printf("| PIB per capita: R$ %.2f             |\n", pib_capita_carta_1);
    printf("| Super poder: %.2f                   |\n", super_poder_carta_1);
    printf("+--------------------------------------+\n");


    //Carta 2 :

    printf("\n+--------------------------------------+\n");
    printf("| Carta 2:                             |\n");
    printf("| Estado: %c                            |\n", estado_2);
    printf("| Código: %s                           |\n", codigo_carta_2);
    printf("| Nome da cidade: %s                  |\n", nome_cidade_2);
    printf("| População: %lu                       |\n", qtd_populacao_2);
    printf("| Área: %.2f km2                       |\n", area_km_2);
    printf("| PIB: R$ %.2f bilhões de reais        |\n", pib_carta_2);
    printf("| Número de pontos turísticos: %d      |\n", qtd_pontos_turisticos_2);
    printf("| Densidade Populacional: %.2f hab/km2 |\n", densidade_carta_2);
    printf("| PIB per capita: R$ %.2f             |\n", pib_capita_carta_2);
    printf("| Super poder: %.2f                   |\n", super_poder_carta_2);
    printf("+--------------------------------------+\n");
        


```

### 8️⃣ Área de calculos : 

```c
   
   // Carta 1:
    
    calc_densidade_populacional = qtd_populacao_1 / area_km_1 ; // Calcula a densidade populacional
    densidade_carta_1 = calc_densidade_populacional ; // Armazena o valor da densidade populacional da carta 1 
    
    //PIB per capita
    pib_carta_1 *= casting_bilhao ; // Converte o PIB de decimal para bilhão
    
    calc_pib_per_capita = pib_carta_1 / qtd_populacao_1 ; // Calcula o PIB per capita
    pib_capita_carta_1 = calc_pib_per_capita  ; // Armazena o valor do calculo do pib per capita
    
    pib_carta_1 /= casting_bilhao ; // Converte o PIB de volta para bilhões
    
    //O super poder é uma métrica composta pela soma de vários atributos da carta, menos a densidade populacional:
    super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1) - densidade_carta_1;


    // Carta 2:
    
    calc_densidade_populacional = qtd_populacao_2 / area_km_2 ; // Calcula a densidade populacional
    densidade_carta_2 = calc_densidade_populacional ; // Armazena o valor da densidade populacional da carta 2 
    
    //PIB per capita
    pib_carta_2 *= casting_bilhao ; // Converte o PIB de decimal para bilhão
    
    calc_pib_per_capita = pib_carta_2 / qtd_populacao_2 ; // Calcula o PIB per capita
    pib_capita_carta_2 = calc_pib_per_capita ; // Armazena o valor do calculo do pib per capita
    
    pib_carta_2 /= casting_bilhao ; // Converte o PIB de volta para bilhões

```
### 9️⃣ Comparações das Cartas

```
 9️⃣ Comparações das Cartas
    O programa compara os atributos das duas cartas e determina qual carta vence em cada categoria. A lógica de comparação é baseada em operadores relacionais (>, <), e o resultado é exibido no terminal.

    printf("\nComparações das cartas:\n");

    // Comparação de população
    comparador = qtd_populacao_1 > qtd_populacao_2;
    identificador_carta = qtd_cartas - comparador;
    printf("População: Carta %d venceu (%d)\n", identificador_carta, comparador);

    // Comparação de área
    comparador = area_km_1 > area_km_2;
    identificador_carta = qtd_cartas - comparador;
    printf("Área: Carta %d venceu (%d)\n", identificador_carta, comparador);

    // Comparação de PIB
    comparador = pib_carta_1 > pib_carta_2;
    identificador_carta = qtd_cartas - comparador;
    printf("PIB: Carta %d venceu (%d)\n", identificador_carta, comparador);

    // Comparação de pontos turísticos
    comparador = qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2;
    identificador_carta = qtd_cartas - comparador;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", identificador_carta, comparador);

    // Comparação de densidade populacional
    comparador = densidade_carta_1 < densidade_carta_2;
    identificador_carta = qtd_cartas - comparador;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", identificador_carta, comparador);

    // Comparação de PIB per capita
    comparador = pib_capita_carta_1 > pib_capita_carta_2;
    identificador_carta = qtd_cartas - comparador;
    printf("PIB per Capita: Carta %d venceu (%d)\n", identificador_carta, comparador);

    // Comparação de super poder
    comparador = super_poder_carta_1 > super_poder_carta_2;
    identificador_carta = qtd_cartas - comparador;
    printf("Super poder: Carta %d venceu (%d)\n", identificador_carta, comparador);

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

📅 **Atualizado em:** 28/02/2025 📌 **Desenvolvido por:** Júlio Cézar
