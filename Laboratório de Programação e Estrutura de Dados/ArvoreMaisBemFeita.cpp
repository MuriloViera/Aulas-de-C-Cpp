#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

struct no
{
	int valor;
	
	struct cadastro *prox;
	struct cadastro *ant;	
};
typedef struct no no;

int opcao;
char controle;

main()
{
	n� *raiz(n�*)malloc(sizeof(n�));
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
		
		printf("Informe o valor da raiz: ");
		scanf("%i", &raiz->valor);
	
	do
	{
		system("cls");
		printf("Menu de opcoes");
		printf("1)Inserir um n� na arvore ");
		printf("0)Sair");
		printf("Informe a sua escolha:");
		scanf("%i", &opcao);
		
		switch(opcao)
		{
			case(1):
				{
					n� *novo(n�)malloc(sizeof(n�));
					if(!novo)
					{
						printf("Erro");
					}
					else
					{
						printf("Informe o valor do novo n�");
						scanf("%i", &novo->valor);
						novo->prox=NULL;
						novo->ant=NULL;
						
						n� *temp;
						temp=raiz;
					
						while(temp->prox!=NULL || temp->ant!=NULL)
						{
							while(novo->valor > temp->valor) //para a direita
							{
								if(temp->prox==NULL)
								{
									temp->prox=novo;
									temp=temp->prox;
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
								}
								else
								{
									temp=temp->ant;
								}
							}
						}
						
					}
				}
				break;		
		}
		printf("\nDeseja retornar ao menu?:<S/N>");
		controle=getche();
	}while(toupper(controle)=='S');
	system("pause");	
}
	

