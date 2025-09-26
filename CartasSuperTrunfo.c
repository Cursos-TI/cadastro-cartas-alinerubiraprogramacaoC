
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


  #include <stdio.h>

int main (){

// criaçao de variaves 

char estado1, estado2;
char cidade1[50], cidade2[50];
char codigo1[10], codigo2[10];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;

// entrada de dados

printf("digite o estado 1: ");
scanf("%c\n", estado1);
printf("digite o estado 2: ");
scanf("%s\n", estado2);

printf("digite o codigo 1 : ");
scanf("%S\n", codigo1);
printf("digite o codigo 2: ");
scanf("%s\n, codigo2");

printf("digite a cidade 1: ");
scanf("%S\n", cidade1);
printf("digite a cidade 2: ");
scanf("%S\n, cidade2");

printf("digite a populaçao 1 : ");
scanf("%d\n", populacao1);
printf("digite a populaçao 2: ");
scanf("%d\n", populacao2);

 
printf("digite a area 1: ");
scanf("%F\n", area1);
printf("digite a area 2: ");
scanf("%F", area2);

printf("digite o pib 1: ");
scanf("%F\n", pib1);
printf("digite o pib 2: ");
scanf("%f\n, pib2");

printf("digite os pontos turisticos 1: ");
scanf("%F\n", pontos1);
printf("digite os pontos turisticos 2: ");
scanf("%F\n, pontos2");

// saida de dados

printf("carta 1");
printf("estado 1: %d\n, estado1");
printf("cidade 1: %s\n, cidade1");
printf("codigo 1: %s\n, codigo1");
printf("populaçao 1: %D\n, populacao1");
printf("pib 1: %f\n, pib1");
printf("area 1: %f\n, area1");
printf("pontos turisticos 1: %d\n, pontos1");

printf("carta 2");
printf("estado 2: %d\n, estado2");
printf("cidade 2: %s\n, cidade2");
printf("codigo 2: %s\n, codigo2");
printf("populaçao 2: %d\n, populacao2");
printf("pib 2: %f\n, pib2");
printf("area 2: %f\n, ara2");
printf("pontos 2: %d\n, pontos2");

return 0;
} 
