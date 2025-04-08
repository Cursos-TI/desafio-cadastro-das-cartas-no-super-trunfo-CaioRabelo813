#include <stdio.h>

// Estrutura das cartas
struct carta {
    char codigo[10];
    char estado[50];
    char cidade[50];
    int populacao;
    float area;
    double pib;
    int pontosturisticos;
};

int main() {
    struct carta carta1, carta2;

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
    printf("PIB: ");
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
    printf("PIB: ");
    scanf("%lf", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosturisticos);

    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2lf\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosturisticos);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2lf\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosturisticos);

    return 0;
}