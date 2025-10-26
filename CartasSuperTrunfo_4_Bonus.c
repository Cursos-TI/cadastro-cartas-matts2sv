#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// #include <windows.h> para Windows, substituir o "PAUSE(500);" para "Sleep(500);"

#ifdef _WIN32
#include <windows.h>
#define PAUSE(ms) Sleep(ms)
#else
#include <unistd.h>
#define PAUSE(ms) usleep((ms) * 1000)
#endif



// Desafio Super Trunfo - Países

int main()
{

    int exibir = 0, comparadorcartas = 0;
menuinicial:
    printf("######################################################################\n\n");
    printf("Desafio - Cartas Super Trunfo\n\n");

    // Variáveis para armazenar as propriedades das cidades
    int opcaoPlay, retryPlay, opcaoConfig;
    int modopvp = 0;
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    char nomeCidade1[20], estado1, codigoCarta1[4];
    char nomeCidade2[20], estado2[50], codigoCarta2[4];
    char escolha[4], escolhaSair[4], comparadorOpcao[4], exibirOpcao[4], regrasVoltar[3];
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    // Define os atributos com base na escolha
    float atributo1, atributo2, segundoAtributo1, segundoAtributo2;
    char Atributo[30], segundoAtributo[30];
    int densidade = 0, segundaDensidade = 0; // 0 = maior vence, 1 = menor vence

    printf("Escolha uma opcao:\n\n1 - Novo Jogo PVP\n2 - Novo jogo PVE\n3 - Regras\n4 - Configurações\n5 - Sair\n\nDigite a opcao desejada: ");
    scanf("%d", &opcaoPlay);

retryPlay:

    switch (opcaoPlay)
    {
    case 1:
        printf("\n## Novo Jogo PVP ##\n\n");
        modopvp = 1;
        goto inicio;
        break;
    case 2:

        printf("\n## Novo Jogo PVE ##\n\n");
        modopvp = 0;
        break;

    case 3:
        printf("\n## REGRAS ##\n\n");

        printf("1. Cada carta representa uma cidade com atributos específicos.\n");
PAUSE(500);
        printf("2. Os jogadores escolhem um atributo para comparar entre as cartas.\n");
PAUSE(500);
        printf("3. O jogador com o maior valor no atributo escolhido vence a rodada.\n");
PAUSE(500);
        printf("4. Em caso de empate, nenhuma carta vence.\n");
PAUSE(500);
        printf("5. Divirta-se jogando e aprendendo sobre as cidades!\n\n");

        goto menuinicial;

        break;

    case 4:
    configretry:
        printf("\n## Configurações ##\n\n");
        printf("1. Exibir cartas antes do comparador.\n");
        printf("2. Exibir pré comparação das cartas.\n");
        printf("3. Retornar ao menu inicial.\n\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcaoConfig);

        switch (opcaoConfig)
        {
        case 1:
        exibircartas:
            printf("Deseja exibir as cartas antes do comparador? (SIM ou NAO): ");
            scanf(" %s", &exibirOpcao);

            if (strcmp(exibirOpcao, "s") == 0 || strcmp(exibirOpcao, "S") == 0 ||
                strcmp(exibirOpcao, "sim") == 0 || strcmp(exibirOpcao, "SIM") == 0)
            {
                printf("\nAs cartas serão exibidas antes do comparador.\n\n");
                exibir = 1;
                goto configretry;
            }
            else if (strcmp(exibirOpcao, "n") == 0 || strcmp(exibirOpcao, "N") == 0 ||
                     strcmp(exibirOpcao, "nao") == 0 || strcmp(exibirOpcao, "NAO") == 0)
            {
                printf("\nTudo bem, As cartas não serão exibidas.\n\n");
                exibir = 0;
                goto configretry;
            }
            else
            {
                printf("\nOpção inválida! Digite apenas 'sim' ou 'nao'.\n\n");
                goto exibircartas; // volta para pedir novamente
            }
            break;

        case 2:
        ativadorcomparador:
            printf("Deseja exibir o pré comparador? (SIM ou NAO): \n");
            scanf(" %s", &comparadorOpcao);

            if (strcmp(comparadorOpcao, "s") == 0 || strcmp(comparadorOpcao, "S") == 0 ||
                strcmp(comparadorOpcao, "sim") == 0 || strcmp(comparadorOpcao, "SIM") == 0)
            {
                printf("\no pré comparador será exibido antes do comparador.\n\n");
                comparadorcartas = 1;
                goto configretry;
            }
            else if (strcmp(comparadorOpcao, "n") == 0 || strcmp(comparadorOpcao, "N") == 0 ||
                     strcmp(comparadorOpcao, "nao") == 0 || strcmp(comparadorOpcao, "NAO") == 0)
            {
                printf("\nTudo bem, o pré comparador não será exibido.\n\n");
                comparadorcartas = 0;
                goto configretry;
            }
            else
            {
                printf("\nOpção inválida! Digite apenas 'sim' ou 'nao'.\n\n");
                goto ativadorcomparador; // volta para pedir novamente
            }
            break;
        case 3:
            printf("Retornando ao menu inicial...\n\n");
            goto menuinicial;
            break;
        default:
            printf("Opção inválida! Escolha de 1 a 3:\n\n");
            goto configretry;
        }
        break;

    case 5:

    sairretry:
        printf("\nDeseja sair? (sim ou não)\n\n");
        scanf(" %s", escolhaSair);

        if (strcmp(escolhaSair, "s") == 0 || strcmp(escolhaSair, "S") == 0 ||
            strcmp(escolhaSair, "sim") == 0 || strcmp(escolhaSair, "SIM") == 0)
        {
            printf("Obrigado por jogar! Até a próxima\n\n");
            return 0;
        }
        else if (strcmp(escolhaSair, "n") == 0 || strcmp(escolhaSair, "N") == 0 ||
                 strcmp(escolhaSair, "nao") == 0 || strcmp(escolhaSair, "NAO") == 0)
        {
            printf("Retornando ao menu inicial...\n\n");
            goto menuinicial;
        }
        else
        {
            printf("Opção inválida! Retornando ao menu inicial...\n\n");
            goto sairretry;
        }
        return 0;

    default:
        printf("Opcao invalida!\n");
        break;
    }
    // ######################################################################
    //  Carta 1
    // ######################################################################

inicio:
    printf("Insira os dados das cartas:\n\n");
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
        codigoCarta1[1] != '0' || // ajuste para validar números
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

// Entrada do estado
entrada_estado2:

    if (modopvp == 1)
    {

        printf("\n\n###### CARTA 2 ######\n\n");
        printf("Insira o estado (Uma letra entre A-H): ");
        scanf(" %c", &estado2);

        if (estado2[0] < 'A' || estado2[0] > 'H')
        {
            printf("\nLetra inválida! Tente novamente.\n\n");
            goto entrada_estado2;
        }

        // Verifica se já foi usado na carta 1
        if (estado2[0] == estado1)
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
    }
    else
    { // Modo PVE - Gera aleatoriamente a carta 2
        const char *estados[] = {
            "Acre", "Alagoas", "Amapá", "Amazonas", "Bahia", "Ceará",
            "Distrito Federal", "Espírito Santo", "Goiás", "Maranhão",
            "Mato Grosso", "Mato Grosso do Sul", "Minas Gerais", "Pará",
            "Paraíba", "Paraná", "Pernambuco", "Piauí", "Rio de Janeiro",
            "Rio Grande do Norte", "Rio Grande do Sul", "Rondônia", "Roraima",
            "Santa Catarina", "São Paulo", "Sergipe", "Tocantins"};
        int numEstados = 27;
        int indice;

        do
        {
            indice = rand() % numEstados;
        } while (estados[indice][0] == estado1); // compara apenas a primeira letra

        strcpy(estado2, estados[indice]);
        sprintf(codigoCarta2, "%c%02d", estado2[0], (rand() % 4) + 1);
        sprintf(nomeCidade2, "%s", estado2);

        populacao2 = (rand() % 1000000) + 50000; // 50.000 a 1.050.000
        area2 = (rand() % 5000) + 100.0;         // 100 a 5100 km²
        pib2 = (rand() % 1000000000) + 5000000;  // 5 milhões a 1 bilhão
        pontosTuristicos2 = (rand() % 20) + 1;   // 1 a 20
    }

    // Cálculo do PIB per capita e densidade populacional
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Exibição dos dados da carta 1
    if (exibir == 1)
    {
        printf("\n######################################################################\n\n");
        printf("###### EXIBIDOR DE CARTAS ######\n\n");
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
    }

    // Compara as cartas 1 e 2 e diz qual é a melhor em cada atributo
    if (comparadorcartas == 1)
    {
        printf("\n######################################################################\n\n");
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
    }

    // Escolha do atributo para comparação
    int opcao, opcao2;
    printf("\n\n######################################################################\n\n");
    printf("\nEscolha o atributo para comparar:\n\n");
entrada_opcao1:
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
        goto entrada_opcao1;
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
entrada_opcao2:
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
        printf("\nOpção inválida! Tente novamente.\n\n");
        goto entrada_opcao2;
    }

    printf("\n######################################################################\n");

    // Informa o resultado final
    printf("\n\n#####################\n");
    printf("~~~~~ RESULTADO ~~~~~\n");
    printf("#####################\n\n");

    printf("(Atributo: %s)\n\n", Atributo);
    printf("Carta 1 - %s (%c): %.0f\n", nomeCidade1, estado1, atributo1);
    printf("Carta 2 - %s (%c): %.0f\n\n", nomeCidade2, estado2, atributo2);

    char *resultado = (atributo1 == atributo2)
                          ? "Empate!"
                          : (densidade == 1
                                 ? (atributo1 < atributo2 ? "Carta 1 venceu!" : "Carta 2 venceu!")
                                 : (atributo1 > atributo2 ? "Carta 1 venceu!" : "Carta 2 venceu!"));

    printf("Resultado: %s\n\n", resultado);

    printf("\n######################################################################\n\n");

entrada_escolha: // label para reinserir
    printf("Deseja jogar novamente? (SIM ou NAO): ");
    scanf(" %s", escolha);

    // converte para maiúscula para simplificar a checagem

    if (strcmp(escolha, "s") == 0 || strcmp(escolha, "S") == 0 ||
        strcmp(escolha, "sim") == 0 || strcmp(escolha, "SIM") == 0)
    {
        printf("Retornando ao menu inicial...\n\n");
        goto menuinicial;
    }
    else if (strcmp(escolha, "n") == 0 || strcmp(escolha, "N") == 0 ||
             strcmp(escolha, "nao") == 0 || strcmp(escolha, "NAO") == 0)
    {
        printf("Obrigado por jogar! Até a próxima\n\n");
        goto menuinicial;
    }
    else
    {
        printf("Opção inválida! Retornando ao menu inicial...\n\n");
        goto entrada_escolha;
    }

    return 0;
}