#include <stdio.h>

int main() {
    char estado, estado2;
    char codigo[4], codigo2[4];
    char nome[20], nome2[20];
    int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int pontos_turisticos, pontos_turisticos2;
    float PIB_per_Capita, PIB_per_Capita2;
    float densidade_populacional, densidade_populacional2;
    
    printf("Cadastre sua carta no SuperTrunfo!\n");
    printf("Qual o Codigo do estado?(A-H): ");
    scanf(" %c", &estado);

    printf("Qual o codigo da carta? ex.:(A01, R02) ");
    scanf("%s", &codigo);

    printf("Qual o nome da cidade? ");
    scanf("%s", &nome);

    printf("Qual a populacao da cidade? ");
    scanf("%d", &populacao);

    printf("Qual a área da cidade?(km2) ");
    scanf("%f", &area);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &pontos_turisticos);

    printf("Carta Cadastrada!\n");
    printf("Informações da carta\nEstado: %c\nCodigo: %s01\nNome: %s\nPopulacao: %d\
        Area: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %f\nPIB percapita: %f\n", 
        estado, nome, populacao, area, PIB, pontos_turisticos,
        (populacao/area), (PIB/populacao));



    printf("Cadastre sua nova carta no SuperTrunfo!\n");
    printf("Qual o Codigo do estado?(A-H): ");
    scanf(" %c", &estado2);

    printf("Qual o codigo da carta? ex.:(A01, R02) ");
    scanf("%s", &codigo2);

    printf("Qual o nome da cidade? ");
    scanf("%s", &nome2);

    printf("Qual a populacao da cidade? ");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade?(km2) ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &pontos_turisticos2);

    printf("Carta Cadastrada!\n");
    printf("Informações da carta\nEstado: %c\nCodigo: %s01\nNome: %s\nPopulacao: %d\
        Area: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %f\nPIB percapita: %f\n", 
        estado2, nome2, populacao2, area2, PIB2, pontos_turisticos2,
        (populacao2/area2), (PIB2/populacao2));

    return 0;
}
