#include <stdio.h>

int main() {
    /*
    Aluno: Júlio Cézar Freitas De Oliveira
    Desafio de código: Super Trunfo Lógica - Novato.
    */

    // Declaração de variáveis
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
    float super_poder_carta_1, super_poder_carta_2; // Super poder das cartas
    const float casting_bilhao = 1000000000; // Constante para conversão de bilhões para unidades
    const char validacao[30] = "Cadastro com sucesso!"; // Mensagem de validação

    // Entrada do usuário

    // Carta 1:
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

    // Carta 2:
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

    // Cálculos para cumprir os critérios do desafio 2

    // Carta 1:
    calc_densidade_populacional = qtd_populacao_1 / area_km_1; // Calcula a densidade populacional
    densidade_carta_1 = calc_densidade_populacional; // Armazena a densidade populacional

    pib_carta_1 *= casting_bilhao; // Converte o PIB de bilhões para unidades
    calc_pib_per_capita = pib_carta_1 / qtd_populacao_1; // Calcula o PIB per capita
    pib_capita_carta_1 = calc_pib_per_capita; // Armazena o PIB per capita
    pib_carta_1 /= casting_bilhao; // Converte o PIB de volta para bilhões

    super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1) - densidade_carta_1; // Calcula o super poder

    // Carta 2:
    calc_densidade_populacional = qtd_populacao_2 / area_km_2; // Calcula a densidade populacional
    densidade_carta_2 = calc_densidade_populacional; // Armazena a densidade populacional

    pib_carta_2 *= casting_bilhao; // Converte o PIB de bilhões para unidades
    calc_pib_per_capita = pib_carta_2 / qtd_populacao_2; // Calcula o PIB per capita
    pib_capita_carta_2 = calc_pib_per_capita; // Armazena o PIB per capita
    pib_carta_2 /= casting_bilhao; // Converte o PIB de volta para bilhões

    super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2 + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2) - densidade_carta_2; // Calcula o super poder

    // Saída para o usuário, cartas cadastradas

    // Estilo de linha para melhorar a visualização
    // Primeira carta:
    
    printf("\n+--------------------------------------+\n");
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
    printf("+--------------------------------------+\n");

    // Segunda carta:
    printf("\n+--------------------------------------+\n");
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
    printf("+--------------------------------------+\n");

    // Comparações das cartas
    printf("\n+--------------------------------------+\n");
   
    printf("\n| Comparações de cartas  (Atributo: População) \n") ;
    printf("Carta 1 : %s (SP): %lu  \n", nome_cidade_1, qtd_populacao_1)  ;
    printf("Carta 2 : %s (RJ): %lu  \n", nome_cidade_2 , qtd_populacao_2)  ;
   
   if ( qtd_populacao_1 > qtd_populacao_2 ) {
          printf("Resultado :  Carta 1 (%s) \n",  nome_cidade_1 ) ;
    } else {
          printf("Resultado : Carta 2 (%s) \n", nome_cidade_2) ;
    }
   
   printf("\n+--------------------------------------+\n");

  return  0 ;
}
