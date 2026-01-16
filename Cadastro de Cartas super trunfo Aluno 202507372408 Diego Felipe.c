/******************************************************************************
Programa: Super Trunfo - Cadastro de Cartas (Nível 1)
Aluno 202507372408 Diego Felipe Gimenez de Andrade
Objetivo:
Cadastrar e exibir os dados de duas cartas do Super Trunfo de cidades,
utilizando apenas leitura, armazenamento e impressão de dados.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {

    /* ===================== CARTA 1 ===================== */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    /* ===================== CARTA 2 ===================== */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* ----------- Entrada de dados da Carta 1 ----------- */
    printf("Cadastro da Carta 1\n");

    printf("Digite o estado (A a H): \n");
    fflush(stdout);
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): \n");
    fflush(stdout);
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: \n");
    getchar(); // limpa o buffer antes do fgets
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a populacao INTEIRO sem ponto: \n");
    fflush(stdout);
    scanf("%d", &populacao1);

    printf("Digite a area em km² máximo UM separador decimal, e ele deve ser . (ponto).: \n");
    fflush(stdout);
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais) máximo UM separador decimal, e ele deve ser . (ponto).: \n");
    fflush(stdout);
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    fflush(stdout);
    scanf("%d", &pontosTuristicos1);

    /* ----------- Entrada de dados da Carta 2 ----------- */
    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado (A a H): \n");
    fflush(stdout);
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): \n");
    fflush(stdout);
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: \n");
    getchar(); // limpa o buffer antes do fgets
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a populacao INTEIRO sem ponto: \n");
    fflush(stdout);
    scanf("%d", &populacao2);

    printf("Digite a area em km² - máximo UM separador decimal, e ele deve ser . (ponto).: \n");
    fflush(stdout);
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais) máximo UM separador decimal, e ele deve ser . (ponto).: \n");
    fflush(stdout);
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    fflush(stdout);
    scanf("%d", &pontosTuristicos2);

    /* ----------- Exibição das Cartas ----------- */
    printf("\n==================== CARTA 1 ====================\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n==================== CARTA 2 ====================\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}