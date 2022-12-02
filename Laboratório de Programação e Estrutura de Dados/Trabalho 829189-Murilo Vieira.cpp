//Trabalho Edilson Murilo Vieira Pizzamiglio 829189
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char sexo,resposta=0;
int i,gripeFS=0,tetanoFS=0,gripeMS=0,tetanoMS=0,gripeFN=0,tetanoFN=0,gripeMN=0,tetanoMN=0;
float percentagem;

main(){
	for(i=1;i<=10;i++)
	{
		printf("Informe o sexo do %i funcionario<M/F>: ", i);
		sexo=getche();
	
		if(toupper(sexo)=='M')
		{
			system("cls");
			printf("O cliente ja tomou vacina contra tetano?<S/N>");
			resposta=getche();
			if(toupper(resposta)=='S')
			{
				tetanoMS++;
			}
			else
			{
				tetanoMN++;
			}
			system("cls");
		
			printf("O cliente ja tomou vacina contra gripe?<S/N>");
			resposta=getche();
			if(toupper(resposta)=='S')
			{
				gripeMS++;
			}
			else
			{
				gripeMN++;
			}
			system("cls");
		}
		else
		{
			system("cls");
			printf("A cliente ja tomou vacina contra tetano?<S/N>");
			resposta=getche();
			if(toupper(resposta)=='S')
			{
				tetanoFS++;
			}
			else
			{
				tetanoFN++;
			}
		
			system("cls");
			printf("A cliente ja tomou vacina contra gripe?<S/N>");
			resposta=getche();
			if(toupper(resposta)=='S')
			{
				gripeFS++;
			}
			else
			{
				gripeFN++;
			}
			system("cls");
		}
	}
	
	printf("Total de funcionarios do sexo Feminino que responderam Sim para a vacina contra gripe: %2.i", gripeFS);
	printf("\nTotal de funcionarios do sexo Masculino que responderam Nao para a vacina contra tetano: %2.i", tetanoMN);
	
	percentagem=(gripeMS+gripeFS+tetanoMS+tetanoFS)*100/(gripeMS+gripeMN+gripeFS+gripeFN+tetanoMS+tetanoMN+tetanoFS+tetanoFN);
	printf("\nA porcentagem de funcionarios que responderam sim para ambas as vacinas em porcentagem : %2.f %%\n", percentagem);
	system("pause");
}


