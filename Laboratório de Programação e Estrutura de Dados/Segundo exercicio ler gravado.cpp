//progma apar aler as informa��es armazenadas em Arquivo

//declara��o das bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> //sleep

//declara��o do ponteiro
FILE *arquivo;

//Fun��o principal
main()
{
	//declara��o da variavel de saida
	char saida;

	//estrutura condicional para abertura do arquivo
	//verificar se o arquivo existe abri-lo para leitura
	if((arquivo=fopen("arquivo.txt","r"))==NULL)
	{
		printf("\nErro na abertura do arquivo....");
		sleep(3);
		exit(0);
	}

	//estrutura condicional para lera as informa�oes
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
