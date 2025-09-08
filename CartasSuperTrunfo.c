#include <stdio.h>

int main() {
    // Atributos da carta 1
    char codigo1[4];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Atributos da carta 2
    char codigo2[4];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Cadastro da carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o código da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
