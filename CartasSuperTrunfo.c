#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cod_cidade, cod_cidade2;
    char nome[20], nome2[20];
    int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int pontos_turisticos, pontos_turisticos2;
    
    printf("Cadastre sua carta no SuperTrunfo!\n");
    printf("Qual o Codigo do estado?\n");
    scanf("%c", &cod_cidade);
    printf("Qual o nome da cidade?\n");
    scanf("%s", &nome);
    printf("Qual a populacao da cidade?\n");
    scanf("%d", &populacao);
    printf("Qual a área da cidade?(km2)\n");
    scanf("%f", &area);
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB);
    printf("Quantos pontos turisticos tem a cidade?\n");
    scanf("%d", &pontos_turisticos);

    printf("Carta Cadastrada!\n");
    printf("Informações da carta\nCodigo: %c01\nNome: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d", cod_cidade, nome, populacao, area, PIB, pontos_turisticos);



    printf("Cadastre sua nova carta no SuperTrunfo!\n");
    printf("Qual o Codigo do estado?\n");
    scanf("%c", &cod_cidade2);
    printf("Qual o nome da cidade?\n");
    scanf("%s", &nome2);
    printf("Qual a populacao da cidade?\n");
    scanf("%d", &populacao2);
    printf("Qual a área da cidade?(km2)\n");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB2);
    printf("Quantos pontos turisticos tem a cidade?\n");
    scanf("%d", &pontos_turisticos2);

    printf("Carta Cadastrada!\n");
    printf("Informações da carta\nCodigo: %c01\nNome: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d", cod_cidade2, nome, populacao2, area2, PIB2, pontos_turisticos2);
    return 0;
}
