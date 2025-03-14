#include <stdio.h>

int main()
{
    // --------------------------------------------------------------------
    // 1) Declaração das variáveis para cadastro
    // --------------------------------------------------------------------
    char nome_pais_1[18], nome_pais_2[18];        // Armazena o nome dos países (até 17 chars + '\0')
    char codigo_carta_1[5], codigo_carta_2[5];    // Armazena o código das cartas (até 4 chars + '\0')
    unsigned long int qtd_populacao_1, qtd_populacao_2;  // População das cartas
    float area_km_1, area_km_2;                   // Área em km²
    float pib_carta_1, pib_carta_2;               // PIB em bilhões
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2; // Nº de pontos turísticos
    
    // --------------------------------------------------------------------
    // 2) Variáveis para cálculos
    // --------------------------------------------------------------------
    float densidade_carta_1, densidade_carta_2;    // Densidade populacional (hab/km²)
    float pib_capita_carta_1, pib_capita_carta_2;  // PIB per capita (PIB / população)
    float super_poder_carta_1, super_poder_carta_2; // "Super poder" da carta
    const float casting_bilhao = 1000000000.0;     // Conversão de PIB (bilhões) p/ valor numérico

    // (Variáveis para comparação final ao escolher 2 atributos)
    float total_carta_1 = 0.0f, total_carta_2 = 0.0f; // Guarda a soma dos dois atributos escolhidos
    char *vencedor_rodada ;                  // Identifica a carta vencedora da rodada

    // --------------------------------------------------------------------
    // 3) Variáveis de identificações e validações
    // --------------------------------------------------------------------
    int identificador_carta_1 = 1, identificador_carta_2 = 2;  // Identifica qual carta será cadastrada
    int validador = 0;                                         // Flag p/ dizer se o cadastro é válido
    char *mensagem_confirmacao;                                // Exibe mensagem de cadastro

    // --------------------------------------------------------------------
    // 4) Variáveis de menu
    // --------------------------------------------------------------------
    int selecao;             // (1) = comparar 1 atributo, (2) = comparar 2 atributos
    int batalha_1, batalha_2; 
    int conversao_calculo_menu; 
    char *resultado; 
    int temp;                // Usado para trocar valores caso batalha_2 < batalha_1

    // --------------------------------------------------------------------
    // 5) Variáveis de "estilo"
    // --------------------------------------------------------------------
    const char estilo[50] = "\n+--------------------------------------+\n";
    
    // --------------------------------------------------------------------
    // ========== CADASTRO DA CARTA 1 ==========
    // --------------------------------------------------------------------
    if (identificador_carta_1 == 1) {
        
        // Imprime separador de estilo
        printf("%s", estilo);        
        printf("Carta 1:\n");

        // Solicita dados ao usuário
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

        // Valida se todos os campos estão preenchidos corretamente
        if (nome_pais_1[0] != '\0' && codigo_carta_1[0] != '\0' &&
            qtd_populacao_1 > 0 && area_km_1 > 0.0 && pib_carta_1 > 0.0 && qtd_pontos_turisticos_1 > 0) 
        {
            validador = 1;  // Sinaliza que Carta 1 foi cadastrada com sucesso
            mensagem_confirmacao = "\nCadastrado com sucesso! \n";
        } else {
            validador = 0;  // Sinaliza erro de cadastro
            mensagem_confirmacao = "\nCadastro Inválido! \n";
        }
        
        // Exibe a mensagem de confirmação ou erro
        printf("%s", mensagem_confirmacao);
    } 
    
    // --------------------------------------------------------------------
    // ========== CADASTRO DA CARTA 2 ==========
    // --------------------------------------------------------------------
    if (identificador_carta_2 == 2 && validador == 1) {
        
        // Imprime separador de estilo
        printf("%s", estilo);
        printf("\nCarta 2:\n");

        // Solicita dados ao usuário
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

        // Valida se todos os campos estão preenchidos corretamente
        if (nome_pais_2[0] != '\0' && codigo_carta_2[0] != '\0' &&
            qtd_populacao_2 > 0 && area_km_2 > 0.0 && pib_carta_2 > 0.0 && qtd_pontos_turisticos_2 > 0) 
        {
            validador = 1;  // Sinaliza que Carta 2 foi cadastrada com sucesso
            mensagem_confirmacao = "\nCadastrado com sucesso! \n"; 
        } else {
            validador = 0;  // Sinaliza erro de cadastro
            mensagem_confirmacao = "\nCadastro Inválido! \n";
        }
        
        // Exibe a mensagem de confirmação ou erro
        printf("%s", mensagem_confirmacao);
    } 

    // --------------------------------------------------------------------
    // ========== CÁLCULOS (apenas se ambas as cartas forem válidas) ==========
    // --------------------------------------------------------------------
    if (identificador_carta_1 == 1 && identificador_carta_2 == 2 && validador == 1) {
        
        // 1) Densidade populacional
        densidade_carta_1 = qtd_populacao_1 / area_km_1;  // hab/km²
        densidade_carta_2 = qtd_populacao_2 / area_km_2;

        // 2) Cálculo do PIB per capita
        pib_capita_carta_1 = (pib_carta_1 * casting_bilhao) / qtd_populacao_1;
        pib_capita_carta_2 = (pib_carta_2 * casting_bilhao) / qtd_populacao_2;

        // 3) Cálculo do super poder da carta
        //    (soma de população + área + PIB + pontos turísticos + PIB per capita - densidade)
        super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 
                               + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1)
                              - densidade_carta_1;

        super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2 
                               + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2)
                              - densidade_carta_2;
    } 

    // --------------------------------------------------------------------
    // ========== EXIBE DADOS CADASTRADOS E APRESENTA MENU DE COMPARAÇÃO ==========
    // --------------------------------------------------------------------
    if (validador == 1) {
        
        // -------------------------------------------------
        // Exibição dos dados: Carta 1
        // -------------------------------------------------
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

        // -------------------------------------------------
        // Exibição dos dados: Carta 2
        // -------------------------------------------------
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
    
        // -------------------------------------------------
        // Menu interativo para comparação
        // -------------------------------------------------
        printf("\nVocê deseja comparar (1) ou (2) atributos : ");
        scanf("%d", &selecao);
        
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

        // -------------------------------------------------
        // Se a comparação for de 1 atributo
        // -------------------------------------------------
        if (selecao == 1) {
            // '101', '102', '103' etc. (100 + batalha_1)
            conversao_calculo_menu = 100 + batalha_1;
        } 
        // -------------------------------------------------
        // Se a comparação for de 2 atributos
        // -------------------------------------------------
        else if (selecao == 2) {
            printf("Digite a segunda opção : ");
            scanf("%d", &batalha_2);

            // Garante que batalha_1 seja o menor atributo para formar (ex: 12, 13, 24 etc.)
            if (batalha_2 < batalha_1) {
                temp = batalha_1;
                batalha_1 = batalha_2;
                batalha_2 = temp;   
            } 
            
            // Exemplo: batalha_1=1, batalha_2=2 -> 1*10 + 2 = 12
            conversao_calculo_menu = batalha_1 * 10 + batalha_2; 
            printf("%s", estilo);
        }

        // ----------------------------------------------------------------
        // SWITCH principal para comparação dos atributos
        // ----------------------------------------------------------------
        switch (conversao_calculo_menu) {

            // -----------------------------------------------------------
            // (População e Área)
            // -----------------------------------------------------------
            case 12:
                printf("\n| Atributos usados: (População e Área)\n");

                // 1) População
                printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
                printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);

                // Maior população vence
                resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (População): %s\n", resultado);

                printf("%s", estilo);
                
                // 2) Área
                printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
                printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);

                // Maior área vence
                resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Área): %s\n", resultado);

                // Soma final das cartas para desempate
                total_carta_1 = (float)qtd_populacao_1 + area_km_1;
                total_carta_2 = (float)qtd_populacao_2 + area_km_2;
                break;

            // -----------------------------------------------------------
            // (População e PIB)
            // -----------------------------------------------------------
            case 13:
                printf("\n| Atributos usados: (População e PIB)\n");

                // 1) População
                printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
                printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);

                // Maior população vence
                resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (População): %s\n", resultado);

                printf("%s", estilo);

                // 2) PIB
                printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
                printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);

                // Maior PIB vence
                resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (PIB): %s\n", resultado);

                // Soma final das cartas para desempate
                total_carta_1 = (float)qtd_populacao_1 + pib_carta_1;
                total_carta_2 = (float)qtd_populacao_2 + pib_carta_2;
                break;

            // -----------------------------------------------------------
            // (População e Pontos turísticos)
            // -----------------------------------------------------------
            case 14:
                printf("\n| Atributos usados: (População e Pontos turísticos)\n");

                // 1) População
                printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
                printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);

                // Maior população vence
                resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (População): %s\n", resultado);

                printf("%s", estilo);

                // 2) Pontos turísticos
                printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
                printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);

                // Maior número de pontos vence
                resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Pontos turísticos): %s\n", resultado);

                // Soma final das cartas para desempate
                total_carta_1 = (float)qtd_populacao_1 + (float)qtd_pontos_turisticos_1;
                total_carta_2 = (float)qtd_populacao_2 + (float)qtd_pontos_turisticos_2;
                break;

            // -----------------------------------------------------------
            // (População e Densidade populacional)
            // -----------------------------------------------------------
            case 15:
                printf("\n| Atributos usados: (População e Densidade populacional)\n");

                // 1) População
                printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
                printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);

                // Maior população vence
                resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (População): %s\n", resultado);

                printf("%s", estilo);

                // 2) Densidade populacional
                printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
                printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);

                // Menor densidade vence
                resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Densidade populacional): %s\n", resultado);

                // Soma final das cartas para desempate
                total_carta_1 = (float)qtd_populacao_1 + densidade_carta_1;
                total_carta_2 = (float)qtd_populacao_2 + densidade_carta_2;
                break;

            // -----------------------------------------------------------
            // (Área e PIB)
            // -----------------------------------------------------------
            case 23:
                printf("\n| Atributos usados: (Área e PIB)\n");

                // 1) Área
                printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
                printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);

                // Maior área vence
                resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Área): %s\n", resultado);

                printf("%s", estilo);

                // 2) PIB
                printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
                printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);

                // Maior PIB vence
                resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (PIB): %s\n", resultado);

                // Soma final das cartas
                total_carta_1 = area_km_1 + pib_carta_1;
                total_carta_2 = area_km_2 + pib_carta_2;
                break;

            // -----------------------------------------------------------
            // (Área e Pontos turísticos)
            // -----------------------------------------------------------
            case 24:
                printf("\n| Atributos usados: (Área e Pontos turísticos)\n");

                // 1) Área
                printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
                printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);

                // Maior área vence
                resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Área): %s\n", resultado);

                printf("%s", estilo);

                // 2) Pontos turísticos
                printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
                printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);

                // Maior número de pontos vence
                resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Pontos turísticos): %s\n", resultado);

                // Soma final das cartas
                total_carta_1 = area_km_1 + (float)qtd_pontos_turisticos_1;
                total_carta_2 = area_km_2 + (float)qtd_pontos_turisticos_2;
                break;

            // -----------------------------------------------------------
            // (Área e Densidade populacional)
            // -----------------------------------------------------------
            case 25:
                printf("\n| Atributos usados: (Área e Densidade populacional)\n");

                // 1) Área
                printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
                printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);

                // Maior área vence
                resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Área): %s\n", resultado);

                printf("%s", estilo);
                
                // 2) Densidade populacional
                printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
                printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);

                // Menor densidade vence
                resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Densidade populacional): %s\n", resultado);

                // Soma final das cartas
                total_carta_1 = area_km_1 + densidade_carta_1;
                total_carta_2 = area_km_2 + densidade_carta_2;
                break;

            // -----------------------------------------------------------
            // (PIB e Pontos turísticos)
            // -----------------------------------------------------------
            case 34:
                printf("\n| Atributos usados: (PIB e Pontos turísticos)\n");

                // 1) PIB
                printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
                printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);

                // Maior PIB vence
                resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (PIB): %s\n", resultado);

                printf("%s", estilo);

                // 2) Pontos turísticos
                printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
                printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);

                // Maior número de pontos vence
                resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Pontos turísticos): %s\n", resultado);

                // Soma final das cartas
                total_carta_1 = pib_carta_1 + (float)qtd_pontos_turisticos_1;
                total_carta_2 = pib_carta_2 + (float)qtd_pontos_turisticos_2;
                break;

            // -----------------------------------------------------------
            // (PIB e Densidade populacional)
            // -----------------------------------------------------------
            case 35:
                printf("\n| Atributos usados: (PIB e Densidade populacional)\n");

                // 1) PIB
                printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
                printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);

                // Maior PIB vence
                resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (PIB): %s\n", resultado);

                printf("%s", estilo);

                // 2) Densidade populacional
                printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
                printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);

                // Menor densidade vence
                resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Densidade populacional): %s\n", resultado);

                // Soma final das cartas
                total_carta_1 = pib_carta_1 + densidade_carta_1;
                total_carta_2 = pib_carta_2 + densidade_carta_2;
                break;

            // -----------------------------------------------------------
            // (Pontos turísticos e Densidade populacional)
            // -----------------------------------------------------------
            case 45:
                printf("\n| Atributos usados: (Pontos turísticos e Densidade populacional)\n");

                // 1) Pontos turísticos
                printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
                printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);

                // Maior número de pontos vence
                resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Pontos turísticos): %s\n", resultado);

                printf("%s", estilo);

                // 2) Densidade populacional
                printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
                printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);

                // Menor densidade vence
                resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Densidade populacional): %s\n", resultado);

                // Soma final das cartas
                total_carta_1 = (float)qtd_pontos_turisticos_1 + densidade_carta_1;
                total_carta_2 = (float)qtd_pontos_turisticos_2 + densidade_carta_2;
                break;

            // -----------------------------------------------------------
            // Opção inválida (exemplo: mesma opção duas vezes)
            // -----------------------------------------------------------
            default:
                printf("Por favor tente novamente, você escolheu dois atributos iguais.");
                break; 

        } // Fim do switch
        
        // Imprime um separador de estilo
        printf("%s", estilo);

        // ----------------------------------------------------------------
        // Se comparou 2 atributos (selecao == 2), exibimos o vencedor geral
        // ----------------------------------------------------------------
        if (selecao == 2) {

            // Verifica se houve empate no total
            if (total_carta_1 == total_carta_2) {
                printf("| Empate ! \n");
            }

            // Vê quem tem a soma maior
            vencedor_rodada = (total_carta_1 > total_carta_2) ? "Carta 1" : "Carta 2"; 

            printf("Total %-20s :%.2f\n", nome_pais_1, total_carta_1);
            printf("Total %-20s :%.2f", nome_pais_2, total_carta_2);

            
            printf("%s", estilo); 
            printf("| Rodada vencedora é : %s \n",vencedor_rodada);
            
        }
    }  // Fim do if (validador == 1)

    return 0;     
}
