
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


  #include <stdio.h>

int main (){

// criaçao de variaves 

char estado1[50], estado2[50];
char cidade1[50], cidade2[50];
char codigo1[10], codigo2[10];
int populaçao1, populaçao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;

// entrada de dados

printf("digite o estado 1: ");
scanf("%s\n", estado1);

printf("digite o codigo 1 : ");
scanf("%S\n", codigo1);

printf("digite a cidade 1: ");
scanf("%S\n", cidade1);

printf("digite a populaçao 1 : ");
scanf("%d\n", populaçao1);
 
printf("digite a area 1: ");
scanf("%F\n", area1);

printf("digite o pib 1: ");
scanf("%F\n", pib1);

printf("digite os pontos turisticos 1: ");
scanf("%F\n", pontos1);

// saida de dados

printf("carta 1");
printf("estado 1: %s\n, estado1");
printf("cidade 1: %s\n, cidade1");
printf("codigo 1: %s\n, codigo1");
printf("populaçao 1: %D\n, populaçao1");
printf("pib 1: %f\n, pib1");
printf("area 1: %f\n, area1");
printf("pontos turisticos 1: %f\n, pontos1");

return 0;
} 
