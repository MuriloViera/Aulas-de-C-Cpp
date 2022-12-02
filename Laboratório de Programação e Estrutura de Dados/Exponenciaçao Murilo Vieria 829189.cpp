//1-Utilizando recursividade implemente uma funçao para calcular exponeciaçao
#include <stdio.h>
#include <stdlib.h>

float exponeciacao(int expoente)
{
		if(expoente==0)
			return 1;
		else	
			return numero * exponeciacao(numero,expoente-1);
}

int main()
{
	float num;
	int exp;
	
	printf("Informe o numero: ");
	scanf("%f", &num);
	printf("Informe o expoente: ");
	scanf("%i", &exp);
	
	if(num<0)
		printf("Operacao invalida");
	else	
		printf("A exponenciacao sera %.2f\n",exponeciacao(num,exp));
	system("pause");		
}
