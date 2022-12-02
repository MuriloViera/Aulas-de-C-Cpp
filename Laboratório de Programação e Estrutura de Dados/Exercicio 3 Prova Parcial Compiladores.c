#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

char palavra[50];
int controle=0,c,i=0,g=0;

int main()
{
    printf("Informe a palavra:");
    scanf("%s", &palavra);
    c=strlen(palavra);


    for(i=0;i<c;i++)
    {
        switch(controle)
        {
        case 0:
            if(palavra[i]=='f' || palavra[i]=='p')
            {
                controle=1;
            }
            else
            {
                controle=7;
            }
            break;

         case 1:
            if(palavra[i]=='p' || palavra[i]=='r')
            {
                controle=2;
            }
            else
            {
                controle=7;
            }
            break;

         case 2:
            if(palavra[i]=='r' || palavra[i]=='i')
            {
                controle=3;
            }
            else
            {
                controle=7;
            }

            break;

         case 3:
            if(palavra[i]=='i' || palavra[i]=='n')
            {
                controle=4;
            }
            else
            {
                controle=7;
            }

            break;

         case 4:
            if(palavra[i]=='n' || palavra[i]=='t')
            {
                controle=5;

            }
            else
            {
                controle=7;
            }

            break;

         case 5:
             if(palavra[i]=='t' || palavra[i]=='f')
            {

                controle=6;
            }
            else
            {
                controle=7;
            }
            break;

         case 6:
            if(i<c)
            {
                controle=7;
            }
            break;
        }
    }

    if(controle==7)
    {
        printf("Palavra invalida\n");
    }
    else if(c==6 || c==5)
    {
        printf("Palavra validada\n");
    }
    else
    {
         printf("Palavra inválida\n");
    }


system("pause");

}
