#include <stdio.h>

int main() {
  
    //CARTA 1
    
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    
    //CARTA 2
 
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

 
    //DADOS - CARTA 1
  
    printf("       CADASTRO DE CARTA 1 - SUPER TRUNFO\n");

    printf("1. Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("2. Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta1); 

    printf("3. Digite o Nome da Cidade: ");
    scanf("%s", nome_cidade1);

    printf("4. Digite a Populacao (apenas numeros inteiros): ");
    scanf("%d", &populacao1);

    printf("5. Digite a Area em km^2 (ex: 1521.11): ");
    scanf("%f", &area1);

    printf("6. Digite o PIB (em bilhoes de reais, ex: 699.28): ");
    scanf("%f", &pib1);

    printf("7. Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);


    //DADOS - CARTA 2
  
    printf("\n");
    printf("       CADASTRO DE CARTA 2 - SUPER TRUNFO\n");

    printf("1. Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("2. Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo_carta2);

    printf("3. Digite o Nome da Cidade: ");
    scanf("%s", nome_cidade2);

    printf("4. Digite a Populacao (apenas numeros inteiros): ");
    scanf("%d", &populacao2);

    printf("5. Digite a Area em km^2 (ex: 1200.25): ");
    scanf("%f", &area2);

    printf("6. Digite o PIB (em bilhoes de reais, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("7. Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);



    // EXIBIÇÃO DE DADOS
   
    printf("\n\n");
    printf("          DADOS DAS CARTAS CADASTRADAS\n");

    // Exibicao Carta 1
    printf("\n");
    printf(">>> Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    // Exibicao Carta 2
    printf("\n");
    printf(">>> Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    printf("\nFim do Cadastro.\n");

    return 0;
}
