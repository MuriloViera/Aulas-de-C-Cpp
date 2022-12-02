//Perceptron Lógica FUZZ E
//Murilo Vieira Pizzamiglio 829189

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int W1=3, W2=5,t=6, I1, I2, O1, S;

    printf("Informe o Valor do I1:");
    scanf("%i", &I1);

    printf("Informe o valor de I2:");
    scanf("%i", &I2);

    S=(I1*W1)+(I2*W2);

    if(S>t)
    {
        O1=1;
    }
    else{
        O1=0;
    }

    printf("O valor de O1 sera: %i", O1);

    system("pause");
}
