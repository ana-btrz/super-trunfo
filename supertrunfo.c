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

    
int main()
    // Declaração e leitura dos dados da Carta 1
    Carta carta1;
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta1.estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    getchar(); // Consumir a nova linha
    printf("Nome da Cidade: ");
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    carta1.densidadePopulacional = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    carta1.pibPerCapita = calcularPIBPerCapita(carta1.pib, carta1.populacao);
    printf("\n");


    // Declaração e leitura dos dados da Carta 2
    Carta carta2;
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", carta2.estado);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    getchar(); // Consumir a nova linha
    printf("Nome da Cidade: ");
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    carta2.densidadePopulacional = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    carta2.pibPerCapita = calcularPIBPerCapita(carta2.pib, carta2.populacao);
    printf("\n");
    

     int escolha;
    return 0;
}