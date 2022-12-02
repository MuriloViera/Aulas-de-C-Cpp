/*Desenvolver um sistema para gerenciar as ordem de servi�os de chamados para �rea de TI.
O sistema dever� atender as seguintes premissas:
1-O sistema dever� ser acessado apenas por usu�rios.O primeiro usu�rio a ser criado obrigatoriamente ser� um administrador
2-O sistema dever� possuir um menu com as op��es:
	1-Cadastrar ordem de servi�o
	2-Consultar ordem de servi�o(pelo numero da OS)
	3-Listar ordesn de servi�o
	4-Cadastrar usu�rio(op�ao exclusiva para administradores)
	0-Sair
3-O numero da OS dever� ser gerado automaticamente
4-Armazena dos usu�rios:o nome,o login, a senha e o perfil(1-Tecnico ou 0-administrador)
5-Armazena das ordens de servi�o:o numero(automatico),a data,a descri�ao e o tecnico que registrou.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

//Estruturas 
struct cadastro{
	char descricao[60],tecnico[100],data[100];
	int numero;
};
struct cadastro cadastro;

struct adm{
	char nome[25],login[25],senha[10];
	int perfil;
};
struct adm adm;

//Funcao menu
int menuOnly()
{
	int escolha;
	
	printf("(1)Cadastrar Ordem de Servico\n");
	printf("(2)Consultar Ordem de Servico\n");
	printf("(3)Listar Ordens de Servico\n");
	printf("(4)Cadastrar Usuario\n(ESTA OPCAO E VALIDA SOMENTE A ADMINISTRADORES)\n");
	printf("(0)Sair");
	scanf("%i", &escolha);
	return escolha;
}

//Fun�ao cadastrar
void CadastroAdm()
{
			FILE *arquivo;
			arquivo=fopen("Usuario.txt","a");
			printf("Informe o nome do usuario: ");
			fflush(stdin);
			gets(adm.nome);
			printf("Informe o login do usuario: ");
			fflush(stdin);
			gets(adm.login);
			printf("Informe a senha:");
			fflush(stdin);
			gets(adm.senha);
			adm.perfil=0;
			fwrite(&adm, sizeof(adm),1,arquivo);
			fclose(arquivo);
}

//Funcao sequencia
int sequencia()
{
	FILE *pontarq;
	int aux;
	if((pontarq=fopen("Sequencia.txt","a"))==NULL)
	{
		pontarq=fopen("Sequencia.txt","a");
		aux=1;
		fprintf(pontarq,"%i",aux);
	}
	else
	{
		FILE *pontarq;
		while((fscanf(pontarq,"%i", &aux))!=EOF)
			fscanf(pontarq,"%i",aux);
		aux++;
		fclose(pontarq);
		
		
		pontarq=fopen("Sequencia.txt","w");
		fprintf(pontarq,"%i",aux);
		fclose(pontarq);
	
	}
	return aux;
}

//Funcao ordem
void ordem()
{
char resposta;
FILE *arquivo;
arquivo=fopen("Ordem_Servi�o.txt","a");
		
		system("cls");
		printf("Informe a data: ");
		fflush(stdin);
		gets(cadastro.data);
		printf("\nInforme o tecnico: ");
		fflush(stdin);
		gets(cadastro.tecnico);
		printf("\nInforme a descricao: ");
		fflush(stdin);
		gets(cadastro.descricao);
		cadastro.numero=sequencia();
		fwrite(&cadastro,sizeof(cadastro),1,arquivo);
		
		printf("Deseja criar outra Ordem?<S/N>");
		resposta==getche();


}

//Funcao cadastrar
void Cadastrar()
{
	FILE *arquivo;
	arquivo=fopen("Usuario.txt","a");
	printf("Informe o nome do usuario: ");
	fflush(stdin);
	gets(adm.nome);
	printf("Informe o login do usuario: ");
	fflush(stdin);
	gets(adm.login);
	printf("Informe a senha:");
	fflush(stdin);
	gets(adm.senha);
	printf("Informe o tipo de usuario<1-Tecnico/0-Administrador>");
	scanf("%i", &adm.perfil);
	fwrite(&adm, sizeof(adm),1,arquivo);
	fclose(arquivo);
}

//Fun��o consultar
void consulta()
{
	int aux=0, busca;
	
	FILE *ponteiro;
	ponteiro= fopen("Ordem_Servi�o.txt", "r");
	printf("Informe o numero a ser procurado: ");
	scanf("%i", &busca);
	system("cls");
	if(ponteiro == NULL) 
	{
		printf("Numero nao registrado.");
	} 
	else 
	{
		while(fread(&cadastro, sizeof(cadastro), 1, ponteiro))
		{
			if(cadastro.numero==busca)
			{
				printf("Numero da ordem: %i\n", cadastro.numero);
				printf("Data: %s\n",cadastro.data);
				printf("Descricao: %s\n",cadastro.descricao);
				printf("Tecnico: %s\n",cadastro.tecnico);
				aux=1;
			}
		}
		if(aux == 0)
		{
			printf("Ordem de servico invalida.");
		}
	}
	system("pause");
	fclose(ponteiro);
}

//Fun�ao listar
void listar()
{
	FILE *pontarq;
	pontarq=fopen("Ordem_Servi�o.txt", "r");
	if(pontarq == NULL)
	{
		printf("Ordem nao registrada.");
		system("pause");
	} 
	else
	{
		while(fread(&cadastro, sizeof(cadastro),1,pontarq))
		{
			printf("Numero da ordem: %i\n", cadastro.numero);
			printf("Data: %s\n",cadastro.data);
			printf("Tecnico: %s\n",cadastro.tecnico);
	}
	system("pause");
	fclose(pontarq);
	}
}

//Funcao principal
int main()
{
	FILE *arquivo;
	if((arquivo=fopen("Usuario.txt","r"))==NULL)
		{
			arquivo=fopen("Usuario.txt","a");
			fclose(arquivo);
			printf("O primeiro usuario sera criado,sendo um  Administrador\n");
			CadastroAdm();
		}
	else
		{
			char consultaL[20];
			char consultaS[20];
			printf("Informe o login: ");
			fflush(stdin);
			gets (consultaL);
			printf("\nInforme a senha: ");
			fflush(stdin);
			gets(consultaS);
			while(fread(&adm,sizeof(adm),1,arquivo)==1)
			{
				if(strcmp(adm.login,consultaL)==0)
				{
					
					if(strcmp(adm.senha,consultaS)==0)
					{
						printf("Acesso Permitido!\n");
						system("pause");
						system("cls");
						if(adm.perfil==0)
						{
							int escolha;
							do
							{
								escolha=menuOnly();
								switch(escolha)
								{
									case 1:ordem();
									break;
									case 2:consulta();
									break;
									case 3:listar();
									break;
									case 4:Cadastrar();
										{
											
										}
									break;
									case 0:
										{
											fclose(arquivo);
											exit(0);
										}
									break;
									default:printf("\n\nOpcao invalida...\n\n");	
								}
							}while(escolha);
							
						}
						else 
						{
							int escolha;
							do
							{
								escolha=menuOnly();
								switch(escolha)
								{
									case 1:ordem();
									break;
									case 2:consulta();
									break;
									case 3:listar();
									break;
									case 4:
										printf("Opcao invalida para tecnicos.....");
										system("pause");
										exit(0);
									case 0:
										{
											exit(0);
										}
									break;
									default:printf("Opcao invalida");	
								}
							}while(escolha);
						}
						
					}
				}
			}
		system("pause");
		fclose(arquivo);	
		}	
}
	
