//Trabalho da prova parcial Exercicio 1 -Murilo Vieira Pizzamiglio - 829189
#include<stdio.h>
#include<stdlib.h>

main()
{
	int i,numero,impar=0,par=0;
		
	for(i=1;i<=15;i++)
	{
		printf("Informe o %i numero inteiro:", i);
		scanf("%i", &numero);
		if(numero % 2 == 0)
		{
			par++;
		}
		else
		{
			impar++;
		}
		system("cls");		
	}
	
	printf("O total de numeros pares sera de : %i\n", par);
	
	printf("O total de numeros impares sera de : %i", impar);
	
	system("pause");
}
