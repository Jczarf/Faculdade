1. Super Trunfo - Iniciante

   Bem-vindo ao repositório do projeto **Super Trunfo - Iniciante**! Este projeto foi desenvolvido como parte das atividades acadêmicas da faculdade.
   ## 📌 Sobre o Projeto
   Este projeto é uma implementação básica do jogo **Super Trunfo**, onde os jogadores comparam atributos de cartas para determinar o vencedor. Ele inclui:
   - Implementação de lógica de comparação de cartas.
   - Estruturação básica de um jogo.
   - Interface simples via terminal.
   ## 📁 Estrutura do Repositório
   ```
   Faculdade/
   Projeto - Super_trunfo / 
   Super_Trunfo_Iniciante/
   │-- super_trunfo_iniciante.c  # Código-fonte principal
   │-- super_trunfo_iniciante    # Arquivo executável (compilado)
   │-- README.md                 # Documentação do projeto
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
   cd Super_Trunfo_Iniciante
   ```
3. Compile o código:
   ```bash
   gcc super_trunfo_iniciante.c -o super_trunfo_iniciante
   ```
4. Execute o programa:
   ```bash
   ./super_trunfo_iniciante
   ```

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


```
    Declaração das variáveis para armazenar informações das cartas.
    char estado_1, estado_2; → Armazena o estado da cidade da carta.
    char codigo_carta_1[5], codigo_carta_2[5]; → Código identificador da carta.
    char nome_cidade_1[18], nome_cidade_2[18]; → Nome da cidade.
    int qtd_populacao_1, qtd_populacao_2; → População da cidade.
    float area_km_1, area_km_2; → Área em km² da cidade.
    float pib_carta_1, pib_carta_2; → PIB da cidade.
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2; → Número de pontos turísticos.
    const char validacao[30] = "Cadastro com sucesso!"; → Mensagem fixa exibida após cada cadastro.

```

Essas variáveis armazenam informações das cartas, como estado, código, nome da cidade, população, área, PIB e número de pontos turísticos.



### 5️⃣ Entrada de Dados para a Carta 1

``` //Carta 1 :
   
    printf("Carta 1 :\n");

    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da primeira carta : ");
    scanf(" %s", codigo_carta_1);

    printf("Digite o nome da primeira cidade : ");
    scanf(" %18[^\n]", nome_cidade_1);

    printf("Digite a quantidade da população da primeira carta : ");
    scanf(" %d", &qtd_populacao_1);

    printf("Digite a área em km2 da primeira carta : ");
    scanf(" %f", &area_km_1);

    printf("Digite o PIB da primeira carta : ");
    scanf(" %f", &pib_carta_1);

    printf("Digite o número de pontos turísticos da primeira carta : ");
    scanf(" %d", &qtd_pontos_turisticos_1);

    printf("%s\n", validacao);

```

Cada scanf recebe um dado do usuário e armazena na variável correspondente.
scanf(" %18[^\n]", nome_cidade_1); → Lê até 18 caracteres, sendo escolhido o valor 18 pois o maior estado em 17 letras + 1 do caractere nulo, permitindo espaços.
Após inserir os dados, exibe "Cadastro com sucesso!".


### 6️⃣ Entrada de Dados para a Carta 2

``` // Carta 2:
    
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

### 7️⃣ Saída dos Dados (Exibição no Terminal)

``` //Carta 1 : 

    printf("\n+--------------------------------------+\n");
    printf("| Carta 1:                              \n");
    printf("| Estado: %c                            \n", estado_1);
    printf("| Código: %s                            \n", codigo_carta_1);
    printf("| Nome da cidade: %s                    \n", nome_cidade_1);
    printf("| População: %d                         \n", qtd_populacao_1);
    printf("| Área: %.2f km2                        \n", area_km_1);
    printf("| PIB: R$ %.2f bilhões                  \n", pib_carta_1);
    printf("| Pontos turísticos: %d                 \n", qtd_pontos_turisticos_1);
    printf("+--------------------------------------+\n");

    //Carta 2 : 
    
    printf("\n+--------------------------------------+\n");
    printf("| Carta 2:                             \n");
    printf("| Estado: %c                           \n", estado_2);
    printf("| Código: %s                           \n", codigo_carta_2);
    printf("| Nome da cidade: %s                   \n", nome_cidade_2);
    printf("| População: %d                        \n", qtd_populacao_2);
    printf("| Área: %.2f km2                       \n", area_km_2);
    printf("| PIB: R$ %.2f bilhões                 \n", pib_carta_2);
    printf("| Pontos turísticos: %d                \n", qtd_pontos_turisticos_2);
    printf("+--------------------------------------+\n");

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

📅 **Atualizado em:** 25/02/2025 📌 **Desenvolvido por:** Júlio Cézar


