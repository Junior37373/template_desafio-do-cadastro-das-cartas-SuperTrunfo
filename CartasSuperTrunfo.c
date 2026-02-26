#include <stdio.h>

int main() {
char estado[20]; 
char codigo[20];
char cidade[30];
int populacao;
float area;
int turistico;
float pib; 


printf("Carta 1:\nUma letra de 'A' a 'H' (representando um dos oito estados): ");
scanf("%s", &estado);

printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
scanf("%s", &codigo);

printf("O nome da cidade: ");
scanf("%s", &cidade);

printf("Qual é o número de habitantes da cidade: ");
scanf("%d", &populacao);

printf("A área da cidade em quilômetros quadrados: ");
scanf("%f", &area);

printf("O Produto Interno Bruto(PIB) da cidade: ");
scanf("%f", &pib);

printf("Qual a quantidade de pontos turísticos na cidade: ");
scanf("%d", &turistico);



char Bahia[20];
char cod[20];
char Municipiu[30]; 
int pessoas;
float tamanho; 
float PIB;
int turismo;
float densidade;
float Densidade;
float per;
float Per;



printf("Carta 2:\nUma letra de 'A' a 'H' (representando um dos oito estados): ");
scanf("%s", &Bahia);

printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
scanf("%s", &cod);

printf("O nome da cidade: ");
scanf("%s", &Municipiu);

printf("Qual é o número de habitantes da cidade: ");
scanf("%d", &pessoas);

printf("A área da cidade em quilômetros quadrados: ");
scanf("%f", &tamanho);

printf("O Produto Interno Bruto(PIB) da cidade: ");
scanf("%f", &PIB);

printf("Qual a quantidade de pontos turísticos na cidade: ");
scanf("%d", &turismo);


densidade = populacao / area;
Densidade = pessoas / tamanho;
per = pib / populacao;
Per = PIB / pessoas ;


printf("Carta 1: \n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n", estado, codigo, cidade, populacao, area, pib, turistico, densidade, per);

printf("Carta 2: \n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n", Bahia, cod, Municipiu, pessoas, tamanho, PIB, turismo, Densidade, Per);

return 0;


}