//Faça uma calculadora simples

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float num1,num2,resultado;
char operacao;

main()
{
	printf("Informe o primeiro numero:");
	scanf("%f", &num1);
	printf("Informe o segundo numero:");
	scanf("%f", &num2);
	printf("Informe a operacao:");
	operacao=getche();
	switch(operacao)
	{
		case '+':resultado=num1 + num2;
		break;
		case '-':resultado=num1-num2;
		break;
		case '*':resultado=num1*num2;
		break;
		case '/':resultado=num1/num2;
		break;
		default:
		{
			printf("Opcao invalida");
			break;
		}	
	}
	printf("\nResultado=%.2f", resultado);
	getchar();
}


