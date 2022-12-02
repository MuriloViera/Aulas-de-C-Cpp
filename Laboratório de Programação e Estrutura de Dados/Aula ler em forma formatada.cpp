/*Algoritmos para ler as informações de um arquivo que contêm informações armazenadas de maneira formatada */

//declaração das bilbliotecas
#include <stdio.h>
#include <stdlib.h>


//decalração do ponteiro par ao arquivo
FILE *ponteiro;

//declaraçao da função principal
main()
{
	//declaraçao das variaveis
	char nome[31];
	float peso,altura;
	
	//abertura do arquivo par aleitura
	if((ponteiro=fopen("Banco de Dados.txt","r"))==NULL)
	{
		printf("\nErro....");
		exit(0);
	}
	
	//estrutura de repetiçao
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
