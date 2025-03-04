#include <stdio.h>

int main() {
    // Variáveis da primeira carta 
    char Estado[1];
    char codigo_carta1[4];
    char cidade[15];
    float populacao;
    float area;
    float pib;
    int qtdpontosturisticos;

    // Variáveis da segunda carta
    char Estado2[1];
    char codigo_carta2[4];
    char cidade2[15];
    float populacao2;
    float area2;
    float pib2;
    int qtdpontosturisticos2;

    printf("Iniciando pela carta 1: \n\n");

    // Carta 1
    printf("Digite uma letra de A a H para o estado da carta 1: ");
    scanf("%s", Estado);
    printf("Certo, a letra escolhida foi: %s\n", Estado);

    printf("Agora que escolheu o estado, vamos registrar o código da carta 1.\n");
    printf("Para o código da carta, você deve Digitar uma letra seguida de números. Ex: A01, A02...\n");
    printf("Digite o código da carta 1: ");
    scanf("%s", codigo_carta1);
    printf("Ótimo! O código escolhido foi: %s\n\n", codigo_carta1);

    printf("Digite o nome da cidade para a carta 1: ");
    scanf("%s", cidade);
    printf("Beleza, ótima escolha. A cidade escolhida foi: %s\n\n", cidade);

    printf("Digite a população da cidade para a carta 1: ");
    scanf("%f", &populacao);
    printf("Rapaz, %s tem muita gente mesmo hein... %0.3f, não é pouca coisa, estamos impressionados! \n\n", cidade, populacao);

    printf("Digite a área da cidade em km² para a carta 1: ");
    scanf("%f", &area);
    printf("Nossa, que cidade grande hein... %.2f é muita coisa!!\n\n", area);

    printf("Digite o PIB da cidade para a carta 1: ");
    scanf("%f", &pib);
    printf("Nossa, que cidade grande hein... %.3f é muita coisa!!\n\n", pib);

    printf("Digite a quantidade de pontos turísticos para a carta 1: ");
    scanf("%d", &qtdpontosturisticos);
    printf("Nossa! %s deve ter muitos turistas, né?, %d pontos turísticos, %s deve ser uma cidade bem grande...\n\n", cidade, qtdpontosturisticos, cidade);

    // Densidade populacional da carta 1
    float densidade = populacao / area;
    printf("Densidade populacional da cidade: %0.2f\n", densidade);

    // PIB per capita da carta 1
    float pibpercapita = pib / populacao;
    printf("O PIB per capita da sua cidade é: %0.2f\n", pibpercapita);

    // Resumo da carta 1
    printf("Certo então vamos revisar sua carta 1: \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %0.3f\nÁrea: %.2f\nPIB: %0.3f\nQuantidade de pontos turísticos: %d\nDensidade populacional: %0.2f\nPIB per capita: %0.2f\n\n", 
           Estado, codigo_carta1, cidade, populacao, area, pib, qtdpontosturisticos, densidade, pibpercapita);

    // Carta 2
    printf("\nIniciando pela carta 2: \n\n");

    // Escolha do estado para a carta 2
    printf("Digite uma letra de A a H para o estado da carta 2: ");
    scanf("%s", Estado2);
    printf("Certo, a letra escolhida foi: %s\n", Estado2);

    // Escolha do código da carta 2
    printf("Agora que escolheu o estado, vamos registrar o código da carta 2.\n");
    printf("Para o código da carta, você deve Digitar uma letra seguida de números. Ex: A01, A02...\n");
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo_carta2);
    printf("Ótimo! O código escolhido foi: %s\n\n", codigo_carta2);

    // Escolha da cidade para a carta 2
    printf("Digite o nome da cidade para a carta 2: ");
    scanf("%s", cidade2);
    printf("Beleza, ótima escolha. A cidade escolhida foi: %s\n\n", cidade2);

    // População da cidade para a carta 2
    printf("Digite a população da cidade para a carta 2: ");
    scanf("%f", &populacao2);
    printf("Rapaz, %s tem muita gente mesmo hein... %0.3f, não é pouca coisa, estamos impressionados! \n\n", cidade2, populacao2);

    // Área da cidade para a carta 2
    printf("Digite a área da cidade em km² para a carta 2: ");
    scanf("%f", &area2);
    printf("Nossa, que cidade grande hein... %.2f é muita coisa!!\n\n", area2);

    // PIB da cidade para a carta 2
    printf("Digite o PIB da cidade para a carta 2: ");
    scanf("%f", &pib2);
    printf("Nossa, que cidade grande hein... %.3f é muita coisa!!\n\n", pib2);

    // Quantidade de pontos turísticos para a carta 2
    printf("Digite a quantidade de pontos turísticos para a carta 2: ");
    scanf("%d", &qtdpontosturisticos2);
    printf("Nossa! %s deve ter muitos turistas, né?, %d pontos turísticos, %s deve ser uma cidade bem grande...\n\n", cidade2, qtdpontosturisticos2, cidade2);

    // Densidade populacional da carta 2
    float densidade2 = populacao2 / area2;
    printf("Densidade populacional da cidade: %0.2f\n", densidade2);

    // PIB per capita da carta 2
    float pibpercapita2 = pib2 / populacao2;
    printf("O PIB per capita da sua cidade é: %0.2f\n", pibpercapita2);

    // Resumo da carta 2
    printf("Certo então vamos revisar sua carta 2: \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %0.3f\nÁrea: %.2f\nPIB: %0.3f\nQuantidade de pontos turísticos: %d\nDensidade populacional: %0.2f\nPIB per capita: %0.2f\n", 
           Estado2, codigo_carta2, cidade2, populacao2, area2, pib2, qtdpontosturisticos2, densidade2, pibpercapita2);

    return 0;
}
