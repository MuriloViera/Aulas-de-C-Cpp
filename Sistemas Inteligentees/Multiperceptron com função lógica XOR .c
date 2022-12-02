//Multierceptron Lógica FUZZ XOR com função lógica
//Murilo Vieira Pizzamiglio 829189

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float B=10, W1=5, W2=6,t=10,W3=9,W4=3,t2=2,W5=4,W6=2,t3=1, I1, I2, O1,O2,O3, S;

    printf("Informe o Valor do I1:");
    scanf("%f", &I1);

    printf("Informe o valor de I2:");
    scanf("%f", &I2);

    //Encontrar 01
    S=(I1*W1)+(I2*W2);
    O1=1/(1+exp(-B*(S-t)));

    //Encontrar 02
    S=(I1*W3) + (I2*W4);
    O2=1/(1+exp(-(-B)*(S-t2)));

    //Encotrar O3
    S=(O1*W5) + (O2*W6);
    O3=1/(1+exp(-(-B)*(S-t3)));

    printf("O valor de O3 sera: %f\n", O3);
    system("pause");
}
