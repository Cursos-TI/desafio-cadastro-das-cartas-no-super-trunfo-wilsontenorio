#include <stdio.h>
#include <string.h> // Incluida para poder usar strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis de ambas as cartas:
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float kmArea, pib, kmArea2, pib2;
    char estado[3], carta[4], cidade[20], estado2[3], carta2[4], cidade2[20];

    // Input da primeira carta:
    printf("Dados para Carta 01: \n");
    printf("Insira o Estado: ");
    scanf("%s", &estado);
    printf("Código da Carta: ");
    scanf("%s", &carta);
    getchar(); // Limpa o buffer do teclado após o último scanf
    printf("Nome da Cidade: ");
    fgets(cidade, sizeof(cidade), stdin); // Usando fgets para poder pegar o nome inteiro da cidade, devido a não ser possivel com scanf
    cidade[strcspn(cidade, "\n")] = '\0'; // Remove a quebra de linha (\n) colocada ao ler a string
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area em 'Km²': ");
    scanf("%f", &kmArea);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);
    getchar(); // Limpa o buffer do teclado após o último scanf

    // Input da Segunda carta:
    printf("\n Dados para Carta 02: \n");
    printf("Insira o Estado: ");
    scanf("%s", &estado2);
    printf("Código da Carta: ");
    scanf("%s", &carta2);
    getchar(); // Limpa o buffer do teclado após o último scanf
    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); // Usando fgets para poder pegar o nome inteiro da cidade, devido a não ser possivel com scanf
    cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove a quebra de linha (\n) colocada ao ler a string
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area em 'Km²': ");
    scanf("%f", &kmArea2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar(); // Limpa o buffer do teclado após o último scanf

    // Exibição primeira carta após inserção:
    printf(" \n \n"); // Usando uma quebra de linha dupla apenas para separar um pouco mais a leitura da exibição.
    printf("Primeira Carta: \n");
    printf("Carta: %s \n", carta);
    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f Km² \n", kmArea);
    printf("PIB: %.2f Bilhoes de Reais \n", kmArea);
    printf("Pontos Turisticos: %d \n \n", pontosTuristicos); // Usando 2 Quabras de Linhas para melhor visualização.

    // Exibição segunda carta após inserção:
    printf("Segunda Carta: \n");
    printf("Carta: %s \n", carta2);
    printf("Estado: %s \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f Km² \n", kmArea2);
    printf("PIB: %.2f Bilhoes de Reais \n", kmArea2);
    printf("Pontos Turisticos: %d", pontosTuristicos2);
    
    return 0;
}
