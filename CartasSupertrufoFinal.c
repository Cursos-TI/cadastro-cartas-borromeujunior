#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char nomeCidade1[50], nomeCidade2[50], letraEstado1, letraEstado2, codigoCarta1[5], codigoCarta2[5];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    // Área para entrada de dados da carta 1

printf("Cadastre os dados da Carta 1:\n");

printf("\n");

printf("Digite a letra do estado: (A-H)");
scanf("%c", &letraEstado1);
printf("Digite o código para a Carta (ex: A01,B03): \n");
scanf("%s", codigoCarta1);
printf("Digite o nome da cidade: \n");
scanf("%s", &nomeCidade1);
printf("Digite a população da cidade: \n");
scanf("%d", &populacao1);
printf("Digite a área total da cidade: \n");
scanf("%f", &area1);
printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);
printf("Digite o numero de pontos turísticos da cidade: \n");
scanf("%d", &pontos1);