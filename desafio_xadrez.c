#include <stdio.h>

struct Cidade {
    char estado[50];
    char codigo_carta[50];
    char nome_cidade[100];
    int populacao;
    int area_km2;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Cidade c1,c2;

    printf("Digite o Estado: ");
    scanf(" %[^\n]", c1.estado);

    printf("Digite o Codigo da carta: ");
    scanf(" %[^\n]", c1.codigo_carta);

    printf("Digite o Nome da cidade: ");
    scanf(" %[^\n]", c1.nome_cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &c1.populacao);

    printf("Digite a Area em KM2: ");
    scanf("%d", &c1.area_km2);

    printf("Digite o PIB: ");
    scanf("%f", &c1.pib);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &c1.pontos_turisticos);

    
 printf("\n");

    printf("Digite o Estado: ");
    scanf(" %[^\n]", c2.estado);

    printf("Digite o Codigo da carta: ");
    scanf(" %[^\n]", c2.codigo_carta);

    printf("Digite o Nome da cidade: ");
    scanf(" %[^\n]", c2.nome_cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &c2.populacao);

    printf("Digite a Area em KM2: ");
    scanf("%d", &c2.area_km2);

    printf("Digite o PIB: ");
    scanf("%f", &c2.pib);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &c2.pontos_turisticos);

    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %s\n", c1.estado);
    printf("Codigo da carta: %s\n", c1.codigo_carta);
    printf("Nome da cidade: %s\n", c1.nome_cidade);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area em KM2: %d\n", c1.area_km2);
    printf("PIB: %.2f\n", c1.pib);
    printf("Numero de pontos turisticos: %d\n", c1.pontos_turisticos);


      printf("\n--- Dados da Cidade 2 ---\n");
    printf("Estado: %s\n", c2.estado);
    printf("Codigo da carta: %s\n", c2.codigo_carta);
    printf("Nome da cidade: %s\n", c2.nome_cidade);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area em KM2: %d\n", c2.area_km2);
    printf("PIB: %.2f\n", c2.pib);
    printf("Numero de pontos turisticos: %d\n", c2.pontos_turisticos);

    return 0;
}