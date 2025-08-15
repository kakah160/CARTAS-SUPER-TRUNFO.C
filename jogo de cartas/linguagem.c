#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");

    char estado[10];
    char codigo [5];
    char cidade [50];
    int população;
    int pontosTuristicos;
    float area;
    float pib;


    // Variáveis da Carta 1
    char estado1[10], codigo1[5], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2[10], codigo2[5], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // Entrada de dados - Carta 1
    printf("\n--- Carta 1 ---\n");

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Total de habitantes: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Total de habitantes: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição das cartas
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\nCodigo: %s%s\nCidade: %s\n", estado1, estado1, codigo1, cidade1);
    printf("Populacao: %d\nArea: %.2f km²\nPIB: %.2f\nPontos Turisticos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", densidade1, pibPerCapita1, superPoder1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\nCodigo: %s%s\nCidade: %s\n", estado2, estado2, codigo2, cidade2);
    printf("Populacao: %d\nArea: %.2f km²\nPIB: %.2f\nPontos Turisticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", densidade2, pibPerCapita2, superPoder2);

    // Comparações
    printf("\n===== Comparacao de Cartas =====\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

// Professor, espero que goste, se tiver algo incorreto poderia me falar por gentileza? fiquei em duvida em algumas coisas espero ter acertado. :)
//obs: fiz no visual studio primeiro pois tive dificuldade no github ai copiei e colei 