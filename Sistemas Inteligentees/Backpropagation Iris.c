//Backpropagation Iris Completo
//Murilo Vieira Pizzamiglio 829189

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

    float E1[150];
    float E2[150];
    float E3[150];
    float E4[150];
    float TG1[150];
    float TG2[150];
    float TG3[150];

    //------------------LER-----------------------------
       FILE *in;

       if ((in =fopen("date_iris_n.txt", "rt"))== NULL)
       {
          printf("Cannot open input file.\n");
          return 1;
       }

       while(!feof(in)){
          fscanf(in,"%f%f%f%f%f%f%f",&E1[i],&E2[i],&E3[i],&E4[i],&TG1[i],&TG2[i],&TG3[i]);
          i++;
                          }

        for(j=0;j<(i-1);j++){
        printf("%d %f %f %f %f %f %f %f\n",j,E1[j],E2[j],E3[j],E4[j],TG1[j],TG2[j],TG3[j]);
                }

       fclose(in);
    //--------------------FIM LER---------------------------------

    //---------------------W RANDS--------------------------------

    for(j=1; j<=3 ; j++){
            for(i=1;i<=5;i++){
                w1[i][j]=(rand()/32767.0)*4.0-2.0;
                vw1[i][j]=0.0;
            }
    }

    for(l=1; l<=3; l++){
        for(j=1; j<=4; j++){
            w2[j][l]=(rand()/32767.0)*4.0-2.0;
            vw2[j][l]=0.0;
        }
    }

    //--------------------FIM W RANDS---------------------------------

    for(m=0;m<=1000;m++){
        erro=0.0;
        for(n=0;n<=1000;n++){ //Se nao convergir posso aumentar aqui

            cs=rand()%150;

            I0[1]=E1[cs];
            I0[2]=E2[cs];
            I0[3]=E3[cs];
            I0[4]=E4[cs];
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

            //----------backpropagation--------------------------------

            d2[1]=(TG1[cs]-O2[1])*O2[1]*(1.0-O2[1]);
            d2[2]=(TG2[cs]-O2[2])*O2[2]*(1.0-O2[2]);
            d2[3]=(TG3[cs]-O2[3])*O2[3]*(1.0-O2[3]);

            d1[1]=O1[1]*(1.0-O1[1])*(d2[1]*w2[1][1] + d2[2]*w2[1][2] + d2[3]*w2[1][3]);
            d1[2]=O1[2]*(1.0-O1[2])*(d2[1]*w2[2][1] + d2[2]*w2[2][2] + d2[3]*w2[2][3]);
            d1[3]=O1[3]*(1.0-O1[3])*(d2[1]*w2[3][1] + d2[2]*w2[3][2] + d2[3]*w2[3][3]);

            for(l=1;l<=3;l++){
                for(j=1;j<=4;j++){
                    nw2[j][l]=w2[j][l]+0.5*d2[l]*O1[j]+0.5*vw2[j][l];
                    vw2[j][l]=nw2[j][l]-w2[j][l];
                    w2[j][l]=nw2[j][l];
                }
            }

            for(j=1;j<=3;j++){
                for(i=1;i<=5;i++){
                    nw1[i][j]=w1[i][j]+0.5*d1[j]*O0[i]+0.5*vw1[i][j];
                    vw1[i][j]=nw1[i][j]-w1[i][j];
                    w1[i][j]=nw1[i][j];
                }
            }

            //----------------------Fim backpropagation--------------------------------------

            erro+= (TG1[cs]-O2[1])*(TG1[cs]-O2[1]) + (TG2[cs]-O2[2])*(TG2[cs]-O2[2]) + (TG3[cs]-O2[3])*(TG3[cs]-O2[3]);
        }//n
        erro=erro/1000.0;
        printf("%d %f \n",m,erro);
    }//m

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

        //Aqui vem a parte que to com pregui�a de fazer agora
        //Aqui vem a diferen�a do de uso para o treinamento
        for(m=0;m<=149;m++){
            I0[1]=E1[m];
            I0[2]=E2[m];
            I0[3]=E3[m];
            I0[4]=E4[m];
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

           printf("%d %.4f %.4f %.4f %.4f || %f %f %f\n",m,E1[m],E2[m],E3[m],E4[m],O2[1],O2[2],O2[3]);
        }
}
