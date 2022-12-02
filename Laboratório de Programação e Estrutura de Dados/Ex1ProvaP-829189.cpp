//Trabalho da prova parcial Exercicio 1 -Murilo Vieira Pizzamiglio - 829189
#include<stdio.h>
#include<stdlib.h>

main(){
	
	float conceito;
	
	printf("Informe a nota de conceito ENADE continuo: ");
	scanf("%f", &conceito);
	
	system("cls");
	if(conceito < 0.945)
	{
		printf("O conceito ENADE sera faixa (1)\n");
	}
	else if(conceito >= 0.945 && conceito < 1.945 )
	{
		printf("O conceito ENADE sera faixa (2)\n");
	}
	else if(conceito >= 1.945 && conceito < 2.945)
	{
		printf("O conceito ENADE sera faixa (3)\n");
	}
	else if(conceito >=2.945 && conceito < 3.945)
	{
		printf("O conceito ENADE sera faixa (4)\n");
	}
	else
	{
		printf("O conceito ENADE sera faixa (5)\n");
	}
	
	system("pause");
}
