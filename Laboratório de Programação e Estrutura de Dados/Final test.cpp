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
		printf("\n(0)Sair");
		printf("Informe a sua escolha: ");
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
				temp=lista->prox;
				system("cls");
				printf("Informe o codigo do aluno: ");
				scanf("%i", &pesquisa);	
			
				while(temp->prox!=NULL)
				{
					if(temp->codigo!=pesquisa)
					{
					printf("Nao ha aluno com esse codigo");
					}
					else if(temp->codigo==pesquisa)
					{
					printf("Nota parcial do aluno:%.2f\n", temp->notaparcial);
					printf("Nota exame do aluno:%.2f\n", temp->notaexame);
					}				
				temp=temp->prox;
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
			printf("\nprimeiro while");
			while(temp!=NULL)
			{	
				printf("\nSegundo while");
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
				printf("\nif ref menor lado a lado");
				menor->ant=ref->ant;
				ref->prox=menor->prox;
				menor->prox->ant=ref;
				ref->ant->prox=menor;
				ref->ant=menor;
				menor->prox=ref;
				
				//resetar 
				ref=menor->prox;
				menor=ref;
				temp=ref->prox;
			}
			else if(menor!=ref)
			{
				printf("\nif menor diferente de ref");
				alunos *help;
				help=ref->prox;
				alunos *aux;
				aux=ref->ant;
				if(temp==NULL)
				{
				printf("\ntemp igual a nulo");
				menor->ant->prox=ref;
				ref->ant=menor->ant;
				menor->ant=aux;
				aux->prox=menor;
				help->ant=menor;
				ref->prox=menor->prox;
				menor->prox->ant=ref;
				menor->prox=help;
				
				//resetar
				ref=menor->prox;
				menor=ref;
				temp=ref->prox;
				}
				
			}
			else
			{
			printf("\nnao troca");        
			ref=menor->prox;
			menor=ref;
			temp=ref->prox;
			}
			printf("\n%i", ref->codigo);
			printf("\n%i", menor->codigo);
			printf("\n%i", temp->codigo);
			alunos *murilo;
			murilo=lista->prox;
			printf("\n");
			while(murilo!=NULL)
			{
				printf("%i  -  ", murilo->codigo);
				murilo=murilo->prox;
			}
		}
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
				while(ref!=fim)
				{
					if(aux!=fim)
					{
						if(ref->codigo > aux->codigo)
						{
							ref->prox=aux->prox;
							aux->prox->ant=ref;		
							aux->prox=ref;
							ref->ant->prox=aux;
							aux->ant=ref->ant;
							ref->ant=aux;
							aux=ref->prox;
						}
						else
						{
							aux=aux->prox;
							ref=ref->prox;
						}						
					}
					else
					{
						if(ref->codigo > aux->codigo)
						{
							if(fim->prox=NULL)//trocas com NULL
							{
							ref->prox=aux->prox;
							aux->ant=ref->ant;
							ref->ant->prox=aux;
							ref->ant=aux;
							aux->prox=ref; 
							}
							else//troca normal
							{
							ref->prox=aux->prox;
							aux->prox->ant=ref;		
							aux->prox=ref;
							ref->ant->prox=aux;
							aux->ant=ref->ant;
							ref->ant=aux;
							aux=ref->prox;	
							}
							
							//reset
							ref=lista->prox;
							aux=ref->prox;
						}
					}
				}	
			}	
			printf("Sequencia Ordenada!");
		}break;
		case(8):
		{
			exit(0);
		}	
	}
		printf("\nDeseja retornar ao menu?:<S/N>");
		controle=getche();
	}while(toupper(controle)=='S');
	system("pause");	
}

