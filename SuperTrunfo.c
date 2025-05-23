#include <stdio.h>

// Definição da estrutura de uma carta
struct Carta {
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    // Dados da carta 1 - Gravatá
    sprintf(carta1.estado, "PE");
    sprintf(carta1.codigo, "PE01");
    sprintf(carta1.nomeCidade, "Gravata");
    carta1.populacao = 150000;
    carta1.area = 500.0;
    carta1.pib = 1000000000.0;
    carta1.pontosTuristicos = 100;
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Dados da carta 2 - Recife
    sprintf(carta2.estado, "PE");
    sprintf(carta2.codigo, "PE02");
    sprintf(carta2.nomeCidade, "Recife");
    carta2.populacao = 1653461;
    carta2.area = 218.0;
    carta2.pib = 5000000000.0;
    carta2.pontosTuristicos = 120;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Impressão dos dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    // Impressão dos dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}
