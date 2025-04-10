#include <stdio.h>

// Estrutura das cartas
struct carta {
    char codigo[10];           // Código da carta (ex: A01)
    char estado[50];           // Nome do estado
    char cidade[50];           // Nome da cidade
    int populacao;             // População
    float area;                // Área em km²
    double pib;                // PIB
    int pontosturisticos;      // Número de pontos turísticos
    float densidade;           // Densidade populacional
    float pibPerCapita;        // PIB per capita
};

int main() {
    struct carta carta1, carta2;

    // Nome do jogo
    printf("Desafio Super Trunfo - Países\n\n");

    // Carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Cidade: ");
    scanf("%s", carta1.cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosturisticos);

    printf("\n");

    // Carta 2
    printf("Cadastro da segunda carta:\n");
    printf("Código (ex: B03): ");
    scanf("%s", carta2.codigo);
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Cidade: ");
    scanf("%s", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosturisticos);

    // Cálculos
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao; // PIB em reais

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2lf bilhões de reais\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2lf bilhões de reais\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}