// NOVATO TEMA 3 IF ELSE ELSE IF SUPER TRUNFO
//Aluno Diego Felipe Gimenez de Andrade
//matrC-cula 202507372408
//2026.1
//Objetivo:
//Cadastrar e exibir os dados de duas cartas do Super Trunfo de cidades,
//utilizando apenas leitura, armazenamento e impressC#o de dados. 
//hora de colocar suas cartas para lutar! Neste nível avançado, você implementará 
//lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora 
//de cada atributo e introduzindo o conceito de "Super Poder".
//usar todo o seu conhecimento de operadores relacionais, modificadores de tipo e conversão de tipos em C!



#include <stdio.h>
#include <string.h>

int main() {

	/* ===================== CARTA 1 ===================== */
	char estado1 [2];
	char codigo1[4];//string
	char cidade1[50];//string vetor char /0
	unsigned long int populacao1;//Modificador unsigned declarar variáveis que podem armazenar apenas valores positivos (incluindo zero). Ele pode ser aplicado aos tipos de dados int e char, dobrando a faixa positiva de valores que podem ser armazenados
	double area1; //a questão ped float mas escolhi double
	double pib1; //a questão ped float mas escolhi double
	int pontosTuristicos1;
	double DensidadePop1; //Densidade Populacional cidade1
	double PIBpercapta1;
    double superpoder1; //superpoder = população+área+ PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"
	


	/* ===================== CARTA 2 ===================== */
	char estado2 [2];
	char codigo2[4];
	char cidade2[50];
	unsigned long int populacao2;//Modificador unsigned declarar variáveis que podem armazenar apenas valores positivos (incluindo zero).
	double area2; //a questão ped float mas escolhi double
	double pib2; //a questão ped float mas escolhi double
	int pontosTuristicos2;
	double DensidadePop2; //Densidade Populacional cidade1
	double PIBpercapta2;
	double superpoder2; // /superpoder = população+área+ PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"

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
	scanf("%lu", &populacao1); //%u é usado para exibir valores unsigned int.

	printf("Digite a area em kmB2 máximo UM separador decimal, e ele deve ser . (ponto).: \n");
	fflush(stdout);
	scanf("%lf", &area1);

	printf("Digite o PIB (em bilhoes de reais) máximo UM separador decimal, e ele deve ser . (ponto).: \n");
	fflush(stdout);
	scanf("%lf", &pib1);

	printf("Digite o numero de pontos turisticos: \n");
	fflush(stdout);
	scanf("%d", &pontosTuristicos1);

	DensidadePop1 = populacao1 / area1;
	PIBpercapta1 = (pib1*1000000000.0) / populacao1 ;
superpoder1 = ( (float)populacao1+ (float)area1+ (float)pib1+ (float)pontosTuristicos1+ (float)PIBpercapta1+ (float)(1.0/DensidadePop1));

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
	scanf("%lu", &populacao2); //%u é usado para exibir valores unsigned int.

	printf("Digite a area em kmB2 - máximo UM separador decimal, e ele deve ser . (ponto).: \n");
	fflush(stdout);
	scanf("%lf", &area2);

	printf("Digite o PIB (em bilhoes de reais) máximo UM separador decimal, e ele deve ser . (ponto).: \n");
	fflush(stdout);
	scanf("%lf", &pib2);

	printf("Digite o numero de pontos turisticos: \n");
	fflush(stdout);
	scanf("%d", &pontosTuristicos2);

	DensidadePop2 = populacao2 / area2;
	PIBpercapta2 = (pib2*1000000000.0)/ populacao2;
	superpoder2 = ( (float)populacao2+ (float)area2+ (float)pib2+ (float)pontosTuristicos2+ (float)PIBpercapta2+ (float)(1.0/ DensidadePop2));

	/* ----------- ExibiC'C#o das Cartas ----------- */
	printf("\n==================== CARTA 1 ====================\n");
	printf("Estado: %c\n", estado1);
	printf("Codigo: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("Populacao: %lu\n", populacao1);
	printf("Area: %.2f kmB2\n", area1);
	printf("PIB: %.2f bilhoes de reais\n", pib1);
	printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
	printf("Densidade populacional da cidade 1 hab/km²: %.2f \n",  DensidadePop1);
	printf("PIB per capita da cidade 1: %.2f \n",  PIBpercapta1);
	printf("SuperPoder da cidade 1: %.2f \n",  superpoder1);


	printf("\n==================== CARTA 2 ====================\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("Populacao: %lu\n", populacao2);
	printf("Area: %.2f kmB2\n", area2);
	printf("PIB: %.2f bilhoes de reais\n", pib2);
	printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
	printf("Densidade populacional da cidade 2 hab/km²: %.2f \n",  DensidadePop2);
	printf("PIB per capita da cidade 2: %.2f \n",  PIBpercapta2);
		printf("SuperPoder da cidade 2: %.2f \n",  superpoder2);
	
	/* ----------- comparando das Cartas ----------- */
	//	printf("\n==================== RESULTADO====================\n");
	//	printf("população cidade1 venceu: %lu\n", populacao1>populacao2);
	//	printf("área cidade1 venceu: %d\n", area1>area2);
	//	printf("PIB cidade1 venceu: %u\n", pib1>pib2);
	//	printf("PONTOS TURÍSTICOS cidade1 venceu: %u\n", pontosTuristicos1>pontosTuristicos2);
	//    printf("Densidade populacional cidade1 venceu: %u\n", DensidadePop1<DensidadePop2);
	//   printf("PIB per capta cidade1 venceu: %u\n", PIBpercapta1>PIBpercapta2);
	//    printf("SuperPoder cidade1 venceu: %u\n", superpoder1>superpoder2);


printf("\n==================== RESULTADO====================\n");
	if (populacao1 > populacao2)
	{printf("população cidade1 venceu \n");}
	else if (populacao1 < populacao2)
	{printf("população cidade2 venceu \n" );}
	else 
	{printf("população cidade1 igual à da cidade2 venceu \n" );}
	if (area1 > area2)
	{printf("area cidade1 venceu \n" );}
	else if (area1 < area2)
	{printf("população cidade2 venceu \n" );}
	else 
	{printf("area cidade1 igual à da cidade2 venceu \n" );}

	if (pib1 > pib2)
	{printf("PIB cidade1 venceu \n" );}
	else if (pib1 < pib2)
	{printf("PIB cidade2 venceu \n" );}
	else 
	{printf("PIB cidade1 igual à da cidade2 venceu \n" );}
	
	if (pontosTuristicos1 > pontosTuristicos2)
	{printf("Pontos Turísticos cidade1 venceu \n" );}
	else if (pontosTuristicos1 < pontosTuristicos2)
	{printf("Pontos Turisticos cidade2 venceu \n" );}
	else 
	{printf("Pontos Turísticos da cidade1 = cidade2 \n" );}

	
		if (DensidadePop1 < DensidadePop2)
	{printf("Densidade populacional cidade 1 venceu \n" );}
	else if (DensidadePop1 > DensidadePop2)
	{printf("Densidade populacional cidade 2 venceu \n" );}
	else 
	{printf("Densidade populacional igual nas 2 cidades \n" );}

	if (PIBpercapta1 > PIBpercapta2)
	{printf("PIB percapta cidade1 venceu \n" );}
	else if (PIBpercapta1 < PIBpercapta2)
	{printf("PIB percapta cidade2venceu \n" );}
	else 
	{printf("PIBpercaptaigual nas 2 cidades \n" );}

		if (superpoder1 > superpoder2)
	{printf("cidade1 GRANDE VENCEDORA  \n" );}
	else if (superpoder1 < superpoder2)
	{printf("cidad2 GRANDE VENCEDORA  \n" );}
	else 
	{printf("EMPATE SuperPodes igual nas 2 cidades \n" );}

}
