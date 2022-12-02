/*Calculo do fatorial - exemplo de funçao recursivo*/

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaraçao da funçao fatorial
int fatorial(int numero)
{
	if(numero != 0)
		//processo recursivo
		return numero *fatorial(numero-1);
	else
		return 1;	
}

//declaração da funçao principal
main()
{
	//declaração da varivel local
	int x;
	//entrada de dados
	printf("Informe o numero a ser calculado como fatorial: ");
	scanf("%i", &x);
	
	//estrutura condicional - calcular ou nao o fatorial
	if(x<0)
		printf("\nNao é possivel calcular o fatorial deste numero...\n");
	else
		printf("\nO fatorial de %i = %i\n",x,fatorial(x));
	system("pause");
}
