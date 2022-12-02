#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

FILE *arquivo;

main()
{
	float idade;
	char nome[50];
	
	arquivo=fopen("teste.txt","r");
	
	while((fscanf(arquivo,"%s %f",nome, &idade))!=EOF);
	{
		printf("Nome: %s", nome);
		printf("\nIdade: %f", idade);
		
	}
	system("pause");
	fclose(arquivo);
}
