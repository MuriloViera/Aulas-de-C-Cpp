//Perceptron Lógica FUZZ com função lógica E
//Murilo Vieira Pizzamiglio 829189

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float B=10, W1=3, W2=5,t=6, I1, I2, O1, S;

    printf("Informe o Valor do I1:");
    scanf("%f", &I1);

    printf("Informe o valor de I2:");
    scanf("%f", &I2);

    S=(I1*W1)+(I2*W2);

    O1=1/(1+exp(-B*(S-t)));

    printf("O valor de O1 sera: %f\n", O1);

    system("pause");
}
