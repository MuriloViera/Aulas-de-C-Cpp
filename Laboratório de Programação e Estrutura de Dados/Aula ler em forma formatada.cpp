/*Algoritmos para ler as informa��es de um arquivo que cont�m informa��es armazenadas de maneira formatada */

//declara��o das bilbliotecas
#include <stdio.h>
#include <stdlib.h>


//decalra��o do ponteiro par ao arquivo
FILE *ponteiro;

//declara�ao da fun��o principal
main()
{
	//declara�ao das variaveis
	char nome[31];
	float peso,altura;
	
	//abertura do arquivo par aleitura
	if((ponteiro=fopen("Banco de Dados.txt","r"))==NULL)
	{
		printf("\nErro....");
		exit(0);
	}
	
	//estrutura de repeti�ao
	while((fscanf(ponteiro,"%s %f %f",nome, &peso, &altura))!=EOF);
		{
		printf("Nome: %s",nome);
		printf("\nPeso: %.2f",peso);
		printf("\nAltura: %.2f\n",altura);
		}
		system("pause");
		
		//fechar o arquivo
		fclose(ponteiro);
}
