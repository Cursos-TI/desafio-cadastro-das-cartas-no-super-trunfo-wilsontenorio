#include <stdio.h>
#include <string.h> // Incluida para poder usar strcspn

int main(){
    
    // Variáveis de ambas as cartas:
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float kmArea, pib, kmArea2, pib2;
    char estado[3], carta[4], cidade[20], estado2[3], carta2[4], cidade2[20];

    //Inclusão das variáveis solicitadas pelo nível Aventureiro
    float densidadePop,pibPerCap,densidadePop2,pibPerCap2;

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

    //Calculos do Nível aventureiro, efetuando já antes do calculo a conversão dos valores para o tipo Float a ponto de não darem problemas.
    densidadePop = (float) populacao/kmArea; 
    pibPerCap = (float) (pib*1000000000)/populacao; // Usando "*1000000000" para converter de Bilhoes para Reais



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
    densidadePop2 = (float) populacao2/kmArea2; 
    pibPerCap2 = (float) (pib2*1000000000)/populacao2; //Usando "*1000000000" para converter de Bilhoes para Reais


    // Exibição primeira carta após inserção:
    printf(" \n \n"); // Usando uma quebra de linha dupla apenas para separar um pouco mais a leitura da exibição.
    printf("Primeira Carta: \n");
    printf("Carta: %s \n", carta);
    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f Km² \n", kmArea);
    printf("PIB: %.2f Bilhoes de Reais \n", kmArea);
    printf("Pontos Turisticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePop);
    printf("PIB per capita: %.2f Reais \n", pibPerCap);

    // Exibição segunda carta após inserção:
    printf("\nSegunda Carta: \n");
    printf("Carta: %s \n", carta2);
    printf("Estado: %s \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f Km² \n", kmArea2);
    printf("PIB: %.2f Bilhoes de Reais \n", kmArea2);
    printf("Pontos Turisticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePop2);
    printf("PIB per capita: %.2f Reais \n", pibPerCap2);

    // Comparação das cartas:
    printf("\nComparação das cartas: \n"); 
    int menucomparacao;
    printf("0 - Sair \n");
    printf("1 - Comparar Nome \n");
    printf("2 - Comparar Populacao \n");
    printf("3 - Comparar Area \n");
    printf("4 - Comparar PIB \n");
    printf("5 - Comparar Pontos Turísticos \n");
    printf("6 - Comparar Densidade Populacional \n");
    printf("Escolha uma opção: ");
    scanf("%d", &menucomparacao);
    switch (menucomparacao)  // Usando switch para comparar as cartas
    {
    case 1:
        printf("Comparando Nome das Cidades: \n");
        printf("Carta 1: %s \n", cidade);
        printf("Carta 2: %s \n", cidade2);
        break;
    case 2:
        printf("Comparando População: \n");
        printf("Carta 1: %d \n", populacao);
        printf("Carta 2: %d \n", populacao2);
        if (populacao > populacao2) {
            printf("A carta 1 tem mais população. \n");
            printf("Carta 1 vence! \n");
        } else if (populacao < populacao2) {
            printf("A carta 2 tem mais população. \n");
            printf("Carta 2 vence! \n");
        } else {
            printf("As cartas têm a mesma população. \n");
        }
        break;
    case 3:
        printf("Comparando Área: \n");
        printf("Carta 1: %.2f Km² \n", kmArea);
        printf("Carta 2: %.2f Km² \n", kmArea2);
        if (kmArea > kmArea2) {
            printf("A carta 1 tem uma área maior. \n");
            printf("Carta 1 vence! \n");
        } else if (kmArea < kmArea2) {
            printf("A carta 2 tem uma área maior. \n");
            printf("Carta 2 vence! \n");
        } else {
            printf("As cartas têm a mesma área. \n");
        }
        break;
    case 4:
        printf("Comparando PIB: \n");
        printf("Carta 1: %.2f Bilhões de Reais \n", pib);
        printf("Carta 2: %.2f Bilhões de Reais \n", pib2);
        if (pib > pib2) {
            printf("A carta 1 tem um PIB maior. \n");
            printf("Carta 1 vence! \n");
        } else if (pib < pib2) {
            printf("A carta 2 tem um PIB maior. \n");
            printf("Carta 2 vence! \n");
        } else {
            printf("As cartas têm o mesmo PIB. \n");
        }
        break;
    case 5:
        printf("Comparando Pontos Turísticos: \n");
        printf("Carta 1: %d \n", pontosTuristicos);
        printf("Carta 2: %d \n", pontosTuristicos2);
        if (pontosTuristicos > pontosTuristicos2) {
            printf("A carta 1 tem mais pontos turísticos. \n");
            printf("Carta 1 vence! \n");
        } else if (pontosTuristicos < pontosTuristicos2) {
            printf("A carta 2 tem mais pontos turísticos. \n");
            printf("Carta 2 vence! \n");
        } else {
            printf("As cartas têm o mesmo número de pontos turísticos. \n");
        }
        break;
    case 6:
        printf("Comparando Densidade Populacional: \n");
        printf("Carta 1: %.2f hab/km² \n", densidadePop);
        printf("Carta 2: %.2f hab/km² \n", densidadePop2);
        if (densidadePop < densidadePop2) {
            printf("A carta 1 tem uma densidade populacional menor. \n");
            printf("Carta 1 vence! \n");
        } else if (densidadePop > densidadePop2) {
            printf("A carta 2 tem uma densidade populacional maior. \n");
            printf("Carta 1 vence! \n");
        } else {
            printf("As cartas têm a mesma densidade populacional. \n");
        }
        break;
    case 0:
        printf("Saindo do programa. \n");
        return 0; // Encerra o programa
        break;
    default:
        printf("Opção inválida! \n");
        printf("Por favor, escolha uma opção válida. \n");
    }
}
