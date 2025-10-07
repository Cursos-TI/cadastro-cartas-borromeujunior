#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
    char nomeCidade1[50], nomeCidade2[50], letraEstado1, letraEstado2, codigoCarta1[5], codigoCarta2[5];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
  
// Área para entrada de dados da carta 1

printf("Cadastre os dados da Carta 1:\n");
printf("Digite a letra do estado: (A-H)");
scanf("%c", &letraEstado1);

printf("Digite o código para a Carta (ex: A01,B03): \n");
scanf("%s", codigoCarta1);

printf("Digite o nome da cidade: \n");
scanf("%s", nomeCidade1);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao1);

printf("Digite a área total da cidade: \n");
scanf("%f", &area1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Digite o numero de pontos turísticos da cidade: \n");
scanf("%d", &pontos1);

//Área para exibição das informações da carta 1
printf("Letra do estado: %c\n", letraEstado1);
printf("Código da carta: %c\n", codigoCarta1);
printf("Nome da cidade: %c\n", nomeCidade1);
printf("População da cidade: %d\n", populacao1);
printf("Área total da cidade: %f\f", area1);
printf("PIB da cidade: %f\n", pib1);
printf("Número de pontos turísticos: %d\n", pontos1);

printf("\n");
printf("\n");

// Área para entrada de dados da carta 2
printf("Digite a letra do estado: (A-H)");
scanf("%s", letraEstado2);

printf("Digite o número do estado: (01-04)\n");
scanf("%d", &codigoCarta2);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomeCidade2);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao2);

printf("Digite a área total da cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

printf("Digite o numero de pontos turísticos da cidade: \n");
scanf("%d", &pontos2);
  

//Área para exibição das informações da carta 2

printf("\n");
printf("Dados da segunda seleção: \n");
printf("\n");
printf("Letra do estado: %c\n", letraEstado2);
printf("Código da carta: %c\n", codigoCarta2);
printf("Nome da cidade: %c\n", nomeCidade2);
printf("População da cidade: %d\n", populacao2);
printf("Área total da cidade: %f\f", area2);
printf("PIB da cidade: %f\n", pib2);
printf("Número de pontos turísticos: %d\n", pontos2);

return 0;
} 
