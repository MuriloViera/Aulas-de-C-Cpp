#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

struct no
{
	int valor;
	int impresso;
	
	struct no *prox;
	struct no *ant;	
};
typedef struct no no;

int opcao,remote=0;
char controle;


void imprimir(no*raizt)
{
	
	if(raizt->ant==NULL)
	{
		printf("\n(%i)",raizt->valor);
		raizt->impresso=1;
	}
	else
	{
		imprimir(raizt->ant);
	}
	
	if(raizt->prox!=NULL)
	{
		if(raizt->impresso!=1)
		{
			printf("\n(%i)",raizt->valor);
			raizt->impresso=1;
			imprimir(raizt->prox);
			
		}
		else
		{
			printf("\n(%i)", raizt->valor);
			raizt->impresso=1;
		}	
		
	}
	else
	{
		if(raizt->impresso!=1)
		{
			printf("\n(%i)", raizt->valor);
		}
		
	}
	return;
}



	main()
	{
	no *raiz=(no*)malloc(sizeof(no));
		if(!raiz)
		{
			printf("Nao ha raiz");
			exit(1);
		}
		else
		{
		raiz->prox=NULL;	
		raiz->ant=NULL;
		}
		printf("\\Raiz nao encontrada,porfavor informe uma//\n");
		printf("Informe o valor da raiz: ");
		scanf("%i", &raiz->valor);
	
	do
	{
		system("cls");
		printf("\\Menu de opcoes//\n");
		printf("1)Inserir um no na arvore\n");
		printf("2)Mostrar ordem\n");
		printf("0)Sair\n");
		printf("Informe a sua escolha:");
		scanf("%i", &opcao);
		
		switch(opcao)
		{
			case(1):
				{
					no *novo=(no*)malloc(sizeof(no));
					if(!novo)
					{
						printf("Erro");
					}
					else
					{
						system("cls");
						printf("Informe o valor do novo no:");
						scanf("%i", &novo->valor);
						novo->prox=NULL;
						novo->ant=NULL;
						
						no *temp;
						temp=raiz;
						
						int remote=0;
					
		
						do
						{
							while(novo->valor > temp->valor) //para a direita
							{
								if(temp->prox==NULL)
								{
									temp->prox=novo;
									temp=temp->prox;
									remote=1;
								}
								else
								{
									temp=temp->prox;
								}
							}
							while(novo->valor < temp->valor)//para esquerda
							{
								if(temp->ant==NULL)
								{
									temp->ant=novo;
									temp=temp->ant;
									remote=1;
								}
								else
								{
									temp=temp->ant;
								}
							}
							
						}while(remote==0);
						
						temp=raiz;
					}
				}
				break;
			case(2):
				{
					no *temp;
					temp=raiz;
					imprimir(raiz);
				}break;	
		}
		printf("\nDeseja retornar ao menu?:<S/N>");
		controle=getche();
	}while(toupper(controle)=='S');
	system("pause");	
}


