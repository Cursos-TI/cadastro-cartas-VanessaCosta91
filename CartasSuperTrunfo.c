#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, cod_carta1[4], nome_cidade1[30];
    int populacao1, n_pontos_turisticos1;
    float area1, pib1;
    float densidade_pop1, pib_per_capita1;

    char estado2, cod_carta2[4], nome_cidade2[30];
    int populacao2, n_pontos_turisticos2;
    float area2, pib2;
    float densidade_pop2, pib_per_capita2;

  // Área para entrada de dados
   printf("Vamos começar o jogo. Insira duas cartas, seguindo o passo a passo a seguir: \n\n");

    /* Carta 1 */
    printf("Carta 1 \nDigite a letra do Estado (A - H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", &cod_carta1);

    printf("Qual nome da cidade?  ");
    scanf("%s", &nome_cidade1);

    printf("Quantos habitantes a cidade possui?  ");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade (em km²)?  ");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade?  ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos a cidade possui?  ");
    scanf("%d", &n_pontos_turisticos1);

    densidade_pop1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 / (float) populacao1;

    /* Carta 2 */
    printf("\nCarta 2 \nDigite a letra do Estado (A - H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01):  ");
    scanf("%s", &cod_carta2);

    printf("Qual nome da cidade?  ");
    scanf("%s", &nome_cidade2);

    printf("Quantos habitantes a cidade possui?  ");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade (em km²)?  ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?  ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos a cidade possui?  ");
    scanf("%d", &n_pontos_turisticos2);

    densidade_pop2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 / (float) populacao2;

  
  // Área para exibição dos dados da cidade
    printf("\n*** Aqui estão as cartas ***\n");

    /* Mostrar cartas inseridas */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", n_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
  
    return 0;
} 