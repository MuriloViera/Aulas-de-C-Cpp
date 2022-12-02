/*Fazer um algorítimo para deduzir o indice de Ph de uma substancia a partir do seu Ph*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Declaração das variáveis
float ph;

//Declaração da função principal
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
