/*Algoritimo para armazernar informa��es em arquivo de maneira formatada - fun��o:fprintf() */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//decalra�a�o do ponteiro para o arquivo
FILE *arquivo;

//declara��o da fun��o principal
main()
{
	//declara��o das vari�veis
	char nome[31],resp;
	float peso,altura;
	
	//abertura do arquivo
	arquivo = fopen("Banco de Dados.txt","a");
	
	//estrutura de repeti��o para entrada de dados
	do 
	{
		system("cls");
		printf("Informe o nome da pessoa: ");
		fflush(stdin);
		gets(nome);
		printf("Informe o peso da pessoa: ");
		scanf("%f", &peso);
		printf("Informe a altura da pessoa: ");
		scanf("%f", &altura);
		
		//gravar as informa�oes em arquivo(formatadas)
		fprintf(arquivo,"%s %.2f %.2f",nome,peso,altura);
		
		//verificar se sera cadastrado outro
		printf("\nOutro resgitro <S/N>");
		resp=getche();
	}while(toupper(resp) == 'S');
	
	//fechar o arquivo
	fclose(arquivo);	
}

