#include <stdio.h>

struct Cidade {
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
};

struct Estado {
    struct Cidade cidades[4];
};

int main() {
    struct Estado estados[2]; // Array para armazenar 2 estados
    
    // Cadastro do primeiro estado
    printf("Cadastro do Estado A:\n");
    for (int i = 0; i < 4; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("População: ");
        scanf("%d", &estados[0].cidades[i].populacao);
        printf("Área: ");
        scanf("%f", &estados[0].cidades[i].area);
        printf("PIB: ");
        scanf("%f", &estados[0].cidades[i].pib);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &estados[0].cidades[i].num_pontos_turisticos);
    }

    // Cadastro do segundo estado
    printf("\nCadastro do Estado B:\n");
    for (int i = 0; i < 4; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("População: ");
        scanf("%d", &estados[1].cidades[i].populacao);
        printf("Área: ");
        scanf("%f", &estados[1].cidades[i].area);
        printf("PIB: ");
        scanf("%f", &estados[1].cidades[i].pib);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &estados[1].cidades[i].num_pontos_turisticos);
    }

    // Exibição dos dados do primeiro estado
    printf("\nDados do Estado A:\n");
    for (int i = 0; i < 4; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("População: %d\n", estados[0].cidades[i].populacao);
        printf("Área: %.2f\n", estados[0].cidades[i].area);
        printf("PIB: %.2f\n", estados[0].cidades[i].pib);
        printf("Número de Pontos Turísticos: %d\n", estados[0].cidades[i].num_pontos_turisticos);
    }

    // Exibição dos dados do segundo estado
    printf("\nDados do Estado B:\n");
    for (int i = 0; i < 4; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("População: %d\n", estados[1].cidades[i].populacao);
        printf("Área: %.2f\n", estados[1].cidades[i].area);
        printf("PIB: %.2f\n", estados[1].cidades[i].pib);
        printf("Número de Pontos Turísticos: %d\n", estados[1].cidades[i].num_pontos_turisticos);
    }

    return 0;
}