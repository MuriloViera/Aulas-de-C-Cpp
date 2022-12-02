/*Elaborar um algoritimo para receber a nota de 20 alunos,e mostrar quantos alunos tiraram nota
>=media*/

#include <stdio.h>
#include <stdlib.h>

float nota[20],media,soma=0;
int i, total=0;

main()
{
	for(i=0;i<20;i++)
	{
		system("cls");
		printf("Informe a nota %i: ",i+1);
		scanf("%f",&nota[i]);
	}
	for(i=0;i<20;i++)
	soma+=nota[i];
	
	media=soma/20;
	for(i=0;i<20;i++)
	{
		if(nota[i]>=media)
		total++;
	}
	printf("%i alunos tiraram nota >= media\n",total);
	system("pause");
	
	
}
