//Multierceptron Lógica Propagação XOR
//Murilo Vieira Pizzamiglio 829189

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float B=10, W1=5, W2=6,t=10,W3=9,W4=3,t2=2,W5=4,W6=2,t3=1, E1, E2, S;
    float w1[4][3], w2[4][2];
    float I[4][4], O[4][4];


    w1[1][1]=W1*B;
    w1[2][1]=W2*B;
    w1[3][1]=t*(-B);

    w1[1][2]=W3*(-B);
    w1[2][2]=W4*(-B);
    w1[3][2]=t2*B;

    w2[1][1]=W5*(-B);
    w2[2][1]=W6*(-B);
    w2[3][1]=t3*B;



    printf("Informe o Valor do I1/E1:");
    scanf("%f", &E1);

    printf("Informe o valor de I2/E2:");
    scanf("%f", &E2);

    //Calculando O1
    I[1][1]=E1;
    I[1][2]=E2;
    I[1][3]=1.0;

    O[1][1]=I[1][1];
    O[1][2]=I[1][2];
    O[1][3]=I[1][3];

    //Calculando O2
    I[2][1]=(O[1][1]*w1[1][1]) + (O[1][2]*w1[2][1]) + (O[1][3]*w1[3][1]);
    I[2][2]=(O[1][1]*w1[1][2]) + (O[1][2]*w1[2][2]) + (O[1][3]*w1[3][2]);
    I[2][3]=1.0;

    O[2][1]=1.0/(1.0+exp(-I[2][1]));
    O[2][2]=1.0/(1.0+exp(-I[2][2]));
    O[2][3]=I[2][3];

    //Calculando O3
    I[3][1]=(O[2][1]*w2[1][1]) + (O[2][2]*w2[2][1]) + (O[2][3]*w2[3][1]);
    O[3][1]=1.0/(1.0+exp(-I[3][1]));

    printf("O valor de O3 sera: %6.f\n", O[3][1]);
    system("pause");
}
