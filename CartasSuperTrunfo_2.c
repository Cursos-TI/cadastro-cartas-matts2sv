#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    printf("Desafio - Cartas Super Trunfo\n\n");

    // Variáveis para armazenar as propriedades das cidades
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    char nomeCidade1[20], estado1[6], codigoCarta1[4];
    char nomeCidade2[20], estado2[6], codigoCarta2[4];
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;

    // Entrada de dados da carta 1
    printf("###### CARTA 1 ######\n\n");
    printf("Insira o estado (Uma letra entre A-H): ");
    scanf("%s", estado1);

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
    scanf("%s", estado2);

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

    // Compara as cartas 1 e 2
    printf("\n#####################\n");
    printf("~~~~ COMPARAÇÃO ~~~~\n");
    printf("#####################\n");

    if (populacao1 >= populacao2) {
      printf("\nPopulação: A Carta 1 Venceu por ter mais habitantes!");
    } else {
      printf("\nPopulação: A Carta 2 Venceu por ter mais habitantes!");
    }

    if (area1 >= area2) {
      printf("\nÁrea: A Carta 1 Venceu por ter a área maior!");
    } else {
      printf("\nÁrea: A Carta 2 Venceu por ter a área maior!");
    }

    if (pib1 >= pib2) {
      printf("\nPIB: A Carta 1 Venceu por ter o maior PIB!");
    } else {
      printf("\nPIB: A Carta 2 Venceu por ter o maior PIB!");
    }

    if (pontosTuristicos1 >= pontosTuristicos2) {
      printf("\nPontos Turisticos: A Carta 1 Venceu por ter mais pontos turísticos!");
    } else {
      printf("\nPontos Turisticos: A Carta 2 Venceu por ter mais pontos turísticos!");
    }

    if (densidade1 >= densidade2) {
      printf("\nDensidade: A Carta 1 Venceu por ter maior densidade populacional!");
    } else {
      printf("\nDensidade: A Carta 2 Venceu por ter maior densidade populacional!");
    }

    if (pibpercapita1 >= pibpercapita2) {
      printf("\nPIB Per Capita: A Carta 1 Venceu por ter o maior PIB per Capita!");
    } else {
      printf("\nPIB Per Capita: A Carta 2 Venceu por ter o maior PIB per Capita!\n\n");
    }

    // Resultado final

    float atributo1 = populacao1;        // populacao1, area1, pib1, densidade1, pibPerCapita1
    float atributo2 = populacao2;        // correspondente
    char Atributo[30] = "População"; // nome do atributo para exibir

    printf("\n######################################################################\n\n");

    printf("\n\n#####################\n");
    printf("~~~~~ RESULTADO ~~~~~\n");
    printf("#####################\n\n");

    printf("(Atributo: %s)\n\n", Atributo);
    printf("Carta 1 - %s (%s): %.0f\n", nomeCidade1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %.0f\n\n", nomeCidade2, estado2, atributo2);

    // Lógica da comparação

    int densidade = 0; // 0 = maior vence, 1 = menor vence (para densidade populacional)

    if (atributo1 == densidade1)
    {
        densidade = 1;
    }

    if (!densidade)
    { // maior vence
        if (atributo1 > atributo2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n\n", nomeCidade1);
        }
        else
        {
            if (atributo2 > atributo1)
            {
                printf("Resultado: Carta 2 (%s) venceu!\n\n", nomeCidade2);
            }
            else
            {
                printf("Resultado: Empate!\n\n");
            }
        }
    }
    else
    { // menor vence
        if (atributo1 < atributo2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n\n", nomeCidade1);
        }
        else
        {
            if (atributo2 < atributo1)
            {
                printf("Resultado: Carta 2 (%s) venceu!\n\n", nomeCidade2);
            }
            else
            {
                printf("Resultado: Empate!\n\n");
            }
        }
    }


    return 0;
}
