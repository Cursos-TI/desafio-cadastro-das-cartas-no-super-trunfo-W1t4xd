#include <stdio.h>

int main(){
    // Variáveis para a carta 1
    char Estado[1];
    char codigo_carta1[4];
    char cidade[15];
    int populacao;
    float area;
    float pib;
    int qtdpontosturisticos;

    // Variáveis para a carta 2
    char Estado2[1];
    char codigo_carta2[4];
    char cidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int qtdpontosturisticos2;

    printf("Iniciando pela carta 1: \n\n");

    // Escolha do estado para a carta 1
    printf("Digite uma letra de A a H: ");
    scanf("%s", Estado);
    printf("Certo, a letra escolhida foi: %s\n", Estado);

    // Escolha do código da carta 1
    printf("Agora que escolheu o estado, vamos registrar o código da carta.\n");
    printf("Para o código da carta, você deve Digitar uma letra seguida de números. Ex: A01, A02...\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta1);
    printf("Ótimo! O código escolhido foi: %s\n\n", codigo_carta1);

    // Escolha da cidade para a carta 1
    printf("Certo, nós já temos o Estado, que é: %s, e também temos o código da carta: %s. Agora, vamos registrar a cidade.\n", Estado, codigo_carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Beleza, ótima escolha. A cidade escolhida foi: %s\n\n", cidade);

    // População da cidade para a carta 1
    printf("Certo, sabendo que a cidade escolhida foi: %s, nos diga agora a população dessa cidade.\n", cidade);
    printf("Digite aqui qual é a população da cidade escolhida: ");
    scanf("%i", &populacao);
    printf("Rapaz, %s tem muita gente mesmo hein... %i, não é pouca coisa, estamos impressionados! \n\n", cidade, populacao);

    // Área da cidade para a carta 1
    printf("Nos informe agora, a área da cidade em km².\n");
    printf("Área: ");
    scanf("%f", &area);
    printf("Nossa, que cidade grande hein... %.2f é muita coisa!!\n\n", area);

    // PIB da cidade para a carta 1
    printf("Agora, nós queremos saber qual o PIB dessa cidade. \n");
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Nossa, que cidade grande hein... %.1f é muita coisa!!\n\n", pib);

    // Quantidade de pontos turísticos para a carta 1
    printf("Agora, nos diga quantos pontos turísticos há nessa cidade.\n");
    printf("Digite aqui quantos pontos turísticos há: ");
    scanf("%i", &qtdpontosturisticos);
    printf("Nossa! %s deve ter muitos turistas, né?, %i pontos turísticos, %s deve ser uma cidade bem grande...\n\n", cidade, qtdpontosturisticos, cidade);    

    // Resumo da carta 1
    printf("Certo então vamos revisar sua carta 1: \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\nÁrea: %.2f\nPIB: %.1f\nQuantidade de pontos turísticos: %i\n\n", 
           Estado, codigo_carta1, cidade, populacao, area, pib, qtdpontosturisticos);

    // Agora, iniciando a carta 2
    printf("\nIniciando pela carta 2: \n\n");

    // Escolha do estado para a carta 2
    printf("Digite uma letra de A a H: ");
    scanf("%s", Estado2);
    printf("Certo, a letra escolhida foi: %s\n", Estado2);

    // Escolha do código da carta 2
    printf("Agora que escolheu o estado, vamos registrar o código da carta.\n");
    printf("Para o código da carta, você deve Digitar uma letra seguida de números. Ex: A01, A02...\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta2);
    printf("Ótimo! O código escolhido foi: %s\n\n", codigo_carta2);

    // Escolha da cidade para a carta 2
    printf("Certo, nós já temos o Estado, que é: %s, e também temos o código da carta: %s. Agora, vamos registrar a cidade.\n", Estado2, codigo_carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Beleza, ótima escolha. A cidade escolhida foi: %s\n\n", cidade2);

    // População da cidade para a carta 2
    printf("Certo, sabendo que a cidade escolhida foi: %s, nos diga agora a população dessa cidade.\n", cidade2);
    printf("Digite aqui qual é a população da cidade escolhida: ");
    scanf("%i", &populacao2);
    printf("Rapaz, %s tem muita gente mesmo hein... %i, não é pouca coisa, estamos impressionados! \n\n", cidade2, populacao2);

    // Área da cidade para a carta 2
    printf("Nos informe agora, a área da cidade em km².\n");
    printf("Área: ");
    scanf("%f", &area2);
    printf("Nossa, que cidade grande hein... %.2f é muita coisa!!\n\n", area2);

    // PIB da cidade para a carta 2
    printf("Agora, nós queremos saber qual o PIB dessa cidade. \n");
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Nossa, que cidade grande hein... %.1f é muita coisa!!\n\n", pib2);

    // Quantidade de pontos turísticos para a carta 2
    printf("Agora, nos diga quantos pontos turísticos há nessa cidade.\n");
    printf("Digite aqui quantos pontos turísticos há: ");
    scanf("%i", &qtdpontosturisticos2);
    printf("Nossa! %s deve ter muitos turistas, né?, %i pontos turísticos, %s deve ser uma cidade bem grande...\n\n", cidade2, qtdpontosturisticos2, cidade2);    

    // Resumo da carta 2
    printf("Certo então vamos revisar sua carta 2: \n");
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %i\nÁrea: %.2f\nPIB: %.1f\nQuantidade de pontos turísticos: %i\n", 
           Estado2, codigo_carta2, cidade2, populacao2, area2, pib2, qtdpontosturisticos2);
    
    return 0;
}
