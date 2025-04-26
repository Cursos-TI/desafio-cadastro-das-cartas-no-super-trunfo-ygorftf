#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado, estado2;
    char codigo[3], codigo2[3];
    char cidade[100], cidade2[100];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int numero_de_pontos_turisticos, numero_de_pontos_turisticos2;

    printf("Olá !!\nVamos cadastrar a carta nº: 01\n");
    
    printf("Digite o estado: \n");
    scanf(" %c", &estado);
    
    printf("Digite o codigo: \n");
    scanf("%3s", codigo);
    
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("\n ------------------------------------------------- \n\n");

    printf("Agora vamos cadastrar a carta nº: 02\n");
    
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo: \n");
    scanf("%3s", codigo2);
    
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("\n ------------------------------------------------- \n");

    printf("\n--- Carta 01 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Nº pontos turisticos: %d\n", numero_de_pontos_turisticos);

    printf("\n--- Carta 02 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Nº pontos turisticos: %d\n", numero_de_pontos_turisticos2);
    return 0;
}
