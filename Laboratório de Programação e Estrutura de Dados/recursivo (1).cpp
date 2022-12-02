/*Calculo do fatorial - exemplo de fun�ao recursivo*/

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara�ao da fun�ao fatorial
int fatorial(int numero)
{
	if(numero != 0)
		//processo recursivo
		return numero *fatorial(numero-1);
	else
		return 1;	
}

//declara��o da fun�ao principal
main()
{
	//declara��o da varivel local
	int x;
	//entrada de dados
	printf("Informe o numero a ser calculado como fatorial: ");
	scanf("%i", &x);
	
	//estrutura condicional - calcular ou nao o fatorial
	if(x<0)
		printf("\nNao � possivel calcular o fatorial deste numero...\n");
	else
		printf("\nO fatorial de %i = %i\n",x,fatorial(x));
	system("pause");
}
