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
    // /* 
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
    // */

        /* Para Fins de testes apenas (por preguiça de incluir dados a cada testes)
        strcpy(estado, "SP");
        strcpy(carta, "A01");
        strcpy(cidade, "SaoPaulo");
        populacao=12325000;
        kmArea= 1521.11;
        pib= 699.28;
        pontosTuristicos= 50;
    
        strcpy(estado2, "RJ");
        strcpy(carta2, "B02");
        strcpy(cidade2, "Rio de Janeiro");
        populacao2 = 6748000;
        kmArea2 = 1200.25;
        pib2 = 300.50;
        pontosTuristicos2 = 30;
        */
    
        
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

    printf("\n\n");
    //Variável para armazenar quantidade de pontos somados de cada carta
    int pontoscarta = 0;
    int pontoscarta2 =0; 
    /* Cada carta ganhará um ponto para cada atributo que vencer, com isso será apresentada no final a que efetuou mais pontos */
    
    printf("Efetuando comparação entre as duas cartas.\n");

    printf("Atributo comparado: Populacao.\n");
    printf("Carta 1: %s, %s: %u hab/km²\n", cidade,estado,populacao);
    printf("Carta 2: %s, %s: %u hab/km²\n", cidade2,estado2,populacao2);
    if( populacao > populacao2){
        printf("Carta 01 (%s,%s) Venceu!\n",cidade,estado);
        pontoscarta++;
    }else{
        printf("Carta 02 (%s,%s) Venceu!\n",cidade2,estado2);
        pontoscarta2++;
    }
    printf("\n"); //Quebra Extra de Linha

    printf("Atributo comparado: Area.\n");
    printf("Carta 1: %s, %s: %.2f km²\n", cidade,estado,kmArea);
    printf("Carta 2: %s, %s: %.2f km²\n", cidade2,estado2,kmArea2);
    if( kmArea > kmArea2){
        printf("Carta 01 (%s,%s) Venceu!\n",cidade,estado);
        pontoscarta++;
    }else{
        printf("Carta 02 (%s,%s) Venceu!\n",cidade2,estado2);
        pontoscarta2++;
    }
    printf("\n"); //Quebra Extra de Linha

    printf("Atributo comparado: PIB.\n");
    printf("Carta 1: %s, %s: %.2f Bilhoes de Reais\n", cidade,estado,pib);
    printf("Carta 2: %s, %s: %.2f Bilhoes de Reais\n", cidade2,estado2,pib2);
    if( pib > pib2){
        printf("Carta 01 (%s,%s) Venceu!\n",cidade,estado);
        pontoscarta++;
    }else{
        printf("Carta 02 (%s,%s) Venceu!\n",cidade2,estado2);
        pontoscarta2++;
    }
    printf("\n"); //Quebra Extra de Linha

    printf("Atributo comparado: Pontos Turisticos.\n");
    printf("Carta 1: %s, %s: %d\n", cidade,estado,pontosTuristicos);
    printf("Carta 2: %s, %s: %d\n", cidade2,estado2,pontosTuristicos2);
    if( pontosTuristicos > pontosTuristicos2){
        printf("Carta 01 (%s,%s) Venceu!\n",cidade,estado);
        pontoscarta++;
    }else{
        printf("Carta 02 (%s,%s) Venceu!\n",cidade2,estado2);
        pontoscarta2++;
    }
    printf("\n"); //Quebra Extra de Linha

    printf("Atributo comparado: Densidade Populacional.\n");
    printf("Carta 1: %s, %s: %.2f hab/km²\n", cidade,estado,densidadePop);
    printf("Carta 2: %s, %s: %.2f hab/km²\n", cidade2,estado2,densidadePop2);
    if( densidadePop2 > densidadePop){
        printf("Carta 01 (%s,%s) Venceu!\n",cidade,estado);
        pontoscarta++;
    }else{
        printf("Carta 02 (%s,%s) Venceu!\n",cidade2,estado2);
        pontoscarta2++;
    }
    printf("\n"); //Quebra Extra de Linha

    printf("Atributo comparado: PIB per Capita.\n");
    printf("Carta 1: %s, %s: %.2f hab/km²\n", cidade,estado,pibPerCap);
    printf("Carta 2: %s, %s: %.2f hab/km²\n", cidade2,estado2,pibPerCap2);
    if( pibPerCap > pibPerCap2){
        printf("Carta 01 (%s,%s) Venceu!\n",cidade,estado);
        pontoscarta++;
    }else{
        printf("Carta 02 (%s,%s) Venceu!\n",cidade2,estado2);
        pontoscarta2++;
    }
    printf("\n"); //Quebra Extra de Linha

    printf("Atributo comparado: Super.\n");
    printf("Carta 1: %s, %s: %.2f\n", cidade,estado,super_poder);
    printf("Carta 2: %s, %s: %.2f\n", cidade2,estado2,super_poder2);
    if( super_poder > super_poder2){
        printf("Carta 01 (%s,%s) Venceu!\n",cidade,estado);
        pontoscarta++;
    }else{
        printf("Carta 02 (%s,%s) Venceu!\n",cidade2,estado2);
        pontoscarta2++;
    }
    printf("\n"); //Quebra Extra de Linha
    if(pontoscarta>pontoscarta2){
        printf("Carta 1: %s, %s, venceu com: %d pontos!\n",cidade,estado,pontoscarta);
        printf("Carta 2 ficou com %d pontos",pontoscarta2);
    }else if (pontoscarta==pontoscarta2)
    {
        printf("Houve um empate:\nCarta 1: %d Pontos\nCarta 2: %d Pontos",pontoscarta,pontoscarta2);
    } else {
        printf("Carta 2: %s, %s, venceu com: %d pontos!",cidade2,estado2,pontoscarta2);
        printf("Carta 1 ficou com %d pontos",pontoscarta);
    }
    
}
