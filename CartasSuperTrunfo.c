#include <stdio.h>
int main(){

    // variaveis carta 1 e carta 2

    char estado1[20] , estado2[50];
    char cidade1[20] , cidade2[20];
    char codigo1[5] , codigo2[5];
    float populacao1 , populacao2;
    float area1 , area2;
    float pib1 , pib2;
    int ponto1 , ponto2;
    float densidadepopulacional1 = populacao1 / area1;
    float densidadepopulacional2 = populacao2 / area2;
    float pibpercapta1 = pib1 / populacao1;
    float pibpercapta2 = pib2 / populacao2;
    float Superpodercarta1 , SuperPodercarta2;


    // entrada de dados da carta 1

    printf("---Dados da carta 1---\n");

    printf("Estado1: ");   //use apenas iniciais ex Rj,ES...
    scanf("%s" , &estado1);

    printf("Cidade1: ");
    scanf("%s" , &cidade1);

    printf("Código1: ");  //uma letra e um numero
    scanf("%s" , &codigo1);

    printf("População1 (Milhões): ");   //aceita numero flutuantes
    scanf("%f" , &populacao1);

    printf("Área1 (Km²): ");  //aceita numero flutuantes
    scanf("%f" , &area1);

    printf("PIB1 (Milhões): ");  //aceita numero flutuantes
    scanf("%f" , &pib1);

    printf("Ponto turísticos1: "); 
    scanf("%d" , &ponto1);

    // exibe os valores da carta 1
    printf("\n---Exibição carta 1---\n");

    printf("Estado1: %s - Cidade1: %s - Código1: %s\n" , estado1 , cidade1 , codigo1);
    printf("População1: %.3f - Área1: %.3f - PIB1: %.3f - Pontos Turísticos1: %d\n" , populacao1 ,area1 , pib1 , ponto1);

    // calculo de densidade populacional e PIB per Capta da carta 1
    
    densidadepopulacional1 = populacao1 / area1;
    printf("Densidade populacional1 é: %.2f Hab/Km²\n" , densidadepopulacional1);
    pibpercapta1 = pib1 / populacao1;
    printf("PIB per Capta1: %.3f Reais/Hab\n" , pibpercapta1);


    // entrada de dados da carta 2

    printf("\n---Dados da carta 2---\n");

    printf("Estado2: ");  //use apenas iniciais ex Rj,ES...
    scanf("%s" , &estado2);

    printf("Cidade2: ");
    scanf("%s" , &cidade2);

    printf("Código2: ");  //uma letra e um numero
    scanf("%s" , &codigo2);

    printf("População2 (Milhões): ");   //aceita numero flutuantes
    scanf("%f" , &populacao2);

    printf("Área2 (Km²): ");  //aceita numero flutuantes
    scanf("%f" , &area2);

    printf("PIB2 (Milhões): ");  //aceita numero flutuantes
    scanf("%f" , &pib2);

    printf("Ponto turísticos2: "); 
    scanf("%d" , &ponto2);

    // exibe os valores da carta 2
    printf("\n---Exibição carta 2---\n");

    printf("Estado2: %s - Cidade2: %s - Código2: %s\n" , estado2 , cidade2 , codigo2);
    printf("População2: %.3f - Área2 (Km²): %.3f - PIB2: %.3f - Pontos Turísticos2: %d\n" , populacao2 ,area2 , pib2 , ponto2);

    //calculo de densidade populacional e PIB per Capta da carta 2

    densidadepopulacional2 = populacao2 / area2;
    printf("Densidade populacional2 é: %.2f Hab/Km²\n" , densidadepopulacional2);
    pibpercapta2 = pib2 / populacao2;
    printf("PIB per Capta2: %.3f Reais/Hab\n" , pibpercapta2);

    //calculo do super poder

    Superpodercarta1 = populacao1 + area1 + pib1 + ponto1 + pibpercapta1 / densidadepopulacional1;
    SuperPodercarta2 = populacao2 + area2 + pib2 + ponto2 + pibpercapta2 / densidadepopulacional2;

    printf("\nSuper Poder carta 1: %.3f\n" , Superpodercarta1);
    printf("Super Poder carta 2: %.3f\n" , SuperPodercarta2);

    //carta vencedora: 1 para verdaddeiro e 0 para falso

    printf("\nA carta 1 venceu: %d\n" , Superpodercarta1 > SuperPodercarta2);
    printf("A carta 2 venceu: %d\n" , Superpodercarta1 < SuperPodercarta2);
    printf("Houve empate: %d\n" , Superpodercarta1 == SuperPodercarta2);


    return 0;
}