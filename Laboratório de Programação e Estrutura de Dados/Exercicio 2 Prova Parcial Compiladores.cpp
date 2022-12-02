#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#define MAX 50

char palavra[50];
int c,i,y;

typedef struct {
   int elemento[MAX];
   int topo;
}TPilha;

int main(){
    TPilha pilha;
    pilha.topo=-1;
    printf("Informe a expressao: \n");
    scanf("%s", &palavra);
    c=strlen(palavra);

    for(i=1;i<c;i++)
    {
        if(palavra[i]=='(' )
        {
            pilha.topo=pilha.topo+1;
            pilha.elemento[pilha.topo]=palavra[i];
        }
        else if(palavra[i]==')' )
        {
            if(pilha.topo<0)
            {
                printf("A expressao esta desbalanceada");
                return(0);
            }
            pilha.topo=pilha.topo-1;
        }
    }

    if(pilha.topo<0)
    {
        printf("A expressao esta balanceada\n");
    }
    else
    {
        printf("A expressao esta desbalanceada, existem mais ( do que )");
    }
    system("pause");
}
