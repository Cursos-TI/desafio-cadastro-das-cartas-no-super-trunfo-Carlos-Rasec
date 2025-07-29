#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    
    // Variáveis separadas para cada atributo da cidade. 
    // Atributos: Nome, estado, código da cidade, população, número de pontos turísticos, área, e PIB.
    
    // Variáveis para armazenar os atributos da cidade:

    //Atributos para a carta A01

    char codigo_da_carta1[10] = "A01"; // Código da carta
    char nome_da_cidade1[30] = "Fortaleza"; // Nome da cidade
    char estado1[3] = "CE"; // Estado abreviado
    int populacao1 = 150000000; // População
    int numero_pontos_turisticos1 = 10; // Número de pontos turísticos
    float area_em_km1 = 750.000; // Área em km²
    float pib1 = 789654123.0; // PIB

    //Atributos para a carta A02

    char codigo_da_carta2[10] = "A0"; // Código da carta
    char nome_da_cidade2[30] = "Fortaleza"; // Nome da cidade
    char estado2[3] = "CE"; // Estado abreviado
    int populacao2 = 150000000; // População
    int numero_pontos_turisticos2 = 10; // Número de pontos turísticos
    float area_em_km2 = 750.000; // Área em km²
    float pib2 = 789654123.0; // PIB

    // Cadastro das Cartas:
    // scanf para capturar as entradas do usuário para cada atributo.
   
    printf("Para comecar,informe os atributos de cada uma das cartas!\n");
    printf("\nVamos cadastrar a primeira.\n");
    
    printf("\nInforme o codigo da carta:");
    scanf("%s", codigo_da_carta1);

    printf("\nDigite o nome da cidade:");
    scanf("%s", nome_da_cidade1);


    printf("Agora informe o estado,");
    printf("digite de forma abreviada, (Ex. CE):");
    scanf("%s", estado1);

    
    printf("Qual a polulacao dessa cidade:");
    scanf("%d", &populacao1);
    
    printf("Quantos pontos turisticos possui essa cidade:");
    scanf("%d", &numero_pontos_turisticos1);

    printf("Qual a area em KM² desta cidade:");
    scanf("%f", &area_em_km1);

    printf("Por ultimo, Qual o PIB da cidade:");
    scanf("%f", &pib1);
    
    
    //capturar os dados da segunda carta
    
    printf("\nAgora é a vez dos atributos da segunda cartas!\n");
    
    printf("\nInforme o codigo da carta:");
    scanf("%s", codigo_da_carta2);

    printf("\nDigite o nome da cidade:");
    scanf("%s", nome_da_cidade2);


    printf("Agora informe o estado,");
    printf("digite de forma abreviada, (Ex. CE):");
    scanf("%s", estado2);

    
    printf("Qual a polulacao dessa cidade:");
    scanf("%d", &populacao2);
    
    printf("Quantos pontos turisticos possui essa cidade:");
    scanf("%d", &numero_pontos_turisticos2);

    printf("Qual a area em KM² desta cidade:");
    scanf("%f", &area_em_km2);

    printf("Por ultimo, Qual o PIB da cidade:");
    scanf("%f", &pib2);
    
    // Exibição dos Dados das Cartas:

    //Carta A01
    printf("\n - - A carta A01 possui os seguintes dados - - \n");
    printf("codigo da carta: %s\n", codigo_da_carta1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Pontos Turisticos: %d\n", numero_pontos_turisticos1);
    printf("Area: %f\n", area_em_km1);
    printf("PIB: %f\n", pib1);
    
    //carta A02
    printf("\n - - A carta A02 possui os seguintes dados - - \n");
    printf("codigo da carta: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Pontos Turisticos: %d\n", numero_pontos_turisticos2);
    printf("Area: %f\n", area_em_km2);
    printf("PIB: %f\n", pib2);

    
    return 0;
}
