//Progma apara gravar em arquivo em modo texto caractere por caractere

//declara��ao das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//declara��o do ponteiro para arquivo
FILE *arquivo;

//declara��o da fun��o principal
main()
{
	//declara��o da variavel para entrada de dados
	char entrada;
	
	setlocale(LC_ALL, "portuguese");
	
	//abrir o arquivo para grava��o - modo 'w'
	arquivo = fopen("arquivo.txt", "w");
	
	//estrutura de repti��o para entrada de dados e armazenamento no arquivo
	while((entrada=getche())!='\r')
		putc(entrada,arquivo);
	putc(' ', arquivo);
		
	//fechar o arquivo aberto para grava��o - modo 'w'
	fclose(arquivo);	
}
