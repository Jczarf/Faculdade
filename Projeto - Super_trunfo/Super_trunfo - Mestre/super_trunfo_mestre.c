#include <stdio.h>

int main () {

/*

Aluno : Júlio Cézar Freitas De Oliveira

Desafio de código : Super Trunfo - Aventureiro. 

*/

//Declaração de váriaveis.

const int qtd_cartas = 2 ; 
int identificador_carta , comparador ;
char estado_1 , estado_2 ;
char codigo_carta_1 [5], codigo_carta_2 [5] ;
char nome_cidade_1 [18], nome_cidade_2[18];
unsigned long int qtd_populacao_1, qtd_populacao_2 ;
float area_km_1, area_km_2 ;
float pib_carta_1, pib_carta_2 ;
int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2 ;
float calc_densidade_populacional , calc_pib_per_capita ; 
float pib_capita_carta_1 , pib_capita_carta_2 ; 
float densidade_carta_1 , densidade_carta_2 ;
float super_poder_carta_1 , super_poder_carta_2 ;
const float casting_bilhao = 1000000000 ; 
const char validacao [30] = "Cadastro com sucesso!" ;

//Entrada do úsuario.

//Carta 1 :

printf("Carta 1 :\n");

printf("Digite o estado da primeira carta (A-H): ");
scanf(" %c", &estado_1);

printf("Digite o código da primeira carta : ");
scanf(" %s", codigo_carta_1);

printf("Digite o nome da primeira cidade : ");
scanf(" %18[^\n]", nome_cidade_1);

printf("Digite a quantidade da população da primeira carta : ");
scanf(" %ld", &qtd_populacao_1);

printf("Digite a área em km2 da primeira carta : ");
scanf(" %f", &area_km_1);

printf("Digite o PIB da primeira carta : ");
scanf(" %f", &pib_carta_1);

printf("Digite o número de pontos turísticos da primeira carta : ");
scanf(" %d", &qtd_pontos_turisticos_1);

printf("%s\n", validacao);


//carta 2 : 

printf("\nCarta 2 : \n");

printf("Digite o estado da segunda carta (A-H): ");
scanf(" %c", &estado_2);

printf("Digite o código da segunda carta : ");
scanf(" %s", codigo_carta_2);

printf("Digite o nome da segunda cidade : ");
scanf(" %18[^\n]", nome_cidade_2);

printf("Digite a quantidade da população da segunda carta : ");
scanf(" %ld", &qtd_populacao_2);

printf("Digite a área em km2 da segunda carta : ");
scanf(" %f", &area_km_2) ;

printf("Digite o PIB da segunda carta : ");
scanf(" %f", &pib_carta_2) ;

printf("Digite o número de pontos turísticos da segunda carta : ") ;
scanf(" %d", &qtd_pontos_turisticos_2) ;

printf("%s\n",validacao) ;

//Aqui é a seção onde todos os cálculos para cumprir os critérios do desafio 2

//carta 1 :


calc_densidade_populacional  = qtd_populacao_1 / area_km_1 ;
densidade_carta_1 = calc_densidade_populacional ; 

pib_carta_1 *= casting_bilhao ;

calc_pib_per_capita = pib_carta_1 /  qtd_populacao_1 ;  
pib_capita_carta_1 = calc_pib_per_capita ;

pib_carta_1 /= casting_bilhao ;

super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1) - densidade_carta_1 ;



//Carta 2 : 

calc_densidade_populacional  = qtd_populacao_2 / area_km_2 ;
densidade_carta_2 = calc_densidade_populacional ; 

pib_carta_2 *= casting_bilhao ;

calc_pib_per_capita = pib_carta_2 /qtd_populacao_2 ;  
pib_capita_carta_2 = calc_pib_per_capita ;

pib_carta_2 /= casting_bilhao ;

super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2 + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2) - densidade_carta_2 ;


//Saída para o úsuario, cartas cadastradas.

//Primeira carta : 

printf("\nCarta 1: \n");
printf("Estado : %c \n", estado_1);
printf("Código : %s \n", codigo_carta_1);
printf("Nome da cidade : %s \n", nome_cidade_1);
printf("População : %lu \n", qtd_populacao_1);
printf("Área : %.2f km2 \n", area_km_1);
printf("PIB: R$:%.2f bilhões de reais \n", pib_carta_1);
printf("Número de pontos turísticos : %d \n", qtd_pontos_turisticos_1);
printf("Densidade Populacional : %.2f \n", densidade_carta_1);
printf("PIB per capita : %.2f \n", pib_capita_carta_1);
printf("Super poder : %.2f \n " , super_poder_carta_1);


//segunda carta :

printf("\nCarta 2: \n");
printf("Estado : %c \n", estado_2);
printf("Código : %s \n", codigo_carta_2);
printf("Nome da cidade : %s \n", nome_cidade_2);
printf("População : %lu \n", qtd_populacao_2);
printf("Área : %.2f km2 \n", area_km_2);
printf("PIB: R$:%.2f bilhoẽs de reais \n",pib_carta_2);
printf("Números de pontos turísticos : %d \n", qtd_pontos_turisticos_2);
printf("Densidade Populacional : %.2f \n", densidade_carta_2);
printf("PIB per capita : %.2f \n", pib_capita_carta_2);
printf("Super poder : %.2f \n " , super_poder_carta_2);

//calculos das comparações : 

printf("\nComparações das cartas : \n") ;

identificador_carta = qtd_cartas ; 

comparador = qtd_populacao_1 > qtd_populacao_2 ; 
identificador_carta = qtd_cartas - comparador ;
printf ("População : Carta %d venceu (%d)\n" , identificador_carta , comparador ) ; 

comparador = area_km_1 > area_km_2 ; 
identificador_carta = qtd_cartas - comparador ;
printf ("Área : Carta %d venceu (%d)\n" , identificador_carta , comparador ) ; 

comparador = pib_carta_1 > pib_carta_2 ;
identificador_carta = qtd_cartas - comparador ;
printf ("PIB : Carta %d venceu (%d)\n" , identificador_carta , comparador ) ; 

comparador = qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2 ;
identificador_carta = qtd_cartas - comparador ;
printf ("Pontos Turísticos : Carta %d venceu (%d)\n" , identificador_carta , comparador ) ; 

comparador = densidade_carta_1 < densidade_carta_2 ; 
identificador_carta = qtd_cartas - comparador ;
printf ("Densidade Populacional : Carta %d venceu (%d)\n" , identificador_carta , comparador ) ; 

comparador = pib_capita_carta_1 > pib_capita_carta_2 ; 
identificador_carta = qtd_cartas - comparador ;
printf ("PIB per Capita : Carta %d venceu (%d)\n" , identificador_carta , comparador ) ; 

comparador = super_poder_carta_1 > pib_capita_carta_2 ; 
identificador_carta = qtd_cartas - comparador ;
printf ("Super poder : Carta %d venceu (%d)\n" , identificador_carta , comparador ) ; 


return 0;


}
