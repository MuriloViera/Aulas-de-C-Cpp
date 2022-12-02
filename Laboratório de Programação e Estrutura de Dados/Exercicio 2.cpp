//Exercicio 2 Aluno:Murilo Vieira Pizzamiglio Cod:829189

//Declaração das bibliotecas
#include <stdlib.h>
#include <stdio.h>

//Declaração das variáveis
float comissao,venda;

//Declaração da função principal
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
