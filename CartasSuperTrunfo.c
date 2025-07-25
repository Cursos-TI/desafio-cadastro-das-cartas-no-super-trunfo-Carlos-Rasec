#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    
    // Variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    
    // Variáveis para armazenar os atributos da cidade
    char nome_da_cidade[30] = "Fortaleza"; // Nome da cidade
    char estado[3] = "CE"; // Estado abreviado
    char codigo_da_carta[10] = "F1"; // Código da carta
    int populacao = 150000000; // População
    int numero_pontos_turisticos = 10; // Número de pontos turísticos
    float area_em_km = 750.000; // Área em km²
    float pib = 789654123.0; // PIB

    // Cadastro das Cartas:
    // scanf para capturar as entradas do usuário para cada atributo.
    

    printf("Para comecar,informe os atributos de cada uma das cartas!\n");

    printf("\nDigite o nome da cidade:");
    scanf("%s", nome_da_cidade);


    printf("Agora informe o estado,");
    printf("digite de forma abreviada, (Ex. CE):");
    scanf("%s", estado);

    printf("Informe o codigo dessa carta:");
    scanf("%s", codigo_da_carta);
    
    printf("Qual a polulacao dessa cidade:");
    scanf("%d", &populacao);
    
    printf("Quantos pontos turisticos possui essa cidade:");
    scanf("%d", &numero_pontos_turisticos);

    printf("Qual a area em KM² desta cidade:");
    scanf("%f", &area_em_km);

    printf("Por ultimo, Qual o PIB da cidade:");
    scanf("%f", &pib);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
