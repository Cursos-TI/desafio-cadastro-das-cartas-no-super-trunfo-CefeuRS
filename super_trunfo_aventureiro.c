#include <stdio.h>

// Desafio Super Trunfo - Países
// Nivel aventureiro - Calculando densidade e PIB per capita

int main() {
    // vamo declarar tudo separado pra cada carta mesmo

    // carta 1
    char cod1[4];
    char nome1[30];
    int pop1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_per_capita1;

    // carta 2
    char cod2[4];
    char nome2[30];
    int pop2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_per_capita2;

    // entrada da carta 1
    printf("informe os dados da carta 1\n");
    printf("codigo da cidade (ex: A01): ");
    scanf("%s", cod1);

    printf("nome da cidade: ");
    scanf(" %[^\n]", nome1); // pega nome com espaco

    printf("populacao: ");
    scanf("%d", &pop1);

    printf("area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1); // lembrar de por ponto, tipo 5.6 e nao 5,6

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // entrada da carta 2
    printf("\n\ninforme os dados da carta 2\n");
    printf("codigo da cidade (ex: B03): ");
    scanf("%s", cod2);

    printf("nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("populacao: ");
    scanf("%d", &pop2);

    printf("area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // calculo dos novos atributos
    densidade1 = pop1 / area1;
    pib_per_capita1 = pib1 / pop1;

    densidade2 = pop2 / area2;
    pib_per_capita2 = pib2 / pop2;

    // exibir os dados
    printf("\n==== CARTA 1 ====\n");
    printf("codigo: %s\n", cod1);
    printf("nome: %s\n", nome1);
    printf("populacao: %d\n", pop1);
    printf("area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("pontos turisticos: %d\n", pontos1);
    printf("densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.6f\n", pib_per_capita1);

    printf("\n==== CARTA 2 ====\n");
    printf("codigo: %s\n", cod2);
    printf("nome: %s\n", nome2);
    printf("populacao: %d\n", pop2);
    printf("area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontos2);
    printf("densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.6f\n", pib_per_capita2);

    // pausa
    printf("\nPressione ENTER pra sair...");
    getchar(); // segura
    getchar();

    return 0;
}