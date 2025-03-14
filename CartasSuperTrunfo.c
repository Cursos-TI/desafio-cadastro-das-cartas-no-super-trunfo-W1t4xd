#include <stdio.h>

int main() {
    // Variáveis para a carta 1
    char Estado[1];
    char codigo_carta1[4];
    char cidade[15];
    unsigned long int populacao;  
    float area;
    float pib;
    int qtdpontosturisticos;

    // Variáveis para a carta 2
    char Estado2[1];
    char codigo_carta2[4];
    char cidade2[15];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int qtdpontosturisticos2;
    
    printf("Iniciando pela carta 1: \n\n");
    printf("Digite uma letra de A a H para o estado da carta 1: ");
    scanf("%s", Estado);
    printf("Certo, a letra escolhida foi: %s\n", Estado);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade para a carta 1: ");
    scanf("%s", cidade);

    printf("Digite a população da cidade para a carta 1: ");
    scanf("%lu", &populacao);
    printf("População: %lu\n", populacao);

    printf("Digite a área da cidade em km² para a carta 1: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade para a carta 1: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos para a carta 1: ");
    scanf("%d", &qtdpontosturisticos);

    float densidade = (float)populacao / area;
    float pibpercapita = pib / populacao;

    // Entradas para a carta 2
    printf("\nIniciando pela carta 2: \n\n");
    printf("Digite uma letra de A a H para o estado da carta 2: ");
    scanf("%s", Estado2);
    printf("Certo, a letra escolhida foi: %s\n", Estado2);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade para a carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade para a carta 2: ");
    scanf("%lu", &populacao2); 
    printf("População: %lu\n", populacao2);

    printf("Digite a área da cidade em km² para a carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade para a carta 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos para a carta 2: ");
    scanf("%d", &qtdpontosturisticos2);

    // Cálculos para a carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // Super Poder de cada carta
    float superPoder1 = (float)populacao + area + pib + qtdpontosturisticos + (1.0f / densidade);
    float superPoder2 = (float)populacao2 + area2 + pib2 + qtdpontosturisticos2 + (1.0f / densidade2);

    // Exibindo os resultados
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);

    // Comparação de Área
    printf("Área: Carta 1 venceu (%d)\n", area > area2);

    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", qtdpontosturisticos > qtdpontosturisticos2);

    // Comparação de Densidade Populacional
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade2 < densidade);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita > pibpercapita2);

    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
