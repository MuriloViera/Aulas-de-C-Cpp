#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


FILE *pontarq;

main()
{
char resp;
char digitar;
pontarq=fopen("amigos.txt","a");
	
	do{
	while((digitar=getche())!='\r')
	{
		putc(digitar,pontarq);
	}
		
	printf("Deseja adicionar mais algum amigo a lista?");
	resp=getche();	
	}while(toupper(resp)=='S');
	
	fclose(pontarq);
	system("pause");
}

