#include <stdio.h>

int main() 
{
 
    /*
    Aluno: Júlio Cézar Freitas De Oliveira
    Desafio de código: Super Trunfo Lógica - Aventureiro.
    */

    // **Declaração das variáveis**
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
    
    char *resultado ;

    //**Variaveis de interação**
    int selecao; 
    int batalha_1, batalha_2; // Opção de batalha escolhida pelo usuário
    int temp , chave ; 

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

    // **Cálculo da densidade populacional**
    densidade_carta_1 = qtd_populacao_1 / area_km_1;
    densidade_carta_2 = qtd_populacao_2 / area_km_2;

    // **Cálculo do PIB per capita**
    pib_capita_carta_1 = (pib_carta_1 * casting_bilhao) / qtd_populacao_1;
    pib_capita_carta_2 = (pib_carta_2 * casting_bilhao) / qtd_populacao_2;

    // **Cálculo do super poder da carta**
    super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1) - densidade_carta_1;
    super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2 + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2) - densidade_carta_2;

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

    //Menu interativo : 

    printf("\nVocê deseja comparar (1) ou (2) atributos : ");
    scanf("%d", &selecao);
    
    printf("%s",estilo);
    printf("\nEscolha os atributos para comparar:");
    printf("\n(1) População");
    printf("\n(2) Área");
    printf("\n(3) PIB");
    printf("\n(4) Pontos turísticos");
    printf("\n(5) Densidade populacional\n");    
    printf("%s", estilo) ;
    
    printf("Digite a opção : ");
    scanf("%d", &batalha_1);


    if (selecao == 1) {

        chave = 100 + batalha_1 ; 

    } else if (selecao == 2 ) {
        
        printf("Digite a segunda opção : ") ;
        scanf("%d", &batalha_2) ;
   
        if(batalha_2 < batalha_1) {
            
            temp = batalha_1 ;
            batalha_1 = batalha_2 ;
            batalha_2 = temp ;   
        }
        
        chave = batalha_1 * 10 + batalha_2 ; 
    } 

    switch (chave) 
    {

        // 🔹 Caso o usuário tenha escolhido apenas **um** atributo
        case 101 :  
            
            printf("\n| Atributo usado: (População)\n");
            printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
            printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);

            resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor: %s\n", resultado);
            break;

        case 102 :  
            
            printf("\n| Atributo usado: (Área)\n");
            printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
            printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);

            resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor: %s\n", resultado);
            break;

        case 103 :
            
            printf("\n| Atributo usado: (PIB)\n");
            printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
            printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);

            resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor: %s\n", resultado);
            break;

        case 104 :
            
            printf("\n| Atributo usado: (Pontos turísticos)\n");
            printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
            printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);

            resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor: %s\n", resultado);
            break;

        case 105 :
            
            printf("\n| Atributo usado: (Densidade populacional)\n");
            printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
            printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);

            resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor: %s\n", resultado);
            break;

        
        // 🔹 Usuário escolheu **dois atributos**
        case 12:
            
            printf("\n| Atributos usados: (População e Área)\n");
            resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (População): %s\n", resultado);
            resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Área): %s\n", resultado);
            break;

        case 13:
            
            printf("\n| Atributos usados: (População e PIB)\n");
            resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (População): %s\n", resultado);
            resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (PIB): %s\n", resultado);
            break;

        case 14:
            
            printf("\n| Atributos usados: (População e Pontos turísticos)\n");
            resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (População): %s\n", resultado);
            resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Pontos turísticos): %s\n", resultado);
            break;

        case 15:
            
            printf("\n| Atributos usados: (População e Densidade populacional)\n");
            resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (População): %s\n", resultado);
            resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Densidade populacional): %s\n", resultado);
            
            break;

        case 23:
            
            printf("\n| Atributos usados: (Área e PIB)\n");
            resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Área): %s\n", resultado);
            resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (PIB): %s\n", resultado);
            
            break;

        case 24:

            printf("\n| Atributos usados: (Área e Pontos turísticos)\n");
            resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Área): %s\n", resultado);
            resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Pontos turísticos): %s\n", resultado);
            
            break;

        case 25:
            
            printf("\n| Atributos usados: (Área e Densidade populacional)\n");
            resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Área): %s\n", resultado);
            resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Densidade populacional): %s\n", resultado);
        
            break;
    
        case 34 : 

            printf("\n| Atributos usados: (PIB e Pontos turisticos)\n");
            resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (PIB): %s\n", resultado);
            resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Pontos turisticos): %s\n", resultado);

            
            break;


        case 35 : 

            printf("\n| Atributos usados: (PIB e Densidade populacional)\n");
            resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (PIB): %s\n", resultado);
            resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Densidade populacional): %s\n", resultado);

            break;

        case 45 : 

            printf("\n| Atributos usados: (Pontos turisticos e Densidade populacional)\n");
            resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Pontos turisticos): %s\n", resultado);
            resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
            printf("| Vencedor (Densidade populacional): %s\n", resultado);



            break ;
    
    }

    return 0; 

}
