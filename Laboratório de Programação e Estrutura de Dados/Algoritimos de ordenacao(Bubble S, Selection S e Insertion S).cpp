#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

struct cadastro
{
	int codigo;
	float notaparcial,notaexame;

	struct cadastro *prox;
	struct cadastro *ant;
};
typedef struct cadastro alunos;

int opcao,pesquisa,procurar,aut;
char controle;
bool teste = true;

main()
{
	alunos *lista=(alunos*)malloc(sizeof(alunos));
		if(!lista)
		{
			printf("Nao ha memoria");
			exit(1);
		}
		else
		{
		lista->prox=NULL;
		lista->ant=NULL;
		}


	do
	{
		system("cls");
		printf("Menu de opcoes:");
		printf("\n(1)Inserir aluno e suas informacoes");
		printf("\n(2)Imprimir todos os alunos");
		printf("\n(3)Consultar aluno especifico");
		printf("\n(4)Remover aluno");
		printf("\n(5)Imprimir alunos na ordem reversa");
		printf("\n(6)Selection");
		printf("\n(7)Bubble");
		printf("\n(8)Insertion");
		printf("\n(0)Sair");
		printf("\nInforme a sua escolha: ");
		scanf("%i", &opcao);

		switch(opcao)
		{
			case(1):
			{
				alunos *novo=(alunos*)malloc(sizeof(alunos));
				if(!novo)
				{
					printf("Nao ha memoria");
                    exit(1);
			    }

			    else
			    {
					system("cls");
			    	printf("Informe o codigo do aluno: ");
			    	scanf("%i", &novo->codigo);
			    	printf("\nInforme a nota parcial: ");
			    	scanf("%f", &novo->notaparcial);
			    	printf("\nInforme a nota exame: ");
			    	scanf("%f", &novo->notaexame);
			    	novo->prox=NULL;
					if(lista->prox==NULL)
			    	{
					 lista->prox=novo;
					 novo->ant=lista;
					}
					else
					{
						alunos *temp;
				    	temp=lista;
				    	while(temp->prox!=NULL)
				    	{
				    		temp=temp->prox;
						}
						temp->prox=novo;
						novo->ant=temp;
                	}
				}
			break;
			}
		case(2):
			{
			alunos*temp;
			if(lista->prox==NULL)
				{
					printf("Nao ha alunos");
				}
			else
				{
					system("cls");
					temp=lista->prox;
					while(temp!=NULL)
					{
					printf("\nO codigo do aluno e: %i\n", temp->codigo);
					printf("A nota parcial do aluno e: %.2f\n", temp->notaparcial);
					printf("A nota exame do aluno e: %.2f\n", temp->notaexame);
					temp=temp->prox;

					}

				}
			break;
			}
		case(3):
		{
			alunos *temp;
			temp=lista;
			if(temp->prox==NULL)
			{
                printf("Nao ha dados");
			}
			else
			{

				system("cls");
				printf("Informe o codigo do aluno: ");
				scanf("%i", &pesquisa);

				while(temp->prox!=NULL)
				{
				    temp=temp->prox;
					if(temp->codigo==pesquisa)
					{
					    teste = false;
					    printf("Nota parcial do aluno:%.2f\n", temp->notaparcial);
                        printf("Nota exame do aluno:%.2f\n", temp->notaexame);
					}
				}

				if(teste == true){
                    printf("Não há alunos com esse codigo");
				}

			}
			break;
		 }
		 case(4):
		{
		 system("cls");
		 alunos *temp;
		 alunos *aux;
		 temp = lista;
		 if(temp->prox==NULL)
		 {
		 	printf("Nao possui dados desse aluno no sistema...");
		 }
		 else
		 {
		 	temp = lista->prox;
		 	aux = lista;
		 	printf("Informe o codigo do aluno a remover: ");
		 	scanf("%i", &procurar);
		 	int aut=1;

		 	while(temp != NULL)
		 	{
		 		if(temp->codigo==procurar)
		 		{
		 			aux->prox=temp->prox;
		 			aut=0;
		 			free(temp);
		 			printf("O aluno foi removido com sucesso!",procurar);
		 			temp=NULL;
		 			aut=0;
				 }
				else
				{
					temp=temp->prox;
					aux=aux->prox;
				}
			 }
		 	if(aut==1)
		 	{
		 		printf("\nO aluno nao esta no cadastro");
			}
		 }
       }break;
       case (5):
    	{
       		alunos *temp;
       		temp=lista;
       		while(temp->prox!=NULL){
       			temp=temp->prox;
			   }
				printf("\nO codigo do aluno e: %i", temp->codigo);
				printf("\nA nota parcial do aluno e: %.2f", temp->notaparcial);
				printf("\nA nota exame do aluno e: %.2f", temp->notaexame);
			while(temp->ant!=lista){
				temp=temp->ant;
				printf("\nO codigo do aluno e: %i", temp->codigo);
				printf("\nA nota parcial do aluno e: %.2f", temp->notaparcial);
				printf("\nA nota exame do aluno e: %.2f", temp->notaexame);
				}
		}break;
		case(6):
		{
			alunos *temp;
			alunos *ref;
			alunos *menor;

			ref=lista->prox;
			menor=ref;
			temp=ref->prox;

		while(ref->prox!=NULL)
		{

			while(temp!=NULL)
			{

				if(menor->codigo > temp->codigo)
				{
					menor=temp;
					temp=temp->prox;

				}

				else
				{
					temp=temp->prox;
				}
			}

			if(ref->prox==menor)
			{
				if(menor->prox==NULL)
				{
					ref->ant->prox=menor;
					menor->ant=ref->ant;
					ref->prox=menor->prox;
					menor->prox=ref;
					ref->ant=menor;
				}
				else
				{
				menor->ant=ref->ant;
				ref->prox=menor->prox;
				menor->prox->ant=ref;
				ref->ant->prox=menor;
				ref->ant=menor;
				menor->prox=ref;
				}
				//resetar
				ref=menor->prox;
				menor=ref;
				temp=ref->prox;
			}
			else if(menor!=ref)
			{
				if(menor->prox==NULL)
				{
					alunos *help;
					help=ref->prox;

					ref->prox=menor->prox;
					help->ant=menor;
					menor->ant=ref->ant;
					ref->ant->prox=menor;
					ref->ant=help;
					help->prox=ref;
					menor->prox=help;
				}
				else
				{
				alunos *help;
				help=ref->prox;
				alunos *aux;
				aux=ref->ant;

				menor->ant->prox=ref;
				ref->ant=menor->ant;
				menor->ant=aux;
				aux->prox=menor;
				help->ant=menor;
				ref->prox=menor->prox;
				menor->prox=help;
				}

				//resetar
				ref=menor->prox;
				menor=ref;
				temp=ref->prox;
			}
			else
			{
			ref=menor->prox;
			menor=ref;
			temp=ref->prox;
			}

		}
		system("cls");
		printf("Lista ordenada!");
		break;
		}
		case(7):
		{
			alunos *ref;
			alunos *aux;
			alunos *fim;
			fim=lista;

			ref=lista->prox;
			aux=ref->prox;

			while(fim->prox!=NULL)
			{
				fim=fim->prox;
			}
			while(fim->ant!=lista)
			{
				while(ref->ant!=fim)
				{
					if(ref->codigo > aux->codigo)
					{
						if(aux->prox==NULL)
						{
							ref->prox=aux->prox;
							aux->prox=ref;
							ref->ant->prox=aux;
							aux->ant=ref->ant;
							ref->ant=aux;
							aux=ref->prox;
						}
						else
						{
							ref->prox=aux->prox;
							aux->prox->ant=ref;
							aux->prox=ref;
							ref->ant->prox=aux;
							aux->ant=ref->ant;
							ref->ant=aux;
							aux=ref->prox;
						}
					}
					else if(aux==fim)
					{
						fim=ref->ant;
					}
					else
					{
						aux=aux->prox;
						ref=ref->prox;
					}
				}
				fim=ref;
				ref=lista->prox;
				aux=ref->prox;
			}
			system("cls");
			printf("Sequencia Ordenada!");
		}break;
		case(8):
		{
			alunos *ref;
			alunos *temp;
			alunos *aux;

			temp=lista->prox;
			aux=temp->prox;

			while(temp->prox!=NULL)
			{
				if(temp->codigo > aux->codigo)
				{

					//caso nao seja NULL
					if(aux->prox!=NULL)
					{
						temp->prox=aux->prox;
						aux->prox->ant=temp;
						aux->prox=temp;
						temp->ant->prox=aux;
						aux->ant=temp->ant;
						temp->ant=aux;
						ref=aux->ant;

					}
					else
					{

						temp->prox=aux->prox;
						aux->prox=temp;
						temp->ant->prox=aux;
						aux->ant=temp->ant;
						temp->ant=aux;
						aux=temp->prox;
						ref=aux->ant;
					}

					while(ref->codigo > aux->codigo && ref!=lista)
					{
						if(aux->prox!=NULL)
						{
							ref->ant->prox=aux;
							aux->ant=ref->ant;
							ref->prox=aux->prox;
							aux->prox->ant=ref;
							ref->ant=aux;
							aux->prox=ref;
							ref=aux->ant;
						}
						else
						{
							ref->ant->prox=aux;
							aux->ant=ref->ant;
							ref->prox=aux->prox;
							ref->ant=aux;
							aux->prox=ref;
							ref=aux->ant;
						}
					}
					aux=temp->prox;
				}
				else
				{
					aux=aux->prox;
					temp=temp->prox;
				}
			}
			printf("Ordem Realizada!");
		}break;
	}
		printf("\nDeseja retornar ao menu?:<S/N>");
		controle=getche();
	}while(toupper(controle)=='S');
	system("pause");
}

