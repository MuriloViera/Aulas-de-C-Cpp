#include <stdio.h>
#include <stdlib.h>

float jose=1.50,pedro=1.10;
int ano;

main()
{
	while(pedro<jose)
	{
		jose=jose+0.02;
		pedro=pedro+0.03;
		ano=ano+1;
	}
	printf("Sao necessarios %i anos\n", ano);
	system("pause");
	
}
