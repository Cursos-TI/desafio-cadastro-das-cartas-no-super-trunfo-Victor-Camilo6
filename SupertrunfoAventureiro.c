#include <stdio.h>

int main() {
    // Dados da Carta 1
    char nome1[] = "Cidade Alfa";
    int populacao1 = 500000;
    float area1 = 250.0;
    float pib1 = 10000000000.0;

    // Dados da Carta 2
    char nome2[] = "Cidade Beta";
    int populacao2 = 2000000;
    float area2 = 500.0;
    float pib2 = 50000000000.0;

    // Cálculo dos novos atributos (Carta 1)
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // Cálculo dos novos atributos (Carta 2)
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição (Carta 1)
    printf("🏙️ Carta 1:\n");
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f R$\n\n", pib_per_capita1);

    // Exibição (Carta 2)
    printf("🏙️ Carta 2:\n");
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f R$\n", pib_per_capita2);

    return 0;
}
