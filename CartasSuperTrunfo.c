#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
char nomeCidade1[50], nomeCidade2[50], letraEstado1[2], letraEstado2[2], 
int populacao1, populacao2, pontos1, pontos2; codigoCarta1[4], codigoCarta2[4];
float area1, area2, pib1, pib2;
  
// Área para entrada de dados da carta 1
printf("Digite a letra do estado: (A-H)");
scanf("%s", letraEstado1);

printf("Digite o número do estado: (01-04)\n");
scanf("%d", codigoCarta1);

printf("Digite o nome da cidade: \n");
scanf("%s", nomeCidade1);

printf("Digite a população da cidade: \n");
scanf("%d", populacao1);

printf("Digite a área total da cidade: \n");
scanf("%f", area1);

printf("Digite o PIB da cidade: \n");
scanf("%f", pib1);

printf("Digite o numero de pontos turísticos da cidade: \n")
scanf("%d", pontos 1);

// Área para entrada de dados da carta 2
printf("Digite a letra do estado: (A-H)");
scanf("%s", letraEstado2);

printf("Digite o número do estado: (01-04)\n");
scanf("%d", codigoCarta2);

printf("Digite o nome da cidade: \n");
scanf("%s", nomeCidade2);

printf("Digite a população da cidade: \n");
scanf("%d", populacao2);

printf("Digite a área total da cidade: \n");
scanf("%f", area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", pib2);

printf("Digite o numero de pontos turísticos da cidade: \n")
scanf("%d", pontos 2);
  

// Área para exibição dos dados da cidade
printf("CARTA 1: \n");
printf("Estado: %s\n", letraEstado1);

return 0;
} 
