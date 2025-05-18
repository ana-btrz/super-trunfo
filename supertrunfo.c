#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para atoi e atof
int main() {
    // Declaração das variáveis para a carta 1 - novas propriedades
    typedef struct {}
    char estado[3];;
    char codigo[4];       // 3 caracteres + '\0'
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(unsigned long int populacao, float area) {
    if (area > 0) {
        return (float)populacao / area;
    } else {
        return 0;
    }
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, unsigned long int populacao) {
    if (populacao > 0) {
        return pib * 1000000000.0 / populacao; // PIB em reais
    } else {
        return 0;
    }
}

    // Entrada de dados para a carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf(" %s", estado1);
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

    // Entrada de dados para a carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf(" %s", estado2);
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

    // Escolha do atributo para comparação (modifique a string para testar outros atributos)
    char atributoComparacao[] = "PIB per capita";

    printf("Comparação de cartas (Atributo: %s):\n", atributoComparacao);

    if (strcmp(atributoComparacao, "População") == 0) {
        printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: As cartas empataram!\n");
        }
    } else if (strcmp(atributoComparacao, "Área") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: As cartas empataram!\n");
        }
    } else if (strcmp(atributoComparacao, "PIB") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: As cartas empataram!\n");
        }
    } else if (strcmp(atributoComparacao, "Densidade Populacional") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, densidadePopulacional1);
        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (densidadePopulacional2 < densidadePopulacional1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: As cartas empataram!\n");
        }
    } else if (strcmp(atributoComparacao, "PIB per capita") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: As cartas empataram!\n");
        }
    } else {
        printf("Atributo de comparação inválido!\n");
    }

    return 0;
}