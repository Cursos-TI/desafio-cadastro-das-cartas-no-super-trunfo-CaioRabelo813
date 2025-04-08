#include <stdio.h>

// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Definindo a estrutura das cartas
struct carta {
    char estado[50]; // Nome do estado
    int codigo; // Código da carta
    char cidade[50]; // Nome da cidade
    int populacao; // População (corrigido o nome)
    float area; // Área em km²
    float pib; // PIB
    int pontosturisticos; // Número de pontos turísticos
};

int main(){
    // Desafio Super Trunfo - Países
    printf("Desafio Super Trunfo - Países\n");

    struct carta carta1, carta2;

    // Solicitar e capturar as informações da primeira carta
    printf("Insira as informações da primeira cidade:\n");
    printf("Código da cidade: ");
    scanf("%d", &carta1.codigo);
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Cidade: ");
    scanf("%s", carta1.cidade);
    printf("Popula");
}

