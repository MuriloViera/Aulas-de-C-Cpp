//Treino de Rand
//829189
//Murilo Vieira Pizzamiglio

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, l, cs, n=0;
    float erro;
    float E1[4]={0.0,0.0,1.0,1.0};
    float E2[4]={0.0,1.0,0.0,1.0};
    float TG[4]={0.0,1.0,1.0,0.0};

    float w1[3][3], w2[3][3];
    float I[3][3], O[3][3];

    //Gerar valor randomicos
    do{
        w1[0][0]=(rand()/32767.0)*40.0-20.0;
        w1[1][0]=(rand()/32767.0)*40.0-20.0;
        w1[2][0]=(rand()/32767.0)*40.0-20.0;

        w1[0][1]=(rand()/32767.0)*40.0-20.0;
        w1[1][1]=(rand()/32767.0)*40.0-20.0;
        w1[2][1]=(rand()/32767.0)*40.0-20.0;

        w2[0][0]=(rand()/32767.0)*40.0-20.0;
        w2[1][0]=(rand()/32767.0)*40.0-20.0;
        w2[2][0]=(rand()/32767.0)*40.0-20.0;

        erro=0.0;
        for(cs=0;cs<4;cs++){

            //Calculando O1(O0)
            I[0][0]=E1[cs];
            I[0][1]=E2[cs];
            I[0][2]=1.0;

            O[0][0]=I[0][0];
            O[0][1]=I[0][1];
            O[0][2]=I[0][2];

            //Calculando O2(O1)
            I[1][0]=(O[0][0]*w1[0][0]) + (O[0][1]*w1[1][0]) + (O[0][2]*w1[2][0]);
            I[1][1]=(O[0][0]*w1[0][1]) + (O[0][1]*w1[1][1]) + (O[0][2]*w1[2][1]);
            I[1][2]=1.0;

            O[1][0]=1.0/(1.0+exp(-I[1][0]));
            O[1][1]=1.0/(1.0+exp(-I[1][1]));
            O[1][2]=I[1][2];

            //Calculando O3(O2)
            I[2][0]=(O[1][0]*w2[0][0]) + (O[1][1]*w2[1][0]) + (O[1][2]*w2[2][0]);
            O[2][0]=1.0/(1.0+exp(-I[2][0]));

            erro+=(TG[cs]-O[2][0])*(TG[cs]-O[2][0]);
        }//Close for do CS

        erro=erro/4.0;
        n++;
        printf("Resultado epoca[%d]: erro= %f \n", n, erro);



    }while(erro>0.0001);

    for(j=0;j<2;j++){
        for(i=0;i<3;i++){
            printf("w1[%d][%d]=%f; \n", i,j,w1[i][j]);
        }
    }
    for(l=0;l<1;l++){
        for(j=0;j<3;j++){
            printf("w2[%d][%d]=%f; \n", j,l,w2[j][l]);
        }
    }
}
