#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a carta 1 - novas propriedades
    char estado1;
    char codigo1[4];       // 3 caracteres + '\0'
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada de dados para a carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao1); // Usar %lu para unsigned long int
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n"); // Linha em branco

    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000.0 / populacao1; // PIB em reais

     // Cálculo do Super Poder para a Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000.0 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    // Entrada de dados para a carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao2); // Usar %lu para unsigned long int
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n"); // Linha em branco

    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000.0 / populacao2; // PIB em reais

    // Cálculo do Super Poder para a Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000.0 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // Exibição dos dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    // Exibição dos dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das Cartas
    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 2, densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}
