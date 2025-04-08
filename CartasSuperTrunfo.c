#include <stdio.h>
int main(){

// Desafio Super Trunfo - Países 

printf("Desafio Super Trunfo - Países\n");
return 0;
}

// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
// Definindo a estrutura das cartas
struct Cart{
char estado[50]; // Nome do estado
int codigo; // Código da carta
char cidade[50]; // Nome da cidade
int populcao; // População
float area; // Área em km²
float pib; // PIB
int pontosturisticos // Números de pontos turísticos
};

// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

int main(){
struct Carta carta1, carta2;
// Solicitar e capturar as informações da primeira carta
printf("Insira as informações da primeira cidade:\n");
printf("Código da cidade: ");
scanf("%d", &carta1.codigo);
printf("Estado: ");
scanf("%s", carta1.estado);
printf("Cidade: ");
scanf("%s", carta1.cidade);
printf("População: ");
scanf("%d", &carta1.populacao);
printf("Área (em km²): ");
scanf("%f", &carta1.area);
printf("PIB: ");
scanf("%f", &carta1.pib);
printf("Número de pontos turísticos: ");
scanf("%d", &carta1.pontosTuristicos)
// Solicitar e capturar as informações da segunda carta
printf("Insira as informações da segunda cidade:\n");
printf("Código da cidade: ");
scanf("%d", &carta2.codigo);
printf("Estado: ");
scanf("%s", carta2.estado);
printf("Cidade: ");
scanf("%s", carta2.cidade);
printf("População: ");
scanf("%d", &carta2.populacao);
printf("Área (em km²): ");
scanf("%f", &carta2.area);
printf("PIB: ");
scanf("%f", &carta2.pib);
printf("Número de pontos turísticos: ");
scanf("%d", &carta2.pontosTuristicos);

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.
// Imprimir as informações para verificar
printf("\nInformações da carta 1:\n");
printf("Código: %d, Estado: %s, Cidade: %s, População: %d, Área: %.2f km², PIB: %.2f, Pontos turísticos: %d\n",
        carta1.codigo, carta1.estado, carta1.cidade, carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos);

printf("\nInformações da carta 2:\n");
printf("Código: %d, Estado: %s, Cidade: %s, População: %d, Área: %.2f km², PIB: %.2f, Pontos turísticos: %d\n",
        carta2.codigo, carta2.estado, carta2.cidade, carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos);
    return 0;
}
