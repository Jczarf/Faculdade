# 🃏 Super Trunfo Lógica - Nivel Mestre

Bem-vindo(a) a este **Super Trunfo** com foco na **comparação de dois atributos**. O objetivo do desafio é permitir que o jogador selecione **dois atributos** numéricos diferentes em cada rodada, a partir de **menus interativos**, e determinar a carta vencedora considerando a soma desses dois atributos.

---

## 📌 Desafio: O Que Deve Ser Implementado

1. **Escolha de Dois Atributos**  
   - O jogador deve poder escolher dois atributos *numéricos* **diferentes** para comparar.  
   - É **proibido** escolher o **mesmo** atributo duas vezes.  
   - Menu dinâmico: depois que o primeiro atributo for escolhido, ele não deve mais aparecer como opção para o segundo atributo.

2. **Comparação com Múltiplos Atributos**  
   - Para **cada** atributo escolhido, comparar os valores das duas cartas.  
   - Regra geral: **maior valor vence**.  
   - Exceção: **Densidade Demográfica** (ou populacional), **menor valor vence**.

3. **Soma dos Atributos**  
   - Depois de comparar individualmente os dois atributos, **some** os valores dos dois atributos em cada carta.  
   - A carta com a **maior soma** vence a rodada (mantida a exceção de densidade apenas na comparação individual).

4. **Tratamento de Empates**  
   - Se a soma dos dois atributos (carta 1 vs. carta 2) for **igual**, exibir **"Empate!"**.

5. **Menus Dinâmicos**  
   - Devem ser criados **menus interativos usando `switch`**.  
   - **Dinâmico** significa que, por exemplo, se o jogador escolheu primeiro “População”, essa opção não aparece mais no segundo menu para o mesmo jogador.

6. **Exibição Clara do Resultado**  
   - Mostrar **nome** das duas cartas (ex.: dois países).  
   - Mostrar **quais dois atributos** foram usados na comparação.  
   - Mostrar **valores** de cada atributo para **cada** carta.  
   - Mostrar **soma** final dos atributos em cada carta.  
   - Declarar **qual carta venceu** ou **se houve empate**.

---

## 🎯 Lógica Esperada

1. **Cadastro das Cartas**  
   - Cada carta deve ter: nome, código (opcional), população, área, PIB, pontos turísticos, densidade (calculada), etc.

2. **Menu para Selecionar 1 ou 2 Atributos**  
   - Se o jogador optar por **2 atributos**, exibir a lista de opções (1: População, 2: Área, 3: PIB, 4: Pontos Turísticos, 5: Densidade...).  
   - Ler a **primeira escolha**.  
   - **Remover** essa escolha da lista, para que não apareça no **segundo** menu.  
   - Ler a **segunda escolha**.  

3. **Comparação de Dois Atributos**  
   - **Atributo 1**: maior vence (ou menor, se for densidade).  
   - **Atributo 2**: maior vence (ou menor, se for densidade).  
   - Exibir quem ganhou **cada** atributo (opcional).  

4. **Soma Final**  
   - Some os valores (ou, quando for densidade, só use o valor da carta no final – a lógica de “menor vence” fica na parte individual).  
   - Se `total_carta_1 > total_carta_2`, Carta 1 vence a rodada.  
   - Se `total_carta_2 > total_carta_1`, Carta 2 vence a rodada.  
   - Se igual, “Empate!”.

---

## 🏆 Atributos Típicos

| Nº | Atributo               | Regra de Comparação |
|---:|------------------------|---------------------|
|  1 | **População**          | Maior vence         |
|  2 | **Área**               | Maior vence         |
|  3 | **PIB**                | Maior vence         |
|  4 | **Pontos Turísticos**  | Maior vence         |
|  5 | **Densidade**          | **Menor vence**     |

*(Você pode adaptar os números acima ao seu próprio `switch-case`.)*

---

## 💻 Fluxo de Execução (Exemplo)

1. O jogador cadastra **duas cartas** (por exemplo, *Brasil* e *França*).  
2. Calcula-se densidade etc. (opcional, conforme seu programa).  
3. O programa pergunta:  
   **"Deseja comparar (1) ou (2) atributos?"**  
   - Se escolher **2**, exibe:  
     ```
     Selecione o primeiro atributo:
       (1) População
       (2) Área
       (3) PIB
       (4) Pontos Turísticos
       (5) Densidade
     ```  
   - O jogador escolhe, por exemplo, **1 (População)**.  
   - Remove o “População” do segundo menu. Agora o segundo menu (dinâmico) exibe apenas:  
     ```
     Selecione o segundo atributo:
       (2) Área
       (3) PIB
       (4) Pontos Turísticos
       (5) Densidade
     ```
   - O jogador escolhe **5 (Densidade)**.  

4. **Comparação**:
   - **População**: quem tiver maior é o vencedor do atributo.  
   - **Densidade**: quem tiver menor é o vencedor do atributo.  

5. **Soma Final**:
   - Pegar valor de População + valor de Densidade (carta 1) e comparar com População + Densidade (carta 2).  
   - Se `total_carta_1 > total_carta_2`, carta 1 vence a rodada.  
   - Se `==`, exibir “Empate!”.  

6. **Exibir**:
   - Nome dos dois países.  
   - Atributos usados (População e Densidade).  
   - Valor de cada atributo para cada carta.  
   - Soma dos dois atributos.  
   - Vencedor final ou “Empate!”.  

---

## (2) Declaração das Variáveis para Cadastro e Exibição

```C
// **Declaração das variáveis para cadastro e exibição**
char nome_pais_1[18], nome_pais_2[18]; // Nome dos países (até 17 caracteres)
char codigo_carta_1[5], codigo_carta_2[5]; // Código das cartas (até 4 caracteres)
unsigned long int qtd_populacao_1, qtd_populacao_2; // População dos países
float area_km_1, area_km_2; // Área em km²
float pib_carta_1, pib_carta_2; // PIB em bilhões
int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2; // Pontos turísticos
```


Essas variáveis armazenam os dados básicos inseridos pelo usuário para cada carta.

## (3) Declaração das Variáveis para Cálculos

```C

// **Declaração de variáveis para cálculos**
float densidade_carta_1, densidade_carta_2; // Densidade populacional (hab/km²)
float pib_capita_carta_1, pib_capita_carta_2; // PIB per capita (PIB/população)
float super_poder_carta_1, super_poder_carta_2; // Super poder da carta
const float casting_bilhao = 1000000000.0; // Conversão de PIB de bilhões para reais


```

São utilizadas para calcular a densidade, o PIB per capita e o super poder (uma métrica composta) para exibição.


## (4) Declaração das Variáveis para Comparação de Dois Atributos

```C

// **Declaração de variáveis para comparação de dois atributos**
float total_carta_1 = 0.0f, total_carta_2 = 0.0f; // Soma dos valores ao comparar dois atributos
char *vencedor_rodada; // Armazena quem vence a rodada final

```
Essas variáveis acumulam os valores dos atributos escolhidos (quando dois atributos são comparados) e determinam o vencedor final.

## (5) Declaração das Variáveis para o Menu e Escolhas

``` C
// **Declaração de variáveis para o menu e escolhas**
int selecao;            // (1) = comparar 1 atributo, (2) = comparar 2 atributos
int batalha_1, batalha_2; // Armazena a escolha de atributos
int conversao_calculo_menu; 
char *resultado; 
int temp; // Usado para trocar valores caso batalha_2 < batalha_1

```
Variáveis que controlam as escolhas do usuário, permitindo selecionar se deseja comparar 1 ou 2 atributos e formando um número identificador para o switch.

## (6) Declaração das Variáveis de Estilo e Mensagens

``` C
// **Declaração de variáveis de estilo e mensagens**
const char estilo[50] = "\n+--------------------------------------+\n";

```
Usado para imprimir separadores na saída, melhorando a formatação do programa.

## (7). Cadastro das Cartas

``` C
// **Cadastro da Carta 1**
printf("%s", estilo);
printf("Carta 1:\n");

printf("\nDigite o nome do país: ");
scanf(" %17[^\n]", nome_pais_1);

printf("Digite o código da primeira carta: ");
scanf(" %4s", codigo_carta_1);

printf("Digite a quantidade da população da primeira carta: ");
scanf("%lu", &qtd_populacao_1);

printf("Digite a área em km² da primeira carta: ");
scanf("%f", &area_km_1);

printf("Digite o PIB da primeira carta (em bilhões): ");
scanf("%f", &pib_carta_1);

printf("Digite o número de pontos turísticos da primeira carta: ");
scanf("%d", &qtd_pontos_turisticos_1);

printf("\nCadastro com sucesso!\n");

```
## (8) Cálculos dos Atributos

```C
// **Cálculo da densidade populacional**
densidade_carta_1 = qtd_populacao_1 / area_km_1;
densidade_carta_2 = qtd_populacao_2 / area_km_2;

// **Cálculo do PIB per capita**
pib_capita_carta_1 = (pib_carta_1 * casting_bilhao) / qtd_populacao_1;
pib_capita_carta_2 = (pib_carta_2 * casting_bilhao) / qtd_populacao_2;

// **Cálculo do super poder (apenas exibição)**
super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1
                      + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1)
                      - densidade_carta_1;
super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2
                      + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2)
                      - densidade_carta_2;


```

## (9) Exibição dos Dados das Cartas

``` C
// **Exibição dos dados da Carta 1**
printf("%s", estilo);
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

// **Exibição dos dados da Carta 2**
printf("%s", estilo);
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

## (10) Menu Interativo para Comparação

``` C

// **Escolha do número de atributos para comparar**
printf("\nVocê deseja comparar (1) ou (2) atributos : ");
scanf("%d", &selecao);


```

Pergunta se o usuário deseja comparar 1 ou 2 atributos.


### (10.2) 10.2 Primeiro Menu de Atributos

```C

// **Primeiro menu de atributos (1 a 5)**
printf("%s", estilo);
printf("\nEscolha os atributos para comparar:");
printf("\n(1) População");
printf("\n(2) Área");
printf("\n(3) PIB");
printf("\n(4) Pontos turísticos");
printf("\n(5) Densidade populacional\n");
printf("%s", estilo);

printf("Digite a opção : ");
scanf("%d", &batalha_1);

```
Exibe um menu com cinco opções e lê a escolha do usuário em batalha_1.

### 10.3 Lógica para 1 ou 2 Atributos

```C
// **Se for comparar apenas 1 atributo**
if (selecao == 1) {
    conversao_calculo_menu = 100 + batalha_1; // ex: 101, 102...
}
// **Se for comparar 2 atributos**
else if (selecao == 2) {
    printf("\nAtributo escolhido primeiro: %d\n", batalha_1);
    printf("%s", estilo);
    printf("\nEscolha o segundo atributo (diferente do primeiro): \n");

    // **Menu dinâmico:** Exibe opções sem repetir o atributo já escolhido
    switch (batalha_1) {
        case 1:
            printf("(2) Área\n(3) PIB\n(4) Pontos turísticos\n(5) Densidade populacional\n");
            break;
        case 2:
            printf("(1) População\n(3) PIB\n(4) Pontos turísticos\n(5) Densidade populacional\n");
            break;
        case 3:
            printf("(1) População\n(2) Área\n(4) Pontos turísticos\n(5) Densidade populacional\n");
            break;
        case 4:
            printf("(1) População\n(2) Área\n(3) PIB\n(5) Densidade populacional\n");
            break;
        case 5:
            printf("(1) População\n(2) Área\n(3) PIB\n(4) Pontos turísticos\n");
            break;
        default:
            break;
    }

    printf("\nDigite a segunda opção: ");
    scanf("%d", &batalha_2);

    // Garante que batalha_1 < batalha_2 para formar, por exemplo, 12, 13, etc.
    if (batalha_2 < batalha_1) {
        temp = batalha_1;
        batalha_1 = batalha_2;
        batalha_2 = temp;
    }

    conversao_calculo_menu = batalha_1 * 10 + batalha_2;
    printf("%s", estilo);
}


```

Se o usuário deseja comparar 1 atributo, forma-se um identificador (ex.: 101).
Se deseja comparar 2 atributos, o programa exibe um segundo menu sem a opção já escolhida (menu dinâmico).
Lê a segunda opção e reorganiza as variáveis para formar um número como 12, 13, etc., que identifica a combinação no switch.

## (11) SWITCH Principal de Comparação

O switch usa o valor de conversao_calculo_menu para determinar a combinação de atributos a ser comparada.

```C

case 12:
    printf("\n| Atributos usados: (População e Área)\n");

    // **Comparação de População**
    printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
    printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);
    resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
    printf("| Vencedor (População): %s\n", resultado);

    printf("%s", estilo);

    // **Comparação de Área**
    printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
    printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);
    resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
    printf("| Vencedor (Área): %s\n", resultado);

    // **Soma final dos atributos comparados**
    total_carta_1 = (float)qtd_populacao_1 + area_km_1;
    total_carta_2 = (float)qtd_populacao_2 + area_km_2;
    break;


```

Neste case, o programa:

Compara a população de ambas as cartas.
Compara a área de ambas as cartas.
Soma os valores para determinar o vencedor final, se estiver comparando 2 atributos.
Outros Cases
Cada combinação (13, 14, 15, 23, 24, 25, 34, 35, 45) segue a mesma estrutura, adaptando as comparações conforme os atributos escolhidos.

Também há cases para a comparação de apenas 1 atributo (101, 102, 103, 104, 105).

## (12) Exibição do Resultado Final

``` C
// **Exibe resultado final apenas se comparar 2 atributos**
printf("%s", estilo);
if (selecao == 2) {
    if (total_carta_1 == total_carta_2) {
        printf("| Empate ! \n");
    } else {
        vencedor_rodada = (total_carta_1 > total_carta_2) ? "Carta 1" : "Carta 2";
        printf("Total %-20s : %.2f\n", nome_pais_1, total_carta_1);
        printf("Total %-20s : %.2f\n", nome_pais_2, total_carta_2);
        printf("%s", estilo);
        printf("| Rodada vencedora é : %s \n", vencedor_rodada);
    }
}h

```

Caso sejam comparados 2 atributos, o programa verifica a soma final dos valores. Se as somas forem iguais, exibe "Empate !"; caso contrário, mostra a carta vencedora.