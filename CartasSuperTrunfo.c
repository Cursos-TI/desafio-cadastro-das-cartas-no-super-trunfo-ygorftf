#include <stdio.h>

int main(){

    char estado, codigo[4], cidade[100], estado2, codigo2[4], cidade2[100];
    int populacao, populacao2;
    float area, pib, area2, pib2;
    int numeroPontosTuristicos, numeroPontosTuristicos2;

    printf("Olá !!\nVamos cadastrar a carta nº: 01\n");
    
    printf("Digite o estado: \n");
    scanf(" %c", &estado);
    
    printf("Digite o codigo: \n");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]%*c", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("\n ------------------------------------------------- \n\n");

    printf("Agora vamos cadastrar a carta nº: 02\n");
    
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo: \n");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]%*c", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos2);

    printf("\n ------------------------------------------------- \n");

    printf("\n--- Carta 01 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Nº pontos turisticos: %d\n", numeroPontosTuristicos);

    printf("\n--- Carta 02 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Nº pontos turisticos: %d\n", numeroPontosTuristicos2);

    return 0;
}
