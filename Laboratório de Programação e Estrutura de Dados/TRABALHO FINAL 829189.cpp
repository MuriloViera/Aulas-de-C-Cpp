/*Implementar um progma apara ler o nome e a idade de até 10 candidatos
a vaga de emprego,permitir lsitar os candidatos em ordem alfabética e em ordem de idade decrescente.
Premissos:
-trabalhar com estrutura de dados
-usar funçoes
-ter um menu para escolher as opçoes

Entregar hoje - 0.50 pontos(ultimos trabalhos)
*/

//declaraçao das variaveis
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int i=0,j,x;

struct cadastro
{
	char nome[50];
	int idade;
};

struct cadastro cadastro[10];

//prototipo das funçoes
int menu();
void inserir();
void consultaAlfabetica();
void consultaNumero();
void exibir();

//função principal
main()
{
	int opcao;
	

	do
	{	
		system("cls");
		opcao=menu();
		switch(opcao)
		{
			case 1:inserir();
			break;
			case 2:exibir();
			break;
			case 3:consultaAlfabetica();
			break;
			case 4:consultaNumero();
			break;
			case 0:exit(0);
			default:
				{
					printf("Opcao invalida");
				}	
		}
	}while(opcao!=0);
}

int menu()
{
	int escolha;
	
	printf("(1)Inserir canditado:\n(2)Exibir:\n(3)Consultar em ordem Alfabetica:\n(4)Consultar em ordem Numerica:\n~>");
	scanf("%i", &escolha);
	return escolha;
}

void exibir()
{
	int x;
	system("cls");
	for(x=0;x<i;x++)
	{
		printf("Nome do canditado %s\n",cadastro[x].nome);
		printf("Idade do canditado %i\n\n",cadastro[x].idade);
	}
	system("pause");
}

void inserir()
{
	char resposta;
	
	do
	{
		system("cls");
		printf("Insira o nome e a idade para o emprego %i",i+1);
		printf("\nInsira o nome:");
		fflush(stdin);
		gets(cadastro[i].nome);
		printf("\nInsira a idade:");
		scanf("%i", &cadastro[i].idade);
		printf("Deseja continuar?");
		resposta=getche();
		i++;
	}while(toupper(resposta)=='S'&&i<10);
}

void consultaNumero()
{
	struct cadastro aux;
	
	for(x=0;x<i;x++)
	{
		for(j=0;j<i;j++)
		{
			if(cadastro[x].idade<cadastro[j].idade)
			{
				aux=cadastro[x];
				cadastro[x]=cadastro[j];
				cadastro[j]=aux;
			}
		}
	}
	printf("Ordenacao feita!");
	system("pause");
}

void consultaAlfabetica()
{
	struct cadastro aux;
	
	for(x=0;x<i;x++)
	{
		for(j=0;j<i;j++)
		{
			if(strcmp(cadastro[x].nome,cadastro[j].nome)<0)
			{
				aux=cadastro[x];
				cadastro[x]=cadastro[j];
				cadastro[j]=aux;
			}
		}
	}
	printf("Ordenacao feita!");
	system("pause");
}
