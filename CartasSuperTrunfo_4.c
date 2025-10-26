#include <stdio.h>

// Desafio Super Trunfo - Países

int main()
{

    printf("Desafio - Cartas Super Trunfo\n\n");

    // Variáveis para armazenar as propriedades das cidades
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    char nomeCidade1[20], estado1[2], codigoCarta1[4];
    char nomeCidade2[20], estado2[2], codigoCarta2[4];
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;

    // Define os atributos com base na escolha
    float atributo1, atributo2, segundoAtributo1, segundoAtributo2;
    char Atributo[30], segundoAtributo[30];
    int densidade = 0, segundaDensidade = 0; // 0 = maior vence, 1 = menor vence

    // Entrada de dados da carta 1
    printf("###### CARTA 1 ######\n\n");
    printf("Insira o estado (Uma letra entre A-H): ");
    scanf("%1s", estado1);

    printf("Insira a letra do estado com um número de 01 a 04 (exemplo: A01, G03): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área em quilometros: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da carta 2
    printf("\n\n###### CARTA 2 ######\n\n");
    printf("Insira o estado (Uma letra entre A-H): ");
    scanf("%1s", estado2);

    printf("Insira a letra do estado com um número de 01 a 04 (exemplo: A01, G03): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área em quilômetros: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n######################################################################\n\n");

    // Cálculo do PIB per capita e densidade populacional
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Exibição dos dados da carta 1
    printf("#####################\n");
    printf("~~~~~~ CARTA 1 ~~~~~~\n");
    printf("#####################\n");

    printf("\n• Estado: %s\n", estado1);
    printf("• Código da Carta: %s\n", codigoCarta1);
    printf("• Nome da Cidade: %s\n", nomeCidade1);
    printf("• População: %lu\n", populacao1);
    printf("• Área: %.2f km²\n", area1);
    printf("• PIB: R$%.2f\n", pib1);
    printf("• N° de pontos turísticos: %d\n", pontosTuristicos1);
    printf("• Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("• PIB per capita: R$%.2f\n\n", pibpercapita1);

    // Exibição dos dados da carta 2
    printf("\n#####################\n");
    printf("~~~~~~ CARTA 2 ~~~~~~\n");
    printf("#####################\n");

    printf("\n• Estado: %s\n", estado2);
    printf("• Código da Carta: %s\n", codigoCarta2);
    printf("• Nome da Cidade: %s\n", nomeCidade2);
    printf("• População: %lu\n", populacao2);
    printf("• Área: %.2f km²\n", area2);
    printf("• PIB: R$%.2f\n", pib2);
    printf("• N° de pontos turísticos: %d\n", pontosTuristicos2);
    printf("• Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("• PIB per capita: R$%.2f\n\n", pibpercapita2);

    printf("\n######################################################################\n\n");

    // Compara as cartas 1 e 2 e diz qual é a melhor em cada atributo
    printf("\n#####################\n");
    printf("~~~~ COMPARAÇÃO ~~~~\n");
    printf("#####################\n");

    if (populacao1 >= populacao2)
    {
        printf("\nPopulação: A Carta 1 possui mais habitantes!\n");
    }
    else
    {
        printf("\nPopulação: A Carta 2 possui mais habitantes!\n");
    }

    if (area1 >= area2)
    {
        printf("\nÁrea: A Carta 1 possui a área maior!\n");
    }
    else
    {
        printf("\nÁrea: A Carta 2 possui a área maior!\n");
    }

    if (pib1 >= pib2)
    {
        printf("\nPIB: A Carta 1 possui o maior PIB!\n");
    }
    else
    {
        printf("\nPIB: A Carta 2 possui o maior PIB!\n");
    }

    if (pontosTuristicos1 >= pontosTuristicos2)
    {
        printf("\nPontos Turisticos: A Carta 1 possui mais pontos turísticos!\n");
    }
    else
    {
        printf("\nPontos Turisticos: A Carta 2 possui mais pontos turísticos!\n");
    }

    if (densidade1 >= densidade2)
    {
        printf("\nDensidade: A Carta 1 possui maior densidade populacional!\n");
    }
    else
    {
        printf("\nDensidade: A Carta 2 possui maior densidade populacional!\n");
    }

    if (pibpercapita1 >= pibpercapita2)
    {
        printf("\nPIB Per Capita: A Carta 1 possui o maior PIB per Capita!\n");
    }
    else
    {
        printf("\nPIB Per Capita: A Carta 2 possui o maior PIB per Capita!\n\n");
    }

    // Escolha do atributo para comparação
    int opcao, opcao2;
    printf("\n\n######################################################################\n\n");
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        atributo1 = populacao1;
        atributo2 = populacao2;
        sprintf(Atributo, "População");
        break;

    case 2:
        atributo1 = area1;
        atributo2 = area2;
        sprintf(Atributo, "Área");
        break;

    case 3:
        atributo1 = pib1;
        atributo2 = pib2;
        sprintf(Atributo, "PIB");
        break;

    case 4:
        atributo1 = pontosTuristicos1;
        atributo2 = pontosTuristicos2;
        sprintf(Atributo, "Pontos Turísticos");
        break;

    case 5:
        atributo1 = densidade1;
        atributo2 = densidade2;
        sprintf(Atributo, "Densidade Demográfica");
        densidade = 1;
        break;

    default:
        printf("Opção inválida! Encerrando o programa.\n");
        return 0;
    }

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n\n");
    switch (opcao)
    {
    case 1:
        printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
        break;
    case 2:
        printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
        break;
    case 3:
        printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
        break;
    case 4:
        printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n");
        break;
    case 5:
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
        break;
    }

    printf("\nDigite a opção desejada: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao)
    {
        printf("\nVocê não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    switch (opcao2)
    {
    case 1:
        segundoAtributo1 = populacao1;
        segundoAtributo2 = populacao2;
        sprintf(segundoAtributo, "População");
        break;
    case 2:
        segundoAtributo1 = area1;
        segundoAtributo2 = area2;
        sprintf(segundoAtributo, "Área");
        break;
    case 3:
        segundoAtributo1 = pib1;
        segundoAtributo2 = pib2;
        sprintf(segundoAtributo, "PIB");
        break;
    case 4:
        segundoAtributo1 = pontosTuristicos1;
        segundoAtributo2 = pontosTuristicos2;
        sprintf(segundoAtributo, "Pontos Turísticos");
        break;
    case 5:
        segundoAtributo1 = densidade1;
        segundoAtributo2 = densidade2;
        sprintf(segundoAtributo, "Densidade Demográfica");
        segundaDensidade = 1;
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
    }

    printf("\n######################################################################\n\n");

    float soma1 = atributo1 + segundoAtributo1;
    float soma2 = atributo2 + segundoAtributo2;

    // Informa o resultado final
    printf("\n\n#####################\n");
    printf("~~~~~ RESULTADO ~~~~~\n");
    printf("#####################\n\n");

    printf("(Atributo: %s)\n\n", Atributo);
    printf("Carta 1 - %s (%s): %.0f\n", nomeCidade1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %.0f\n\n", nomeCidade2, estado2, atributo2);

    char *resultado = (atributo1 == atributo2)
                          ? "Empate!"
                          : (densidade == 1
                                 ? (atributo1 < atributo2 ? "Carta 1 venceu!" : "Carta 2 venceu!")
                                 : (atributo1 > atributo2 ? "Carta 1 venceu!" : "Carta 2 venceu!"));

    printf("Resultado: %s\n", resultado);
    return 0;
}