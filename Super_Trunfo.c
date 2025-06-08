#include <stdio.h>
#include <string.h> // Incluida para poder usar strcspn

int main(){
    
    // Variáveis de ambas as cartas:
    int pontosTuristicos, pontosTuristicos2;
    float kmArea, pib, kmArea2, pib2;
    char estado[3], carta[4], cidade[20], estado2[3], carta2[4], cidade2[20];
    unsigned long int populacao, populacao2; //Variáveis nivel mestre

    //Inclusão das variáveis solicitadas pelo nível Aventureiro
    float densidadePop,pibPerCap,densidadePop2,pibPerCap2;

    float super_poder, super_poder2; //Variávei de super poder para o nível mestre.

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
    printf("Dados para Carta 02: \n");
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
        
    //Calculos do Nível aventureiro, efetuando já antes do calculo a conversão dos valores para o tipo Float a ponto de não darem problemas.
    densidadePop = (float) populacao/kmArea; 
    pibPerCap = (pib*1000000000)/populacao; // Usando "*1000000000" para converter de Bilhoes para Reais
    densidadePop2 = (float) populacao2/kmArea2; 
    pibPerCap2 = (pib2*1000000000)/populacao2; //Usando "*1000000000" para converter de Bilhoes para Reais

    //Cálculos do Super Poder de cada carta: (Nivel Mestre)
    super_poder = populacao + kmArea + pib + pontosTuristicos + pibPerCap + (1/densidadePop);
    super_poder2 = populacao2 + kmArea2 + pib2 + pontosTuristicos2 + pibPerCap2 + (1/densidadePop2);

    // Exibição primeira carta após inserção:
    printf(" \n \n"); // Usando uma quebra de linha dupla apenas para separar um pouco mais a leitura da exibição.
    printf("Primeira Carta: \n");
    printf("Carta: %s \n", carta);
    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f Km² \n", kmArea);
    printf("PIB: %.2f Bilhoes de Reais \n", pib);
    printf("Pontos Turisticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePop);
    printf("PIB per capita: %.2f Reais \n", pibPerCap);
    printf("Super A: %.2f",super_poder);

    // Exibição segunda carta após inserção:
    printf("\n\nSegunda Carta: \n");
    printf("Carta: %s \n", carta2);
    printf("Estado: %s \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f Km² \n", kmArea2);
    printf("PIB: %.2f Bilhoes de Reais \n", pib2);
    printf("Pontos Turisticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePop2);
    printf("PIB per capita: %.2f Reais \n", pibPerCap2);
    printf("Super B: %.2f \n",super_poder2);

    // Escolha de 2 atributos para comparação:
    printf("\n\nEscolha dois atributos para comparar as cartas: \n");
    int attr1, attr2;
    printf("\nEscolha o primeiro atributo para comparar as cartas: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    scanf("%d", &attr1);

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar as cartas (diferente do primeiro): \n");
    for (int i = 1; i <= 5; i++) {
        if (i != attr1) {
            printf("%d - %s\n", i, i == 1 ? "População" : i == 2 ? "Área" : i == 3 ? "PIB" : i == 4 ? "Pontos Turísticos" : "Densidade Populacional");
        }
    }
    printf("Escolha uma opção: ");
    scanf("%d", &attr2);

    float valorCarta1Atributo1, valorCarta2Atributo1;
    float valorCarta1Atributo2, valorCarta2Atributo2;

    // Comparação do primeiro atributo
    switch (attr1) {
        case 1: // População
            valorCarta1Atributo1 = populacao;
            valorCarta2Atributo1 = populacao2;
            break;
        case 2: // Área
            valorCarta1Atributo1 = kmArea;
            valorCarta2Atributo1 = kmArea2;
            break;
        case 3: // PIB
            valorCarta1Atributo1 = pib;
            valorCarta2Atributo1 = pib2;
            break;
        case 4: // Pontos Turísticos
            valorCarta1Atributo1 = pontosTuristicos;
            valorCarta2Atributo1 = pontosTuristicos2;
            break;
        case 5: // Densidade Populacional
            valorCarta1Atributo1 = densidadePop;
            valorCarta2Atributo1 = densidadePop2;
            break;
    }

    // Comparação do primeiro atributo
    switch (attr2) {
        case 1: // População
            valorCarta1Atributo1 = populacao;
            valorCarta2Atributo1 = populacao2;
            break;
        case 2: // Área
            valorCarta1Atributo1 = kmArea;
            valorCarta2Atributo1 = kmArea2;
            break;
        case 3: // PIB
            valorCarta1Atributo1 = pib;
            valorCarta2Atributo1 = pib2;
            break;
        case 4: // Pontos Turísticos
            valorCarta1Atributo1 = pontosTuristicos;
            valorCarta2Atributo1 = pontosTuristicos2;
            break;
        case 5: // Densidade Populacional
            valorCarta1Atributo1 = densidadePop;
            valorCarta2Atributo1 = densidadePop2;
            break;
    }

    float somaCarta1 = valorCarta1Atributo1 + valorCarta1Atributo2;
    float somaCarta2 = valorCarta2Atributo1 + valorCarta2Atributo2;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", somaCarta1);
    printf("Carta 2: %.2f\n", somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("Carta 1 vence!\n");
    } else if (somaCarta1 < somaCarta2) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }
}
