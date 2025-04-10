#include <stdio.h>

// Estrutura das cartas
struct carta {
    char codigo[10];
    char estado[50];
    char cidade[50];
    unsigned long int populacao;   // Agora como unsigned long int
    float area;
    double pib;                    // Em bilhões de reais
    int pontosturisticos;
    float densidade;
    float pibpercapita;
    float superpoder;
};

int main() {
    struct carta carta1, carta2;

    printf("Desafio Super Trunfo - Países\n\n");

    // Cadastro da Carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Cidade: ");
    scanf("%s", carta1.cidade);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosturisticos);

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da segunda carta:\n");
    printf("Código (ex: B03): ");
    scanf("%s", carta2.codigo);
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Cidade: ");
    scanf("%s", carta2.cidade);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosturisticos);

    // Cálculos
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    carta1.pibpercapita = (carta1.pib * 1000000000) / carta1.populacao;
    carta2.pibpercapita = (carta2.pib * 1000000000) / carta2.populacao;

    carta1.superpoder = (float)carta1.populacao + carta1.area + (float)(carta1.pib * 1000000000) +
                        carta1.pontosturisticos + carta1.pibpercapita + (1 / carta1.densidade);

    carta2.superpoder = (float)carta2.populacao + carta2.area + (float)(carta2.pib * 1000000000) +
                        carta2.pontosturisticos + carta2.pibpercapita + (1 / carta2.densidade);

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2lf bilhões de reais\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibpercapita);
    printf("Super Poder: %.2f\n", carta1.superpoder);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2lf bilhões de reais\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibpercapita);
    printf("Super Poder: %.2f\n", carta2.superpoder);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontosturisticos > carta2.pontosturisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade < carta2.densidade); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pibpercapita > carta2.pibpercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superpoder > carta2.superpoder);

    return 0;
}
