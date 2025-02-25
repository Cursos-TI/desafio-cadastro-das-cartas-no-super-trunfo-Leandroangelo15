#include <stdio.h>

int main(){

    char estado1[50], estado2[50];
    char Cidade1[20], Cidade2[20];
    char codigo1, codigo2;
    int populacao1, populacao2;
    float areakm1, areakm2;
    int pib1, pib2;
    int turisticos1, turistico2;

    printf("Cadrasto da Carta1: \n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado1);

    printf("Digite nome da Cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite o nome do codigo1: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome do populacao1: \n");
    scanf("%d", &populacao1);

    printf("Digite o nome do areakm1: \n");
    scanf("%f", &areakm1);

    printf("Digite o nome do pib1: \n");
    scanf("%f", &pib1);

    printf("Digite o nome do turisticos1: \n");
    scanf("%e", &turisticos1);

    printf("Cadrasto da Carta2: \n");

    
    printf("Digite o nome do estado2: \n");
    scanf ("%s", &estado2);

    printf("Digite nome da Cidade2: \n");
    scanf ("%s", &Cidade2);

    printf("Digite o nome do codigo2: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome do populacao2: \n");
    scanf("%d", &populacao2);

    printf("Digite o nome do areakm2: \n");
    scanf("%f", &areakm2);

    printf("Digite o nome do pib2: \n");
    scanf("%f", &pib2);

    printf("Digite o nome do turisticos2: \n");
    scanf("%e", &turistico2);
}