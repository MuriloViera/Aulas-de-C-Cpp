//Progma apara gravar em arquivo em modo texto caractere por caractere

//declaraççao das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//declaração do ponteiro para arquivo
FILE *arquivo;

//declaração da função principal
main()
{
	//declaração da variavel para entrada de dados
	char entrada;
	
	setlocale(LC_ALL, "portuguese");
	
	//abrir o arquivo para gravação - modo 'w'
	arquivo = fopen("arquivo.txt", "w");
	
	//estrutura de reptição para entrada de dados e armazenamento no arquivo
	while((entrada=getche())!='\r')
		putc(entrada,arquivo);
	putc(' ', arquivo);
		
	//fechar o arquivo aberto para gravação - modo 'w'
	fclose(arquivo);	
}
