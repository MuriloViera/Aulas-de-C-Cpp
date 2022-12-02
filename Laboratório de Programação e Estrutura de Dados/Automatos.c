#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

char palavra[50];

int main()
{
    int i=0,y;


    printf("Informe a palavra: ");
    scanf("%s", palavra);

    if(palavra[i]=='a') //IF DO A
    {
        i++;
        if(palavra[i]=='b') //IF DO B
        {
            i++;
            do
            {
                if(palavra[i]=='c')
                {
                    i++;
                }

            }while(palavra[i]=='c');

            y=i-1;

            if(y%2==0 && palavra[y]=='c') //IF DO C
            {
                if(palavra[i]=='d') //IF DO D
                {
                    i++;
                    if(palavra[i]=='e') //IF DO E
                    {
                        printf("O Automato reconhece a palavra inteira\n");
                    }
                    else //ELSE DO E
                    {
                        printf("O Automato nao reconhece a palavra\n");
                        return(0);
                    }
                }
                else //ELSE DO D
                {
                    printf("O Automato nao reconhece a palavra\n");
                    return(0);
                }
            }
            else //ELSE DO C
            {
                printf("O Automato nao reconhece a palavra\n");
                return(0);
            }
        }
        else //ELSE DO B
        {
            printf("O Automato nao reconhece a palavra\n");
            return(0);
        }
    }
    else //ELSE DO A
    {
        printf("O Automato nao reconhece a palavra\n");
         return(0);
    }

    system("pause");
}


