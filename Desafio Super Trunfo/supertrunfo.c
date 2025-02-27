#include <stdio.h>

    int main(){

        //Dados para cadastro carta 01

    char estado1 [50], codigocarta1 [50], nomedacidade1 [50];

    int populacao1 , numeropontosturistico1;

    float areaemkm1, pib1;

    //solcitando dados para cadastro carta 01,

    printf("Digite o nome do Estado: \n");
    scanf(" %s", estado1);

    printf("Digite nome da Cidade: \n");
    scanf(" %s", nomedacidade1);

    printf("Digite numero da populacao1: \n");
    scanf(" %d," populacao1);

    printf("Digite o nome do codigo1: \n");
    scanf(" %s", codigocarta1);

    printf("Digite o nome do areakm1: \n");
    scanf(" %f", areaemkm1);

    printf("Digite o nome do pib1: \n");
    scanf(" %f", pib1);

    printf("Digite o nome do turisticos1: \n");
    scanf(" %e", numeropontosturistico1);

    //Dados para cadastro carta 02

    char estado2 [50], codigocarta2 [50], nomedacidade2 [50];

   int populacao2, numeropontosturistico2;

    float areaemkm2, pib2;
    
    printf("Digite o nome do estado2: \n");
    scanf (" %s", estado2);

    printf("Digite nome da Cidade2: \n");
    scanf (" %s", nomedacidade2);

    printf("Digite o nome do codigo2: \n");
    scanf(" %s", codigocarta2);

    printf("Digite numero da  populacao2: \n");
    scanf(" %d", populacao2);

    printf("Digite o nome do areakm2: \n");
    scanf(" %f", areaemkm2);

    printf("Digite o nome do pib2: \n");
    scanf(" %f", pib2);

    printf("Digite o nome do turisticos2: \n");
    scanf(" %e", numeropontosturistico2);
}