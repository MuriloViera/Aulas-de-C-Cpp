/*Prgoama para armazenar o nome do produto,a quantidade vendida e o valor do produto,listar todos os produtos vendidos,mostrar o valor total das vendas.Implementar
um menu para gerenciar as opções.Utilizar funçoes*/

//declaração das biliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declaração do ponteiro para o arquivo
FILE *arquivo;

//declaração das variaveis locais
int opcao, quantidade;
char resp, nome[31];
float valor;

//protótipos das funçoes
float total();
void cadastro();
int listar();
int menu();

//declçaraão da função principal
main()
{
	//declaração da variável local
	int opcao;

	//estrutura de repetiçao
	do
	{	
		opcao = menu();
		//estrutura condicional
		switch(opcao)
		{
			case 1: cadastro();
			break;
			case 2: 
				{
					if(listar()!=1)
					{
						printf("ERROR WITH THE ARQUIVO....\n");
						system("pause");
					}
				}
			break;
			case 3: 
				{
					printf("Total = %.2f", total());
					system("pause");
				}
			break;
			case 0: exit(0);
			default:
				{
					printf("Essa opcao nao existe");
					system("pause");
				}	
		}	
	}while(opcao != 0);
}

//função menu
int menu()
{
	//variavel local
	int opcao;
	system("cls");
	printf("<1>Cadastro produtos vendidos\n");
	printf("<2>Listar produtos vendidos\n");
	printf("<3>Totalizar produtos vendidos\n");
	printf("<0>Sair");
	scanf("%i", &opcao);
	return opcao;
}

//funçao cadastro
void cadastro()
{
	//abrir o arquivo par agravação
	arquivo = fopen("Produtos.txt", "a");
	
	//estrutura de repetição
	do
	{
		system("cls");
		printf("Informe o nome de produto: ");
		fflush(stdin);
		gets(nome);
		printf("Informe a quantidade de vendida: ");
		scanf("%i", &quantidade);
		printf("Informe o valor do produto vendido: ");
		scanf("%f", &valor);
		
		//aramzenar os dados em arquivo
		fprintf(arquivo,"%s %i %f",nome,quantidade,valor);
		
		printf("\nOutro cadastro?<S/N>");
		resp = getche();
	}while(toupper(resp)=='S');
	//fechar o arquivo
	fclose(arquivo);
}

int listar()
{
	//abertura do arquivo para leitura
	if((arquivo = fopen("Produtos.txt", "r"))==NULL)
		return 0;
	
	while((fscanf(arquivo, "%s %i %f",nome, &quantidade, &valor))!=EOF)
		{
			printf("\nNome: %s",nome);
			printf("\nQuantidade: %i",	quantidade);
			printf("\nValor: %.2f",valor);
		}	
		system("pause");
		
		//fechar o arquivo
		fclose(arquivo);
		return 1;
}

float total()
{
	//variavel local
	float soma= 0;

	//abertura do arquivo para leitura
	if((arquivo = fopen("Produtos.txt","r"))==NULL)
		return 0;
		
	//estrutura de repetiçao para fazer a somatória
	while((fscanf(arquivo,"%s %i %f",nome,&quantidade,&valor))!=EOF)
		soma+=quantidade*valor;
		
	//fechar o arquivo
	return soma;		
}
