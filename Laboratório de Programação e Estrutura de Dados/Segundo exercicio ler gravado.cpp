//progma apar aler as informações armazenadas em Arquivo

//declaração das bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> //sleep

//declaração do ponteiro
FILE *arquivo;

//Função principal
main()
{
	//declaração da variavel de saida
	char saida;

	//estrutura condicional para abertura do arquivo
	//verificar se o arquivo existe abri-lo para leitura
	if((arquivo=fopen("arquivo.txt","r"))==NULL)
	{
		printf("\nErro na abertura do arquivo....");
		sleep(3);
		exit(0);
	}

	//estrutura condicional para lera as informaçoes
	//ate chegar no fim do arquivo (EOF)


	while((saida=getc(arquivo))!=EOF)
	{
		//mostrar na tela o caractere encontrado
		//enquanto nao for o final encontrado

		printf("%c", saida);
	}
	//fechar o arquivo
	fclose(arquivo);
}
