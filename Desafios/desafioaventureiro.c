#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50] = "Escada", cidade2[50] = "Recife";

    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    int pontos1, pontos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

  // === Área para entrada de dados ===

    printf("Cadastro da Carta 1\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: %s\n", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: %s\n", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos2);

    // === Cálculo da densidade populacional (habitantes por km²) === 
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // === Cálculo do PIB per capita (riqueza média por habitante) ===
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // === Área para exibição dos dados da cidade ===

    printf("\n===== CARTA 1 =====\n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n===== CARTA 2 =====\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
return 0;
} 