//Trabalho 20/11/2018 - Daniel Luís Ferreira 830367
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int perfil=0;

typedef struct usuario {
	char nome[30];
	char login[30];
	char senha[30];
	int perfil;
} usuario;

typedef struct ordem {
	int numero;
	char tecnico[30];
	char data[15];
	char desc[150];
}ordem;

int menu(int perfil){
	int escolha;
	printf("1 - Cadastrar ordem de servico\n2 - Consultar ordem de servico\n3 - Listar ordens de servico");
	if(perfil == 0){
		printf("\n4 - Cadastrar usuario");
	}
	printf("\n0 - Sair\n>> ");
	scanf("%i", &escolha);
	
	if(escolha == 4 && perfil == 1){
		system("cls");
		printf("Acesso negado!");
		system("pause");
		return menu(perfil);
	} else {
		return escolha;
	}
}

void cadastrar_os(){
	FILE *pontarq = fopen("ordens.txt", "r");
	ordem novo, ultimo;
	
	if(pontarq == NULL) {
		pontarq = fopen("ordens.txt", "w");
		novo.numero = 1;
	} else {
		while(fread(&ultimo, sizeof(ultimo), 1, pontarq)){
			novo.numero = ultimo.numero + 1;
		}
	}
	
	printf("Informe a data: ");
	fflush(stdin);
	gets(novo.data);
	printf("Informe o nome do tecnico: ");
	fflush(stdin);
	gets(novo.tecnico);
	printf("Informe a descricao da ordem de servico: ");
	fflush(stdin);
	gets(novo.desc);
	
	fclose(pontarq);
	pontarq = fopen("ordens.txt", "a");
	fwrite(&novo, sizeof(novo), 1, pontarq);
	fclose(pontarq);
}

void consultar(){
	FILE *pontarq = fopen("ordens.txt", "r");
	ordem ultimo;
	int presente = 0, procura;
	
	printf("Informe o numero ordem: ");
	scanf("%i", &procura);
	
	system("cls");
	if(pontarq == NULL) {
		printf("Nao ha registros.");
	} else {
		while(fread(&ultimo, sizeof(ultimo), 1, pontarq)){
			if(ultimo.numero == procura){
				printf("Numero da ordem: %i\tData: %s\tTecnico: %s\n\n%s\n", ultimo.numero, ultimo.data, ultimo.tecnico, ultimo.desc);
				presente = 1;
			}
		}
		
		if(presente == 0){
			printf("Ordem de servico nao encontrada.");
		}
	}
	system("pause");
	fclose(pontarq);
}

void listar(){
	FILE *pontarq = fopen("ordens.txt", "r");
	ordem ultimo;
	
	if(pontarq == NULL) {
		printf("Nao ha registros.");
		system("pause");
	} else {
		while(fread(&ultimo, sizeof(ultimo), 1, pontarq)){
			printf("Numero da ordem: %i\tData: %s\tTecnico: %s\n", ultimo.numero, ultimo.data, ultimo.tecnico);
		}
	}
	system("pause");
	fclose(pontarq);
}

void cadastrar_usuario(){
	FILE *pontarq = fopen("usuarios.txt", "a");
	usuario novo;
	
	printf("Informe o nome do novo usuario: ");
	fflush(stdin);
	gets(novo.nome);
	printf("Informe o login: ");
	fflush(stdin);
	gets(novo.login);
	printf("Informe a senha: ");
	fflush(stdin);
	gets(novo.senha);
	printf("Informe o tipo de perfil\n0 - Administrador\n1 - Tecnico\n>> ");
	scanf("%i", &novo.perfil);
	
	fwrite(&novo, sizeof(novo), 1, pontarq);
	fclose(pontarq);
}

main(){
	FILE *pontarq = fopen("usuarios.txt", "r");
	int escolha;
	
	if (pontarq == NULL){
		FILE *pontarq = fopen("usuarios.txt", "w");
		usuario novo;
		
		printf("Informe o nome do novo usuario: ");
		fflush(stdin);
		gets(novo.nome);
		printf("Informe o login: ");
		fflush(stdin);
		gets(novo.login);
		printf("Informe a senha: ");
		fflush(stdin);
		gets(novo.senha);
		novo.perfil = 0;
		
		fwrite(&novo, sizeof(novo), 1, pontarq);
		fclose(pontarq);
		system("cls");
		
	} else {
		//login usuario
		char login[30], senha[30];
		usuario ultimo;
		int presente = 0;
		fclose(pontarq);
		
		while(presente==0){
			pontarq = fopen("usuarios.txt", "r");
			printf("Informe o login: ");
			fflush(stdin);
			gets(login);
			printf("Informe a senha: ");
			fflush(stdin);
			gets(senha);
			while(fread(&ultimo, sizeof(ultimo), 1, pontarq)){
				if(strcmp(ultimo.login, login) == 0 && strcmp(ultimo.senha, senha) == 0){
					printf("Login efetuado com sucesso!\n");
					perfil = ultimo.perfil;
					system("pause");
					presente = 1;
				}
			}
			if(presente == 0){
				printf("Credenciais incorretas.\n");
				system("pause");
			}
			system("cls");
			fclose(pontarq);
		}
	}
	
	while(true){
		escolha = menu(perfil);
		system("cls");
		
		switch(escolha){
			case 1:
				cadastrar_os();
				break;
			case 2:
				consultar();
				break;
			case 3:
				listar();
				break;
			case 4:
				cadastrar_usuario();
				break;
			case 0:
				fclose(pontarq);
				exit(0);
				break;
			default:
				printf("\nOpcao Invalida");
		}
		system("cls");
	}
}
