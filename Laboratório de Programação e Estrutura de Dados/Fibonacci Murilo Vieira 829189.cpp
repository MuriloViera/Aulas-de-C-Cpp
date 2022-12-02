//2-Realizar uma estrutura de Fibonacci
#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int n)
{
	if(n==1 || n==2)
		return 1;
	else	
		return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
	int numero,i;
	printf("Informe quantos termos do Fibonacci voce deseja:" );
	scanf("%i", &numero);
	
	if(numero==0)
		{
		printf("Sequencia de Fibonacci:0");
		exit(0);
		}
		
	printf("\nSequencia de Fibonacci: \n\n");
	
	for (i=0;i<numero;i++)
	{
		printf("%d",Fibonacci(i+1));
		printf("\n");
	}
	printf("\n");
	system("pause");
}
