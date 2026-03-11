#include <stdio.h>

int main(){
    //Carta 1:
    char pais[30] = "Brasil";
    int populacao = 214000000; 
    float area = 8515767;
    float pib = 1.92;
    int pontos = 30;
    int densidade = populacao / area;
    
//Carta 2:

    char pais2[30] = "Agentina";
    int populacao2 = 46000000;
    float area2 = 2780400;
    float pib2 = 0.63;
    int pontos2 = 30;
    int densidade2 = populacao2 / area2;

    int opcao;

    printf("*** Comparação de Cartas super trunfo ***\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demografica\n");
    printf("Qual a opção de sua escolha ?\n");
    scanf("%d", &opcao);

    printf("Comparação %s x %s\n",pais, pais2 );


    switch (opcao){
        case 1:
        printf("Atributo: População\n");
        printf("%s: %d\n", pais, populacao);
        printf("%s: %d\n", pais2, populacao2);

        if(populacao > populacao2){
            printf("Vencedor: %s", pais);
        }else if(populacao2 > populacao){
            printf("Vencedor: %s", pais2);
        
        }else{
            printf("Empate\n");
        }
        break;
        case 2:
        printf("Atributo: Área\n");
        printf("%s: %f\n", pais, area);
        printf("%s: %f\n", pais2, area2);

        if(area > area2){
            printf("Vencedor: %s", pais);
        }else if(area2 > area){
            printf("Vencedor: %s", pais2);
        
        }else{
            printf("Empate\n");
        }
        break;
        case 3:
        printf("Atributo: PIB\n");
        printf("%s: %f\n", pais, pib);
        printf("%s: %f\n", pais2, pib2);

        if(pib > pib2){
            printf("Vencedor: %s", pais);
        }else if(pib2 > pib){
            printf("Vencedor: %s", pais2);
        
        }else{
            printf("Empate\n");
        }
        break;
        case 4:
        printf("Atributo: Pontos turisticos\n");
        printf("%s: %d\n", pais, pontos);
        printf("%s: %d\n", pais2, pontos2);

        if(pontos > pontos2){
            printf("Vencedor: %s", pais);
        }else if(pontos2 > pontos){
            printf("Vencedor: %s", pais2);
        
        }else{
            printf("Empate\n");
        }
        break;
        case 5:
        printf("Atributo: Densidade demografica\n");
        printf("%s: %d\n", pais, densidade);
        printf("%s: %d\n", pais2, densidade2);

        if(densidade > densidade2){
            printf("Vencedor: %s", pais);
        }else if(densidade2 > densidade){
            printf("Vencedor: %s", pais2);
        
        }else{
            printf("Empate\n");
        }
        break;
        default:
        printf("Opção invalidade");
        break;

        return 0;






    }
    









}