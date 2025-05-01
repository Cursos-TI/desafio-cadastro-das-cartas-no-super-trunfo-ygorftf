#include <stdio.h>
#include <stdlib.h>

int main(){

    /*Variaveis ambas as cartas */
    char estado[3], codigo[4], cidade[100], estado2[3], codigo2[4], cidade2[100];
    int populacao, populacao2;
    float area, pib, area2, pib2;
    int numeroPontosTuristicos, numeroPontosTuristicos2;
    float densidadeP = populacao / area;
    float densidadeP2 = populacao2 / area2;
    float pibPerCapita = pib / populacao;
    float pibPerCapita2 = pib2 / populacao2;

    printf("BEM-VINDO AO SUPER TRUNFO!\n\nVamos cadastrar a carta nº: 01\n"); /*Cadastro carta 1*/
    
    printf("Digite o estado: \n");
    scanf("%s", estado);
    
    getchar();
    printf("Digite o codigo: \n");
    scanf("%s", codigo);
    
    getchar();
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

    system("clear");

    printf("Agora vamos cadastrar a carta nº: 02\n\n"); /*Cadastro carta 2*/
    
    getchar();
    printf("Digite o estado: \n");
    scanf("%s", estado2);
    
    getchar();
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

    system("clear");
    printf("============Cartas Cadastradas============\n"); /*Resumo de cartas cadastradas*/

    printf("\n=== Carta %s ===\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Nº pontos turisticos: %d\n", numeroPontosTuristicos);

    printf("\n=== Carta %s ===\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Nº pontos turisticos: %d\n\n", numeroPontosTuristicos2);

    printf("===========================================\n\n");

    /*Comparação de cartas cadastradas*/

    printf("Comparação de cartas (Atributo: População)\n");
    printf("Carta %s - %s (%s): %d\n", codigo, cidade, estado, populacao);
    printf("Carta %s - %s (%s): %d\n\n", codigo2, cidade2, estado2, populacao2);

    if (populacao>populacao2)
    {
        printf("Resultado: Carta %s (%s) venceu!\n\n", codigo, cidade);
    } else  {
        printf("Resultado: Carta %s (%s) venceu!\n\n", codigo2, cidade2);
    }
    
    return 0;
}
