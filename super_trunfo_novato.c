#include <stdio.h>

    int main (){

// Definição da estrutura para armazenar os dados das carta 1 e 2

    char estado, estado2;
    char codigo[4], codigo2[4]; // 4 para incluir o caractere nulo
    char nomeCidade[100], nomeCidade2[100]; // 100 para incluir o caractere nulo
    int populacao, populacao2, pontosTuristicos, pontosTuristicos2;
    float area, pib, area2, pib2;

// Coleta dos dados da carta 1

    printf("Insira os dados da Carta 1 \n");
    
    printf("Estado (A-H): \n");
    scanf(" %c", &estado);
    
    printf("Código da Carta (ex: A01): \n");
    scanf(" %3s", &codigo); // %3s para limitar a entrada de 3 caracteres
    
    printf("Nome da Cidade sem espaço (ex: SaoPaulo): \n");
    scanf(" %99s", &nomeCidade); // %99s para limitar a entrada de 99 caracteres
    
    printf("População: \n");
    scanf(" %d", &populacao);
    
    printf("Área (em km²): \n");
    scanf(" %f", &area);
    
    printf("PIB (em bilhões de reais): \n");
    scanf(" %f", &pib);
    
    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos);

// Coleta dos dados da carta 2

    printf("Insira os dados da Carta 2 \n");
    
    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B01): \n");
    scanf(" %4s", &codigo2); // %3s para limitar a entrada de 3 caracteres
    
    printf("Nome da Cidade sem espaço (ex: BeloHorizonte): \n");
    scanf(" %99s", &nomeCidade2); // %99s para limitar a entrada de 99 caracteres
    
    printf("População: \n");
    scanf(" %d", &populacao2);
    
    printf("Área (em km²): \n");
    scanf(" %f", &area2);
    
    printf("PIB (em bilhões de reais): \n");
    scanf(" %f", &pib2);
    
    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos2);

// Exibir os dados das duas cartas

    printf("Carta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}