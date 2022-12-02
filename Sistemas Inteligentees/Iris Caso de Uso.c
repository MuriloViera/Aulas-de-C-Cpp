//Backpropagation Iris Caso de Uso
//Murilo Vieira Pizzamiglio

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i=0, j=0, l=0, cs, n=0, m=0;
    float erro;
    float I0[15],O0[15],I1[15],O1[15],I2[15],O2[15];
    float w1[15][14] ,w2[15][13];
    float nw1[15][14],nw2[15][13];
    float vw1[15][14],vw2[15][13];
    float d2[13],d1[14];

    float E1;
    float E2;
    float E3;
    float E4;
    float TG1[150];
    float TG2[150];
    float TG3[150];

    w1[1][1]=15.673861;
    w1[2][1]=15.494519;
    w1[3][1]=-69.059685;
    w1[4][1]=-33.586712;
    w1[5][1]=53.912930;
    w1[1][2]=2.785870;
    w1[2][2]=-4.399530;
    w1[3][2]=8.084250;
    w1[4][2]=7.381916;
    w1[5][2]=-2.214041;
    w1[1][3]=-3.523417;
    w1[2][3]=3.680157;
    w1[3][3]=-5.107809;
    w1[4][3]=-6.182369;
    w1[5][3]=1.585552;
    w2[1][1]=2.486537;
    w2[2][1]=-9.489991;
    w2[3][1]=5.521146;
    w2[4][1]=0.259167;
    w2[1][2]=9.066211;
    w2[2][2]=6.884691;
    w2[3][2]=-5.706069;
    w2[4][2]=-10.664857;
    w2[1][3]=-9.002197;
    w2[2][3]=2.914219;
    w2[3][3]=-4.993376;
    w2[4][3]=0.871038;

    //Fim da declaração de dados---------------------------------------------------

    //Inicio da inserção de dados--------------------------------------------------

        printf("\nInforme a largura sepal:");
        scanf("%f", &E1);
        printf("\nInforme o comprimento sepal:");
        scanf("%f", &E2);
        printf("\nInforme a largura petal:");
        scanf("%f", &E3);
        printf("\nInforme o comprimento petal:");
        scanf("%f", &E4);
        system("cls");

    //Fim da inserção--------------------------------------------------------------

    //Conversão-------------------------------------------------------------------
    E1=(E1-4.30)/(7.90-4.30);
    E2=(E2-2)/(4.40-2);
    E3=(E3-1)/(6.90-1);
    E4=(E4-0.10)/(2.50-0.10);
    //Fim da conversão------------------------------------------------------------

    //Inicio dos prints------------------------------------------------------------
        for(j=1;j<=3;j++){
                for(i=1;i<=5;i++){
                    printf("w1[%d][%d]=%f; \n", i,j,w1[i][j]);
                }
            }

        for(l=1;l<=3;l++){
            for(j=1;j<=4;j++){
                printf("w2[%d][%d]=%f; \n", j,l,w2[j][l]);
            }
        }
     //Fim dos prints---------------------------------------------------------------

            I0[1]=E1;
            I0[2]=E2;
            I0[3]=E3;
            I0[4]=E4;
            I0[5]=1.0;

            O0[1]=I0[1];
            O0[2]=I0[2];
            O0[3]=I0[3];
            O0[4]=I0[4];
            O0[5]=I0[5];

            //Os for de for vem aqui

            for(j=1;j<=3;j++){
                I1[j]=0.0;
                for(i=1;i<=5;i++){
                  I1[j]+=O0[i]*w1[i][j];
                }
                O1[j]=1.0/(1.0+exp(-I1[j]));
            }
            I1[4]=1.0;
            O1[4]=I1[4];

            for(l=1;l<=3;l++){
                I2[l]=0.0;
                for(j=1;j<=4;j++){
                    I2[l]+=O1[j]*w2[j][l];
                }
                O2[l]=1.0/(1.0+exp(-I2[l]));
            }

           printf("\nOs resultados serao:");
           printf("\n%.4f %.4f %.4f %.4f || %.1f %.1f %.1f\n",E1,E2,E3,E4,O2[1],O2[2],O2[3]);

           if(O2[1]>0.90){//Íris setosa
                printf("\n\nPara os valores inseridos, teremos uma IRIS SETOSA");
           }
           else if(O2[2]>0.90)//Íris versicolor
           {
                printf("\n\nPara os valores inseridos, teremos uma IRIS VERSICOLOR");
           }
           else//Íris virginica
           {
               printf("\n\nPara os valores inseridos, teremos uma IRIS VIRGINICA");
           }

           printf("\n");

}
