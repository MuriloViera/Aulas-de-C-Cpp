/*Fazer um algor�timo para deduzir o indice de Ph de uma substancia a partir do seu Ph*/

//Declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Declara��o das vari�veis
float ph;

//Declara��o da fun��o principal
main()
{
	//Entrada de dados
	printf("\nInforme o Ph: ");
	scanf("%f", &ph);
	
	//Calcular o Indice do ph
	if(ph>7)
	{printf("\nO Indice do Ph = Acido\n\n");}
	
	else if(ph<7)
	{printf("\nO Indice do Ph = Basico\n\n");}
	
	else if(ph=7)
	{printf("\nO Indice do Ph = Neutro\n\n");}
	
	system("pause");
}
