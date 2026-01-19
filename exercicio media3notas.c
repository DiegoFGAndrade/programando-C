/******************************************************************************

Aluno Diego Felipe Gimenez de Andrade
MatrC-cula 202507372408
perC-odo 2026.1

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50]; //tem que definir o tamanho, caso contrC!rio sC3 1 caractere
	float nota1; //float serve para armazenar nC:meros com casas decimais (nC:meros bquebradosb).
	float nota2; //float serve para armazenar nC:meros com casas decimais (nC:meros bquebradosb).
	float nota3; //float serve para armazenar nC:meros com casas decimais (nC:meros bquebradosb).
	float SOMA; //float serve para armazenar nC:meros com casas decimais (nC:meros bquebradosb).
	float MEDIA; //float serve para armazenar nC:meros com casas decimais (nC:meros bquebradosb).


	printf("calculador de mC)dia escolar atC) 3 notas \n") ;

	printf("Digite nota1 - use . e não , nos decimais \n") ;
	scanf("%f", &nota1);


	printf("Digite nota2 - use . e não , nos decimais\n");
	getchar(); // limpa o buffer  antes da fgets se nao da erro
	scanf("%f", &nota2);


	printf("Digite nota3 - use . e não , nos decimais \n");
	getchar(); // limpa o buffer  antes da fgets se nao da erro
	scanf("%f", &nota3);

	SOMA = (nota1+ nota2+ nota3); // NCO ACHEI FUNCCO SOMA
	MEDIA = SOMA/3;

	printf("O somatorio das notas C): %.2f e a media C): %.2f\n", SOMA, MEDIA);

	return 0;
}