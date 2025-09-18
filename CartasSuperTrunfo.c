#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  printf("Desafio - Cartas Super Trunfo\n\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Dados das cartas:

  int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2; // %d
  char nomecidade1[20], nomecidade2[20], estado1[6], estado2[6], codigoCarta1[4], codigoCarta2[4]; // %s (ou %c para 1 caractere)
  float area1, area2, pib1, pib2; // %f

  // Área para entrada de dados

  //  OBTENÇÃO DE DADOS DA CARTA 1:

  printf("###### CARTA 1 ######\n\n");
  printf("Insira o estado (A-H): ");
  scanf("%s", estado1);

  printf("Insira o código da carta: ");
  scanf("%s", codigoCarta1);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomecidade1);

  printf("Número da População: ");
  scanf("%d", &populacao1);

  printf("Área em quilometros: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  //  OBTENÇÃO DE DADOS DA CARTA 2:

  printf("\n\n###### CARTA 2 ######\n\n");
  printf("Insira o estado (A-H): ");
  scanf("%s", estado2);

  printf("Insira o código da carta: ");
  scanf("%s", codigoCarta2);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomecidade2);

  printf("Número da População: ");
  scanf("%d", &populacao2);

  printf("Área em quilômetros: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);
  printf("\n#################################################\n\n");


  // Área para exibição dos dados da cidade


  printf("######################\n");
  printf("~~ DADOS DA CARTA 1 ~~\n");
  printf("######################\n");

  printf("\n• Estado: %s\n• Código da Carta: %s\n• Nome da Cidade: %s\n• População: %d\n• Área em Quilômetros: %f\n• PIB: %f\n\n", estado1, codigoCarta1, nomecidade1, populacao1, area1, pib1);

  printf("\n######################\n");
  printf("~~ DADOS DA CARTA 2 ~~\n");
  printf("######################\n");

  printf("\n• Estado: %s\n• Código da Carta: %s\n• Nome da Cidade: %s\n• População: %d\n• Área em Quilômetros: %f\n• PIB: %f\n\n#################################################\n\n", estado2, codigoCarta2, nomecidade2, populacao2, area2, pib2);

return 0;

};


// Finalizado
