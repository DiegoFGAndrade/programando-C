/******************************************************************************
Programa: Super Trunfo - Densidade populacional e PIB per Capita (NC-vel 2)
Aluno Diego Felipe Gimenez de Andrade
matrC-cula 202507372408
2026.1
Objetivo:
Cadastrar e exibir os dados de duas cartas do Super Trunfo de cidades,
utilizando apenas leitura, armazenamento e impressC#o de dados.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {

	/* ===================== CARTA 1 ===================== */
	char estado1;
	char codigo1[4];
	char cidade1[50];
	int populacao1;
	double area1;
	double pib1;
	int pontosTuristicos1;
	double DensidadePop1; //Densidade Populacional cidade1
	double PIBpercapta1;

	/* ===================== CARTA 2 ===================== */
	char estado2;
	char codigo2[4];
	char cidade2[50];
	int populacao2;
	double area2;
	double pib2;
	int pontosTuristicos2;
	double DensidadePop2; //Densidade Populacional cidade1
	double PIBpercapta2;

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

	printf("Digite a area em kmB2 mC!ximo UM separador decimal, e ele deve ser . (ponto).: \n");
	fflush(stdout);
	scanf("%lf", &area1);

	printf("Digite o PIB (em bilhoes de reais) mC!ximo UM separador decimal, e ele deve ser . (ponto).: \n");
	fflush(stdout);
	scanf("%lf", &pib1);

	printf("Digite o numero de pontos turisticos: \n");
	fflush(stdout);
	scanf("%d", &pontosTuristicos1);

	DensidadePop1 = populacao1 / area1;
	PIBpercapta1 = (pib1*1000000000.0) / populacao1 ;


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

	printf("Digite a area em kmB2 - mC!ximo UM separador decimal, e ele deve ser . (ponto).: \n");
	fflush(stdout);
	scanf("%lf", &area2);

	printf("Digite o PIB (em bilhoes de reais) mC!ximo UM separador decimal, e ele deve ser . (ponto).: \n");
	fflush(stdout);
	scanf("%lf", &pib2);

	printf("Digite o numero de pontos turisticos: \n");
	fflush(stdout);
	scanf("%d", &pontosTuristicos2);

	DensidadePop2 = populacao2 / area2;
	PIBpercapta2 = (pib2*1000000000.0)/ populacao2;

	/* ----------- ExibiC'C#o das Cartas ----------- */
	printf("\n==================== CARTA 1 ====================\n");
	printf("Estado: %c\n", estado1);
	printf("Codigo: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("Populacao: %d\n", populacao1);
	printf("Area: %.2f kmB2\n", area1);
	printf("PIB: %.2f bilhoes de reais\n", pib1);
	printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
	printf("Densidade populacional da cidade 1 hab/km²: %.2f \n",  DensidadePop1);
	printf("PIB per capita da cidade 1: %.2f \n",  PIBpercapta1);


	printf("\n==================== CARTA 2 ====================\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("Populacao: %d\n", populacao2);
	printf("Area: %.2f kmB2\n", area2);
	printf("PIB: %.2f bilhoes de reais\n", pib2);
	printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
	printf("Densidade populacional da cidade 2 hab/km²: %.2f \n",  DensidadePop2);
	printf("PIB per capita da cidade 2: %.2f \n",  PIBpercapta2);
	return 0;
}