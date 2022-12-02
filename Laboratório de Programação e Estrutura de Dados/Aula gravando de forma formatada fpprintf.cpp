/*Algoritimo para armazernar informações em arquivo de maneira formatada - função:fprintf() */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//decalraçaão do ponteiro para o arquivo
FILE *arquivo;

//declaração da função principal
main()
{
	//declaração das variáveis
	char nome[31],resp;
	float peso,altura;
	
	//abertura do arquivo
	arquivo = fopen("Banco de Dados.txt","a");
	
	//estrutura de repetição para entrada de dados
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
		
		//gravar as informaçoes em arquivo(formatadas)
		fprintf(arquivo,"%s %.2f %.2f",nome,peso,altura);
		
		//verificar se sera cadastrado outro
		printf("\nOutro resgitro <S/N>");
		resp=getche();
	}while(toupper(resp) == 'S');
	
	//fechar o arquivo
	fclose(arquivo);	
}

