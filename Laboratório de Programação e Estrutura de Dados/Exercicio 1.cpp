//Exercicio 1 Aluno:Murilo Vieira Pizzamiglio Cod:829189

//Declaração das bibliotecas
#include <stdlib.h>
#include <stdio.h>

//Declaração das variáveis
int votos,i,bom=0,ruim=0,fraco=0,otimo=0,regular=0;

//Declaração da função principal
main()
{
	//Estrutura de repetição
	for(i=1;i<=20;i++)
	{
		//Entrada de dados
		printf("Informe o voto do aluno %i (1-Ruim/2-Fraco/3-Regular/4-Bom/5-Otimo)",i);
		scanf("%i", &votos);
		
		//Estrutura condicional
		if(votos == 1)
		ruim++;
		else if(votos == 2)
        fraco++;
		else if(votos ==3)
		regular++;
		else if(votos == 4)
		bom++;
		else if(votos == 5)
		otimo++;
		else
		printf("\n\nVoto invalido\n\n");
				
	}
    
//Saida de dados
printf("O total de votos sera:\n\nRuim=%i\n\nFraco=%i\n\nRegular=%i\n\nBom=%i\n\nOtimo=%i\n\n",ruim,fraco,regular,bom,otimo);
system ("pause");
}



