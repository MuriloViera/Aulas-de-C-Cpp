
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

FILE *arquivo;

main()
{
	char nome[50],resposta;
	float idade;
	
	arquivo=fopen("teste.txt","a");
	
	do{
		system("cls");
		printf("Informe o nome: ");
		fflush(stdin);
		gets(nome);
		printf("Informe a idade: ");
		scanf("%f", &idade);
		
		fprintf(arquivo,"%s %f",nome,idade);
		
		
		printf("Deseja inserir outra pessoa?:");
		resposta=getch();
	}while(toupper(resposta)=='S');
	
	system("pause");
	fclose(arquivo);
}
