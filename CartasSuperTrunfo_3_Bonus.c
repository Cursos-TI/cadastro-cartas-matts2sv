#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países

int main()
{

    printf("Desafio - Cartas Super Trunfo\n\n");

    // Variáveis para armazenar as propriedades das cidades
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    char escolha;
    char nomeCidade1[20], estado1, codigoCarta1[4];
    char nomeCidade2[20], estado2, codigoCarta2[4];
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;

    // Define os atributos com base na escolha
    float atributo1, atributo2;
    char Atributo[30];
    int densidade = 0; // 0 = maior vence, 1 = menor vence

    // ######################################################################
    //  Carta 1
    // ######################################################################

reiniciar:
    printf("###### CARTA 1 ######\n\n");

entrada_estado1: // label para voltar em caso de erro
    printf("Insira o estado (Uma letra entre A-H): ");
    scanf(" %c", &estado1);
    if (estado1 < 'A' || estado1 > 'H')
    {
        printf("\nLetra inválida! Tente novamente.\n\n");
        goto entrada_estado1; // volta para pedir novamente
    }

entrada_codigo1: // label para voltar em caso de erro
    printf("Insira a letra do estado com um número de 01 a 04 (exemplo: A01, G03): ");
    scanf(" %3s", codigoCarta1);
    if (codigoCarta1[0] < 'A' || codigoCarta1[0] > 'H' ||
        codigoCarta1[1] < '0' || codigoCarta1[1] > '0' || // ajuste para validar números
        codigoCarta1[2] < '1' || codigoCarta1[2] > '4')
    {
        printf("\nCódigo inválido! Tente novamente.\n\n");
        goto entrada_codigo1; // volta para o label
    }

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê string com espaços

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área em quilometros: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ######################################################################
    //  Carta 2
    // ######################################################################

    printf("\n\n###### CARTA 2 ######\n\n");

// Entrada do estado
entrada_estado2:
    printf("Insira o estado (Uma letra entre A-H): ");
    scanf(" %c", &estado2);

    if (estado2 < 'A' || estado2 > 'H')
    {
        printf("\nLetra inválida! Tente novamente.\n\n");
        goto entrada_estado2;
    }

    // Verifica se já foi usado na carta 1
    if (estado2 == estado1)
    {
        printf("\nErro: Letra já usada na carta 1. Tente novamente.\n\n");
        goto entrada_estado2;
    }

// Entrada do código da carta
entrada_codigo2:
    printf("Insira a letra do estado com um número de 01 a 04 (exemplo: A01, G03): ");
    scanf(" %3s", codigoCarta2);

    // Validação básica do formato
    if (codigoCarta2[0] < 'A' || codigoCarta2[0] > 'H' ||
        codigoCarta2[1] != '0' ||
        codigoCarta2[2] < '1' || codigoCarta2[2] > '4')
    {
        printf("\nCódigo inválido! Tente novamente.\n\n");
        goto entrada_codigo2;
    }

    // Verifica se já foi usado na carta 1
    if (strcmp(codigoCarta2, codigoCarta1) == 0)
    {
        printf("\nErro: Código da carta já usado na carta 1. Tente novamente.\n\n");
        goto entrada_codigo2;
    }

// Entrada do nome da cidade
entrada_cidade2:
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    // Verifica se já foi usado na carta 1
    if (strcmp(nomeCidade2, nomeCidade1) == 0)
    {
        printf("\nErro: Nome da cidade já usado na carta 1. Tente novamente.\n\n");
        goto entrada_cidade2;
    }

    // População
    printf("População: ");
    scanf("%lu", &populacao2);

    // Área
    printf("Área em quilômetros: ");
    scanf("%f", &area2);

    // PIB
    printf("PIB: ");
    scanf("%f", &pib2);

    // Pontos turísticos
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

    printf("\n• Estado: %c\n", estado1);
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

    printf("\n• Estado: %c\n", estado2);
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
    int opcao;
    printf("\n\n######################################################################\n\n");
    printf("\nEscolha o atributo para comparar:\n\n");
entrada_opcao:
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
        printf("\nOpção inválida! Tente novamente.\n\n");
        goto entrada_opcao;
    }

    printf("\n######################################################################\n");

    // Informa o resultado final
    printf("\n\n#####################\n");
    printf("~~~~~ RESULTADO ~~~~~\n");
    printf("#####################\n\n");

    printf("(Atributo: %s)\n\n", Atributo);
    printf("Carta 1 - %s (%c): %.0f\n", nomeCidade1, estado1, atributo1);
    printf("Carta 2 - %s (%c): %.0f\n\n", nomeCidade2, estado2, atributo2);

    if (densidade == 1)
    { // menor vence
        if (atributo1 < atributo2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (atributo2 < atributo1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Resultado: Empate!\n");
    }
    else
    { // maior vence
        if (atributo1 > atributo2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (atributo2 > atributo1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Resultado: Empate!\n");
    }
    printf("\n######################################################################\n\n");

entrada_escolha: // label para reinserir
    printf("Deseja jogar novamente? (s/n): \n");
    scanf(" %c", &escolha);

    // converte para maiúscula para simplificar a checagem
    escolha = toupper(escolha);

    if (escolha == 'N')
    {
        printf("\nObrigado por jogar! Até a próxima\n\n");
        return 0;
    }
    else if (escolha == 'S')
    {
        printf("\nReiniciando o jogo...\n\n");
        goto reiniciar;
    }
    else
    {
        printf("\nOpção inválida! Digite apenas 'S' ou 'N'.\n\n");
        goto entrada_escolha; // volta para pedir novamente
    }

    return 0;
}
