#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  printf("Desafio - Cartas Super Trunfo\n\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Dados das cartas:

  int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2; // usar "%d"
  char nomecidade1[20], estado1[6], codigoCarta1[4]; // usar "%s" (ou "%c" se for apenas um caractere)
  char nomecidade2[20], estado2[6], codigoCarta2[4]; //  ||           ||          ||            ||
  float area1, area2, pib1, pib2; // usar "%f"
  float densidade1, densidade2, pibpercapita1, pibpercapita2;

  // Área para entrada de dados

  //  OBTENÇÃO DE DADOS DA CARTA 1:

  printf("###### CARTA 1 ######\n\n");
  printf("Insira o estado (Uma letra entre A-H): ");
  scanf("%s", estado1); // Obtém a Letra do Estado da carta 1

  printf("Insira a letra do estado com um número de 01 a 04 (exemplo: A01, G03): ");
  scanf("%s", codigoCarta1); // Obtém o número da carta da carta 1

  printf("Digite o nome da cidade: ");
  scanf("%s", nomecidade1);  // Obém o nome da cidade da carta 1

  printf("População: ");
  scanf("%d", &populacao1); // Obtém o número de habitantes da carta 1

  printf("Área em quilometros: ");
  scanf("%f", &area1); // Obtém a área total do estado da carta 1

  printf("PIB: ");
  scanf("%f", &pib1); // Obtém o PIB do estado da carta 1

  printf("Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1); // Obtém a quantidade de pontos turísticos da cidade

  //  OBTENÇÃO DE DADOS DA CARTA 2:

  printf("\n\n###### CARTA 2 ######\n\n");
  printf("Insira o estado (Uma letra entre A-H): ");
  scanf("%s", estado2); // Obtém a Letra do Estado da carta 2

  printf("Insira a letra do estado com um número de 01 a 04 (exemplo: A01, G03): ");
  scanf("%s", codigoCarta2); // Obtém o número da carta da carta 2

  printf("Digite o nome da cidade: ");
  scanf("%s", nomecidade2);  // Obém o nome da cidade da carta 2

  printf("População: ");
  scanf("%d", &populacao2); // Obtém o número de habitantes da carta 2

  printf("Área em quilômetros: ");
  scanf("%f", &area2); // Obtém a área total do estado da carta 2

  printf("PIB: ");
  scanf("%f", &pib2); // Obtém o PIB do estado da carta 2

  printf("Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);
  printf("\n######################################################################\n\n");

  // Calculo do PIB per Capita e Densidade populacional

  densidade1 = populacao1 / area1; // Calcula a densidade populacional da carta 1
  densidade2 = populacao2 / area2; // Calcula a densidade populacional da carta 2
  pibpercapita1 = pib1 / populacao1; // Calcula o PIB per capita da carta 1
  pibpercapita2 = pib2 / populacao2; // Calcula o PIB per capita da carta 2

  // Área para exibição dos dados da cidade


  printf("#####################\n");
  printf("~~~~~~ CARTA 1 ~~~~~~\n");
  printf("#####################\n");

  printf("\n• Estado: %s\n• Código da Carta: %s\n• Nome da Cidade: %s\n• População: %d\n• Área: %.2f km²\n• PIB: R$%.2f\n• N° de pontos turísticos: %d\n• Densidade Populacional: %2.f habitantes/km²\n• PIB per capita: R$%.2f\n\n", 
    estado1, codigoCarta1, nomecidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibpercapita1);

  printf("\n#####################\n");
  printf("~~~~~~ CARTA 2 ~~~~~~\n");
  printf("#####################\n");

  printf("\n• Estado: %s\n• Código da Carta: %s\n• Nome da Cidade: %s\n• População: %d\n• Área: %.2f km²\n• PIB: R$%.2f\n• N° de pontos turísticos: %d\n• Densidade Populacional: %2.f habitantes/km²\n• PIB per capita: R$%.2f\n\n", 
    estado2, codigoCarta2, nomecidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibpercapita2);

return 0;

};
