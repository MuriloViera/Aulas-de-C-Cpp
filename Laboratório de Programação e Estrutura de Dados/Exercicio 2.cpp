//Exercicio 2 Aluno:Murilo Vieira Pizzamiglio Cod:829189

//Declara��o das bibliotecas
#include <stdlib.h>
#include <stdio.h>

//Declara��o das vari�veis
float comissao,venda;

//Declara��o da fun��o principal
main()
{
	//Entrada de dados
	printf("Informe o custo da venda: ");
	scanf("%f", &venda);
	
	//Estrutura condicional
	if (venda > 100000)
	comissao=venda*0.12;
	else if(venda >= 50000)
	comissao=venda*0.095;
	else
	comissao=venda*0.07;
	
	//Saida de dados
	printf("\nO custo da comissao sera de : %.2f\n\n",comissao);
	system("pause");
}
