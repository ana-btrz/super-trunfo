#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para atoi e atof
// Declaração das variáveis para a carta 1 - novas propriedades
 typedef struct {
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

    
int main() {
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
     do {
        printf("\n--- Super Trunfo de Cidades ---\n");
        printf("Escolha o atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("0 - Sair\n");
        printf("Sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: // Comparar por População
                printf("\nComparando por População:\n");
                printf("%s (%s): %lu\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
                printf("%s (%s): %lu\n", carta2.nomeCidade, carta2.estado, carta2.populacao);
                if (carta1.populacao > carta2.populacao) {
                    printf("Resultado: %s venceu!\n", carta1.nomeCidade);
                } else if (carta2.populacao > carta1.populacao) {
                    printf("Resultado: %s venceu!\n", carta2.nomeCidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 2: // Comparar por Área
                printf("\nComparando por Área:\n");
                printf("%s (%s): %.2f km²\n", carta1.nomeCidade, carta1.estado, carta1.area);
                printf("%s (%s): %.2f km²\n", carta2.nomeCidade, carta2.estado, carta2.area);
                if (carta1.area > carta2.area) {
                    printf("Resultado: %s venceu!\n", carta1.nomeCidade);
                } else if (carta2.area > carta1.area) {
                    printf("Resultado: %s venceu!\n", carta2.nomeCidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 3: // Comparar por PIB
                printf("\nComparando por PIB:\n");
                printf("%s (%s): %.2f bilhões de reais\n", carta1.nomeCidade, carta1.estado, carta1.pib);
                printf("%s (%s): %.2f bilhões de reais\n", carta2.nomeCidade, carta2.estado, carta2.pib);
                if (carta1.pib > carta2.pib) {
                    printf("Resultado: %s venceu!\n", carta1.nomeCidade);
                } else if (carta2.pib > carta1.pib) {
                    printf("Resultado: %s venceu!\n", carta2.nomeCidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 4: // Comparar por Pontos Turísticos
                printf("\nComparando por Pontos Turísticos:\n");
                printf("%s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.pontosTuristicos);
                printf("%s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.pontosTuristicos);
                if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                    printf("Resultado: %s venceu!\n", carta1.nomeCidade);
                } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                    printf("Resultado: %s venceu!\n", carta2.nomeCidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 5: // Comparar por Densidade Populacional
                printf("\nComparando por Densidade Populacional:\n");
                printf("%s (%s): %.2f hab/km²\n", carta1.nomeCidade, carta1.estado, carta1.densidadePopulacional);
                printf("%s (%s): %.2f hab/km²\n", carta2.nomeCidade, carta2.estado, carta2.densidadePopulacional);
                if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                    printf("Resultado: %s venceu!\n", carta1.nomeCidade);
                } else if (carta2.densidadePopulacional < carta1.densidadePopulacional) {
                    printf("Resultado: %s venceu!\n", carta2.nomeCidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 6: // Comparar por PIB per Capita
                printf("\nComparando por PIB per Capita:\n");
                printf("%s (%s): %.2f reais\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
                printf("%s (%s): %.2f reais\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);
                if (carta1.pibPerCapita > carta2.pibPerCapita) {
                    printf("Resultado: %s venceu!\n", carta1.nomeCidade);
                } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
                    printf("Resultado: %s venceu!\n", carta2.nomeCidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 0:
                printf("\nSaindo do Super Trunfo.\n");
                break;

            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (escolha != 0);
    
    return 0;
}