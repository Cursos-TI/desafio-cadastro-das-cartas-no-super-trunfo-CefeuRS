#include <stdio.h>

// Desafio Super Trunfo - Países
// nivel mestre - comparacao das cartas + calculo do super poder

int main() {
    // criei aqui as variaveis das 2 cartas, com os mesmos atributos de antes
    char cod1[4], nome1[30];
    unsigned long int pop1;
    float area1, pib1;
    int pontos1;

    char cod2[4], nome2[30];
    unsigned long int pop2;
    float area2, pib2;
    int pontos2;

    // variaveis dos calculos
    float dens1, dens2, pibcap1, pibcap2;
    float super1, super2;

    // coleta os dados da carta 1
    printf("informe os dados da carta 1\n");
    printf("codigo da cidade (ex: A01): ");
    scanf("%s", cod1);

    printf("nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("populacao: ");
    scanf("%lu", &pop1);

    printf("area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // agora a carta 2
    printf("\n\ninforme os dados da carta 2\n");
    printf("codigo da cidade (ex: B03): ");
    scanf("%s", cod2);

    printf("nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("populacao: ");
    scanf("%lu", &pop2);

    printf("area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // calcula densidade e pib per capita
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;
    pibcap1 = pib1 / pop1;
    pibcap2 = pib2 / pop2;

    // calcula o super poder de cada carta
    super1 = (1 / dens1) + pop1 + area1 + pib1 + pontos1 + pibcap1;
    super2 = (1 / dens2) + pop2 + area2 + pib2 + pontos2 + pibcap2;

    // exibe os dados das cartas
    printf("\n==== CARTA 1 ====\n");
    printf("codigo: %s\n", cod1);
    printf("nome: %s\n", nome1);
    printf("populacao: %lu\n", pop1);
    printf("area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("pontos turisticos: %d\n", pontos1);
    printf("densidade populacional: %.2f\n", dens1);
    printf("PIB per capita: %.6f\n", pibcap1);
    printf("super poder: %.2f\n", super1);

    printf("\n==== CARTA 2 ====\n");
    printf("codigo: %s\n", cod2);
    printf("nome: %s\n", nome2);
    printf("populacao: %lu\n", pop2);
    printf("area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontos2);
    printf("densidade populacional: %.2f\n", dens2);
    printf("PIB per capita: %.6f\n", pibcap2);
    printf("super poder: %.2f\n", super2);

    // comparacoes
    printf("\n=== Comparacao entre cartas ===\n");
    printf("Populacao: %d\n", pop1 > pop2 ? 1 : 0);
    printf("Area: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos turisticos: %d\n", pontos1 > pontos2 ? 1 : 0);
    printf("Densidade populacional: %d\n", dens1 < dens2 ? 1 : 0); // menor vence
    printf("PIB per capita: %d\n", pibcap1 > pibcap2 ? 1 : 0);
    printf("Super poder: %d\n", super1 > super2 ? 1 : 0);

    printf("\nPressione ENTER pra sair...");
    getchar();
    getchar();

    return 0;
}