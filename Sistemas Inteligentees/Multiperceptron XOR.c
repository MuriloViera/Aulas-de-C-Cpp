//Multierceptron Lógica FUZZ XOR
//Murilo Vieira Pizzamiglio 829189

#include <stdlib.h>
#include <stdio.h>

int main()
{
     int W1=5, W2=6,t=10,W3=9,W4=3,t2=2,W5=4,W6=2,t3=1, I1, I2, O1,O2,O3, S;

    printf("Informe o Valor do I1:");
    scanf("%i", &I1);

    printf("Informe o valor de I2:");
    scanf("%i", &I2);

    //Encontrar 01
    S=(I1*W1)+(I2*W2);
    if(S>t)
    {
        O1=1;
    }
    else{
        O1=0;
    }

    //Encontrar 02
    S=(I1*W3) + (I2*W4);
    if(S<t2)
    {
        O2=1;
    }
    else
    {
        O2=0;
    }

    //Encotrar O3
    S=(O1*W5) + (O2*W6);
    if(S<t3)
    {
        O3=1;
    }
    else
    {
        O3=0;
    }

    printf("O valor de O3 sera: %i", O3);
    system("pause");
}
