//Murilo Vieira Pizzamiglio 829189

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#define PI 3.14159265


//MATRIZ[LINHA][COLUNA]


//Declaração de variáveis
int eixos, i, j, k;
float seno;
float angulo;


float o[7], d[7], a[7], c[7];
float matriz1[4][4], matriz2[4][4], matriz3[4][4],matriz4[4][4], matriz5[4][4], matriz6[4][4], matriz12[4][4], matriz34[4][4],matriz123[4][4],matriz0[4][4], matriz05[4][4], matriz56[4][4], matriz00[4][4];


int main(){

    angulo=180*(PI/180);//Converter o valor para angulo
    seno=cos(angulo);

    printf("Informe a quantidade de eixos(2-6):");
    scanf("%i", &eixos);

    system("cls");

    //Switch para Obtenção dos parâmetros
    switch(eixos){
        case 2:
            for(i=1; i<3; i++){
                printf("Informe o valor do parametro angulo teta%i: ", i);
                scanf("%f", &o[i]);
                printf("Informe o valor do parametro d%i: ", i);
                scanf("%f", &d[i]);
                printf("Informe o valor do parametro angulo alfa%i: ", i);
                scanf("%f", &c[i]);
                printf("Informe o valor do parametro a%i: ", i);
                scanf("%f", &a[i]);
                system("cls");

                //Converter os angulos para graus
                o[i]=o[i]*(PI/180);
                c[i]=c[i]*(PI/180);
            }
            break;

        case 3:
            for(i=1; i<4; i++){
                printf("Informe o valor do parametro angulo teta%i: ", i);
                scanf("%f", &o[i]);
                printf("Informe o valor do parametro d%i: ", i);
                scanf("%f", &d[i]);
                printf("Informe o valor do parametro angulo alfa%i: ", i);
                scanf("%f", &c[i]);
                printf("Informe o valor do parametro a%i: ", i);
                scanf("%f", &a[i]);
                system("cls");

                //Converter os angulos para graus
                o[i]=o[i]*(PI/180);
                c[i]=c[i]*(PI/180);
            }
            break;

        case 4:
            for(i=1; i<5; i++){
                printf("Informe o valor do parametro angulo teta%i: ", i);
                scanf("%f", &o[i]);
                printf("Informe o valor do parametro d%i: ", i);
                scanf("%f", &d[i]);
                printf("Informe o valor do parametro angulo alfa%i: ", i);
                scanf("%f", &c[i]);
                printf("Informe o valor do parametro a%i: ", i);
                scanf("%f", &a[i]);
                system("cls");

                //Converter os angulos para graus
                o[i]=o[i]*(PI/180);
                c[i]=c[i]*(PI/180);

            }
            break;

        case 5:
            for(i=1; i<6; i++){
                printf("Informe o valor do parametro angulo teta%i: ", i);
                scanf("%f", &o[i]);
                printf("Informe o valor do parametro d%i: ", i);
                scanf("%f", &d[i]);
                printf("Informe o valor do parametro angulo alfa%i: ", i);
                scanf("%f", &c[i]);
                printf("Informe o valor do parametro a%i: ", i);
                scanf("%f", &a[i]);
                system("cls");

                //Converter os angulos para graus
                o[i]=o[i]*(PI/180);
                c[i]=c[i]*(PI/180);

            }
            break;

        case 6:
            for(i=1; i<7; i++){
                printf("Informe o valor do parametro angulo teta%i: ", i);
                scanf("%f", &o[i]);
                printf("Informe o valor do parametro d%i: ", i);
                scanf("%f", &d[i]);
                printf("Informe o valor do parametro angulo alfa%i: ", i);
                scanf("%f", &c[i]);
                printf("Informe o valor do parametro a%i: ", i);
                scanf("%f", &a[i]);
                system("cls");

                //Converter os angulos para graus
                o[i]=o[i]*(PI/180);
                c[i]=c[i]*(PI/180);
            }
            break;
    }
    //Fim do Switch para Obtenção dos parâmetros

    printf("Caso o valor inserido seja menor do que 4, ignorar a impressao das outras matrizes que nao foram requisitadas!!!");

    //Montar e imprimir matriz1
    printf("\nMATRIZ 1:\n");
    matriz1[0][0]=cos(o[1]);
    matriz1[0][1]=(-cos(c[1]))*sin(o[1]);
    matriz1[0][2]=sin(c[1])*sin(o[1]);
    matriz1[0][3]=a[1]*cos(o[1]);
    matriz1[1][0]=sin(o[1]);
    matriz1[1][1]=cos(c[1])*cos(o[1]);
    matriz1[1][2]=(-sin(c[1]))*cos(o[1]);
    matriz1[1][3]=a[1]*sin(o[1]);
    matriz1[2][0]=0;
    matriz1[2][1]=sin(c[1]);
    matriz1[2][2]=cos(c[1]);
    matriz1[2][3]=d[1];
    matriz1[3][0]=0;
    matriz1[3][1]=0;
    matriz1[3][2]=0;
    matriz1[3][3]=1;

    for(j=0;j<4;j++){
        for(k=0;k<4;k++){
            printf("[%.2f] ", matriz1[j][k]);
        }
        printf("\n");
    }
    //Finalizar a montagem e print matriz1

    //Printar e montar a matriz2
    printf("\nMATRIZ 2:\n");
    matriz2[0][0]=cos(o[2]);
    matriz2[0][1]=(-cos(c[2]))*sin(o[2]);
    matriz2[0][2]=sin(c[2])*sin(o[2]);
    matriz2[0][3]=a[2]*cos(o[2]);
    matriz2[1][0]=sin(o[2]);
    matriz2[1][1]=cos(c[2])*cos(o[2]);
    matriz2[1][2]=(-sin(c[2]))*cos(o[2]);
    matriz2[1][3]=a[2]*sin(o[2]);
    matriz2[2][0]=0;
    matriz2[2][1]=sin(c[2]);
    matriz2[2][2]=cos(c[2]);
    matriz2[2][3]=d[2];
    matriz2[3][0]=0;
    matriz2[3][1]=0;
    matriz2[3][2]=0;
    matriz2[3][3]=1;

    for(j=0;j<4;j++){
        for(k=0;k<4;k++){
            printf("[%.2f] ", matriz2[j][k]);
        }
        printf("\n");
    }
    //Fim do print e montagem matriz2

    //Printar e montar a matriz3
    printf("\nMATRIZ 3:\n");
    matriz3[0][0]=cos(o[3]);
    matriz3[0][1]=(-cos(c[3]))*sin(o[3]);
    matriz3[0][2]=sin(c[3])*sin(o[3]);
    matriz3[0][3]=a[3]*cos(o[3]);
    matriz3[1][0]=sin(o[3]);
    matriz3[1][1]=cos(c[3])*cos(o[3]);
    matriz3[1][2]=(-sin(c[3]))*cos(o[3]);
    matriz3[1][3]=a[3]*sin(o[3]);
    matriz3[2][0]=0;
    matriz3[2][1]=sin(c[3]);
    matriz3[2][2]=cos(c[3]);
    matriz3[2][3]=d[3];
    matriz3[3][0]=0;
    matriz3[3][1]=0;
    matriz3[3][2]=0;
    matriz3[3][3]=1;

    for(j=0;j<4;j++){
        for(k=0;k<4;k++){
            printf("[%.2f] ", matriz3[j][k]);
        }
        printf("\n");
    }
    //Fim do print e montagem matriz3

    //Printar e montar a matriz4
    printf("\nMATRIZ 4:\n");
    matriz4[0][0]=cos(o[4]);
    matriz4[0][1]=(-cos(c[4]))*sin(o[4]);
    matriz4[0][2]=sin(c[4])*sin(o[4]);
    matriz4[0][3]=a[4]*cos(o[4]);
    matriz4[1][0]=sin(o[4]);
    matriz4[1][1]=cos(c[4])*cos(o[4]);
    matriz4[1][2]=(-sin(c[4]))*cos(o[4]);
    matriz4[1][3]=a[4]*sin(o[4]);
    matriz4[2][0]=0;
    matriz4[2][1]=sin(c[4]);
    matriz4[2][2]=cos(c[4]);
    matriz4[2][3]=d[4];
    matriz4[3][0]=0;
    matriz4[3][1]=0;
    matriz4[3][2]=0;
    matriz4[3][3]=1;

    for(j=0;j<4;j++){
        for(k=0;k<4;k++){
            printf("[%.2f] ", matriz4[j][k]);
        }
        printf("\n");
    }
    //Fim do print e montagem matriz4

    //Printar e montar a matriz5
    printf("\nMATRIZ 5:\n");
    matriz5[0][0]=cos(o[5]);
    matriz5[0][1]=(-cos(c[5]))*sin(o[5]);
    matriz5[0][2]=sin(c[5])*sin(o[5]);
    matriz5[0][3]=a[5]*cos(o[5]);
    matriz5[1][0]=sin(o[5]);
    matriz5[1][1]=cos(c[5])*cos(o[5]);
    matriz5[1][2]=(-sin(c[5]))*cos(o[5]);
    matriz5[1][3]=a[5]*sin(o[5]);
    matriz5[2][0]=0;
    matriz5[2][1]=sin(c[5]);
    matriz5[2][2]=cos(c[5]);
    matriz5[2][3]=d[5];
    matriz5[3][0]=0;
    matriz5[3][1]=0;
    matriz5[3][2]=0;
    matriz5[3][3]=1;

    for(j=0;j<4;j++){
        for(k=0;k<4;k++){
            printf("[%.2f] ", matriz5[j][k]);
        }
        printf("\n");
    }
    //Fim do print e montagem matriz5

    //Printar e montar a matriz6
    printf("\nMATRIZ 6:\n");
    matriz6[0][0]=cos(o[6]);
    matriz6[0][1]=(-cos(c[6]))*sin(o[6]);
    matriz6[0][2]=sin(c[6])*sin(o[6]);
    matriz6[0][3]=a[6]*cos(o[6]);
    matriz6[1][0]=sin(o[6]);
    matriz6[1][1]=cos(c[6])*cos(o[6]);
    matriz6[1][2]=(-sin(c[6]))*cos(o[6]);
    matriz6[1][3]=a[6]*sin(o[6]);
    matriz6[2][0]=0;
    matriz6[2][1]=sin(c[6]);
    matriz6[2][2]=cos(c[6]);
    matriz6[2][3]=d[6];
    matriz6[3][0]=0;
    matriz6[3][1]=0;
    matriz6[3][2]=0;
    matriz6[3][3]=1;

    for(j=0;j<4;j++){
        for(k=0;k<4;k++){
            printf("[%.2f] ", matriz6[j][k]);
        }
        printf("\n");
    }
    //Fim do print e montagem matriz6

    printf("\n\nAgora, mostraremos o produtos das raizes:\n");
    system("pause");
    system("cls");
    //Calcular o produto final
    switch(eixos){
    case 2://CASE 2--------------------------------------------------------------------------------
        //Multiplicar matriz 1 pela 2
        i=0;
        for(j=0;j<4;j++){
            matriz12[0][0]+=(matriz1[i][j]*matriz2[j][i+0]);
            matriz12[0][1]+=(matriz1[i][j]*matriz2[j][i+1]);
            matriz12[0][2]+=(matriz1[i][j]*matriz2[j][i+2]);
            matriz12[0][3]+=(matriz1[i][j]*matriz2[j][i+3]);

            matriz12[1][0]+=(matriz1[i+1][j]*matriz2[j][i+0]);
            matriz12[1][1]+=(matriz1[i+1][j]*matriz2[j][i+1]);
            matriz12[1][2]+=(matriz1[i+1][j]*matriz2[j][i+2]);
            matriz12[1][3]+=(matriz1[i+1][j]*matriz2[j][i+3]);

            matriz12[2][0]+=(matriz1[i+2][j]*matriz2[j][i+0]);
            matriz12[2][1]+=(matriz1[i+2][j]*matriz2[j][i+1]);
            matriz12[2][2]+=(matriz1[i+2][j]*matriz2[j][i+2]);
            matriz12[2][3]+=(matriz1[i+2][j]*matriz2[j][i+3]);

            matriz12[3][0]+=(matriz1[i+3][j]*matriz2[j][i+0]);
            matriz12[3][1]+=(matriz1[i+3][j]*matriz2[j][i+1]);
            matriz12[3][2]+=(matriz1[i+3][j]*matriz2[j][i+2]);
            matriz12[3][3]+=(matriz1[i+3][j]*matriz2[j][i+3]);
        }

        printf("\nMATRIZ 1*2:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz12[j][k]);
            }
            printf("\n");
        }

        printf("\nOs valores X, Y, Z:");
        printf("\n[X]=[%.2f]", matriz12[0][3]);
        printf("\n[Y]=[%.2f]", matriz12[1][3]);
        printf("\n[Z]=[%.2f]", matriz12[2][3]);
        break;

    //CASE 3--------------------------------------------------------------------------------
    case 3:
        //Calcular a 1-2
        i=0;
        for(j=0;j<4;j++){
            matriz12[0][0]+=(matriz1[i][j]*matriz2[j][i+0]);
            matriz12[0][1]+=(matriz1[i][j]*matriz2[j][i+1]);
            matriz12[0][2]+=(matriz1[i][j]*matriz2[j][i+2]);
            matriz12[0][3]+=(matriz1[i][j]*matriz2[j][i+3]);

            matriz12[1][0]+=(matriz1[i+1][j]*matriz2[j][i+0]);
            matriz12[1][1]+=(matriz1[i+1][j]*matriz2[j][i+1]);
            matriz12[1][2]+=(matriz1[i+1][j]*matriz2[j][i+2]);
            matriz12[1][3]+=(matriz1[i+1][j]*matriz2[j][i+3]);

            matriz12[2][0]+=(matriz1[i+2][j]*matriz2[j][i+0]);
            matriz12[2][1]+=(matriz1[i+2][j]*matriz2[j][i+1]);
            matriz12[2][2]+=(matriz1[i+2][j]*matriz2[j][i+2]);
            matriz12[2][3]+=(matriz1[i+2][j]*matriz2[j][i+3]);

            matriz12[3][0]+=(matriz1[i+3][j]*matriz2[j][i+0]);
            matriz12[3][1]+=(matriz1[i+3][j]*matriz2[j][i+1]);
            matriz12[3][2]+=(matriz1[i+3][j]*matriz2[j][i+2]);
            matriz12[3][3]+=(matriz1[i+3][j]*matriz2[j][i+3]);
        }
        printf("\nMATRIZ 1*2:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz12[j][k]);
            }
            printf("\n");
        }

        //Calcular a 1-2*3
        i=0;
        for(j=0;j<4;j++){
            matriz123[0][0]+=(matriz12[i][j]*matriz3[j][i+0]);
            matriz123[0][1]+=(matriz12[i][j]*matriz3[j][i+1]);
            matriz123[0][2]+=(matriz12[i][j]*matriz3[j][i+2]);
            matriz123[0][3]+=(matriz12[i][j]*matriz3[j][i+3]);

            matriz123[1][0]+=(matriz12[i+1][j]*matriz3[j][i+0]);
            matriz123[1][1]+=(matriz12[i+1][j]*matriz3[j][i+1]);
            matriz123[1][2]+=(matriz12[i+1][j]*matriz3[j][i+2]);
            matriz123[1][3]+=(matriz12[i+1][j]*matriz3[j][i+3]);

            matriz123[2][0]+=(matriz12[i+2][j]*matriz3[j][i+0]);
            matriz123[2][1]+=(matriz12[i+2][j]*matriz3[j][i+1]);
            matriz123[2][2]+=(matriz12[i+2][j]*matriz3[j][i+2]);
            matriz123[2][3]+=(matriz12[i+2][j]*matriz3[j][i+3]);

            matriz123[3][0]+=(matriz12[i+3][j]*matriz3[j][i+0]);
            matriz123[3][1]+=(matriz12[i+3][j]*matriz3[j][i+1]);
            matriz123[3][2]+=(matriz12[i+3][j]*matriz3[j][i+2]);
            matriz123[3][3]+=(matriz12[i+3][j]*matriz3[j][i+3]);
        }
        printf("\nMATRIZ 12*3:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz123[j][k]);
            }
            printf("\n");
        }

        printf("\nOs valores X, Y, Z:");
        printf("\n[X]=[%.2f]", matriz123[0][3]);
        printf("\n[Y]=[%.2f]", matriz123[1][3]);
        printf("\n[Z]=[%.2f]", matriz123[2][3]);

        break;

    //CASE 4--------------------------------------------------------------------------------
    case 4:
        //Calcular a 1-2
        i=0;
        for(j=0;j<4;j++){
            matriz12[0][0]+=(matriz1[i][j]*matriz2[j][i+0]);
            matriz12[0][1]+=(matriz1[i][j]*matriz2[j][i+1]);
            matriz12[0][2]+=(matriz1[i][j]*matriz2[j][i+2]);
            matriz12[0][3]+=(matriz1[i][j]*matriz2[j][i+3]);

            matriz12[1][0]+=(matriz1[i+1][j]*matriz2[j][i+0]);
            matriz12[1][1]+=(matriz1[i+1][j]*matriz2[j][i+1]);
            matriz12[1][2]+=(matriz1[i+1][j]*matriz2[j][i+2]);
            matriz12[1][3]+=(matriz1[i+1][j]*matriz2[j][i+3]);

            matriz12[2][0]+=(matriz1[i+2][j]*matriz2[j][i+0]);
            matriz12[2][1]+=(matriz1[i+2][j]*matriz2[j][i+1]);
            matriz12[2][2]+=(matriz1[i+2][j]*matriz2[j][i+2]);
            matriz12[2][3]+=(matriz1[i+2][j]*matriz2[j][i+3]);

            matriz12[3][0]+=(matriz1[i+3][j]*matriz2[j][i+0]);
            matriz12[3][1]+=(matriz1[i+3][j]*matriz2[j][i+1]);
            matriz12[3][2]+=(matriz1[i+3][j]*matriz2[j][i+2]);
            matriz12[3][3]+=(matriz1[i+3][j]*matriz2[j][i+3]);
        }

        printf("\nMATRIZ 1*2:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz12[j][k]);
            }
            printf("\n");
        }

        //Calcular a 3-4
        i=0;
        for(j=0;j<4;j++){
            matriz34[0][0]+=(matriz3[i][j]*matriz4[j][i+0]);
            matriz34[0][1]+=(matriz3[i][j]*matriz4[j][i+1]);
            matriz34[0][2]+=(matriz3[i][j]*matriz4[j][i+2]);
            matriz34[0][3]+=(matriz3[i][j]*matriz4[j][i+3]);

            matriz34[1][0]+=(matriz3[i+1][j]*matriz4[j][i+0]);
            matriz34[1][1]+=(matriz3[i+1][j]*matriz4[j][i+1]);
            matriz34[1][2]+=(matriz3[i+1][j]*matriz4[j][i+2]);
            matriz34[1][3]+=(matriz3[i+1][j]*matriz4[j][i+3]);

            matriz34[2][0]+=(matriz3[i+2][j]*matriz4[j][i+0]);
            matriz34[2][1]+=(matriz3[i+2][j]*matriz4[j][i+1]);
            matriz34[2][2]+=(matriz3[i+2][j]*matriz4[j][i+2]);
            matriz34[2][3]+=(matriz3[i+2][j]*matriz4[j][i+3]);

            matriz34[3][0]+=(matriz3[i+3][j]*matriz4[j][i+0]);
            matriz34[3][1]+=(matriz3[i+3][j]*matriz4[j][i+1]);
            matriz34[3][2]+=(matriz3[i+3][j]*matriz4[j][i+2]);
            matriz34[3][3]+=(matriz3[i+3][j]*matriz4[j][i+3]);
        }

        printf("\nMATRIZ 3*4:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz34[j][k]);
            }
            printf("\n");
        }

        //Calcular a 1-2*3-4
        i=0;
        for(j=0;j<4;j++){
            matriz0[0][0]+=(matriz12[i][j]*matriz34[j][i+0]);
            matriz0[0][1]+=(matriz12[i][j]*matriz34[j][i+1]);
            matriz0[0][2]+=(matriz12[i][j]*matriz34[j][i+2]);
            matriz0[0][3]+=(matriz12[i][j]*matriz34[j][i+3]);

            matriz0[1][0]+=(matriz12[i+1][j]*matriz34[j][i+0]);
            matriz0[1][1]+=(matriz12[i+1][j]*matriz34[j][i+1]);
            matriz0[1][2]+=(matriz12[i+1][j]*matriz34[j][i+2]);
            matriz0[1][3]+=(matriz12[i+1][j]*matriz34[j][i+3]);

            matriz0[2][0]+=(matriz12[i+2][j]*matriz34[j][i+0]);
            matriz0[2][1]+=(matriz12[i+2][j]*matriz34[j][i+1]);
            matriz0[2][2]+=(matriz12[i+2][j]*matriz34[j][i+2]);
            matriz0[2][3]+=(matriz12[i+2][j]*matriz34[j][i+3]);

            matriz0[3][0]+=(matriz12[i+3][j]*matriz34[j][i+0]);
            matriz0[3][1]+=(matriz12[i+3][j]*matriz34[j][i+1]);
            matriz0[3][2]+=(matriz12[i+3][j]*matriz34[j][i+2]);
            matriz0[3][3]+=(matriz12[i+3][j]*matriz34[j][i+3]);
        }

        printf("\nMATRIZ 0:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz0[j][k]);
            }
            printf("\n");
        }

        printf("\nOs valores X, Y, Z:");
        printf("\n[X]=[%.2f]", matriz0[0][3]);
        printf("\n[Y]=[%.2f]", matriz0[1][3]);
        printf("\n[Z]=[%.2f]", matriz0[2][3]);

        break;

    //CASE 5--------------------------------------------------------------------------------
    case 5:
        //Calcular a 1-2
        i=0;
        for(j=0;j<4;j++){
            matriz12[0][0]+=(matriz1[i][j]*matriz2[j][i+0]);
            matriz12[0][1]+=(matriz1[i][j]*matriz2[j][i+1]);
            matriz12[0][2]+=(matriz1[i][j]*matriz2[j][i+2]);
            matriz12[0][3]+=(matriz1[i][j]*matriz2[j][i+3]);

            matriz12[1][0]+=(matriz1[i+1][j]*matriz2[j][i+0]);
            matriz12[1][1]+=(matriz1[i+1][j]*matriz2[j][i+1]);
            matriz12[1][2]+=(matriz1[i+1][j]*matriz2[j][i+2]);
            matriz12[1][3]+=(matriz1[i+1][j]*matriz2[j][i+3]);

            matriz12[2][0]+=(matriz1[i+2][j]*matriz2[j][i+0]);
            matriz12[2][1]+=(matriz1[i+2][j]*matriz2[j][i+1]);
            matriz12[2][2]+=(matriz1[i+2][j]*matriz2[j][i+2]);
            matriz12[2][3]+=(matriz1[i+2][j]*matriz2[j][i+3]);

            matriz12[3][0]+=(matriz1[i+3][j]*matriz2[j][i+0]);
            matriz12[3][1]+=(matriz1[i+3][j]*matriz2[j][i+1]);
            matriz12[3][2]+=(matriz1[i+3][j]*matriz2[j][i+2]);
            matriz12[3][3]+=(matriz1[i+3][j]*matriz2[j][i+3]);
        }

        printf("\nMATRIZ 1*2:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz12[j][k]);
            }
            printf("\n");
        }

        //Calcular a 3-4
        i=0;
        for(j=0;j<4;j++){
            matriz34[0][0]+=(matriz3[i][j]*matriz4[j][i+0]);
            matriz34[0][1]+=(matriz3[i][j]*matriz4[j][i+1]);
            matriz34[0][2]+=(matriz3[i][j]*matriz4[j][i+2]);
            matriz34[0][3]+=(matriz3[i][j]*matriz4[j][i+3]);

            matriz34[1][0]+=(matriz3[i+1][j]*matriz4[j][i+0]);
            matriz34[1][1]+=(matriz3[i+1][j]*matriz4[j][i+1]);
            matriz34[1][2]+=(matriz3[i+1][j]*matriz4[j][i+2]);
            matriz34[1][3]+=(matriz3[i+1][j]*matriz4[j][i+3]);

            matriz34[2][0]+=(matriz3[i+2][j]*matriz4[j][i+0]);
            matriz34[2][1]+=(matriz3[i+2][j]*matriz4[j][i+1]);
            matriz34[2][2]+=(matriz3[i+2][j]*matriz4[j][i+2]);
            matriz34[2][3]+=(matriz3[i+2][j]*matriz4[j][i+3]);

            matriz34[3][0]+=(matriz3[i+3][j]*matriz4[j][i+0]);
            matriz34[3][1]+=(matriz3[i+3][j]*matriz4[j][i+1]);
            matriz34[3][2]+=(matriz3[i+3][j]*matriz4[j][i+2]);
            matriz34[3][3]+=(matriz3[i+3][j]*matriz4[j][i+3]);
        }

        printf("\nMATRIZ 3*4:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz34[j][k]);
            }
            printf("\n");
        }

        //Calcular a 1-2*3-4
        i=0;
        for(j=0;j<4;j++){
            matriz0[0][0]+=(matriz12[i][j]*matriz34[j][i+0]);
            matriz0[0][1]+=(matriz12[i][j]*matriz34[j][i+1]);
            matriz0[0][2]+=(matriz12[i][j]*matriz34[j][i+2]);
            matriz0[0][3]+=(matriz12[i][j]*matriz34[j][i+3]);

            matriz0[1][0]+=(matriz12[i+1][j]*matriz34[j][i+0]);
            matriz0[1][1]+=(matriz12[i+1][j]*matriz34[j][i+1]);
            matriz0[1][2]+=(matriz12[i+1][j]*matriz34[j][i+2]);
            matriz0[1][3]+=(matriz12[i+1][j]*matriz34[j][i+3]);

            matriz0[2][0]+=(matriz12[i+2][j]*matriz34[j][i+0]);
            matriz0[2][1]+=(matriz12[i+2][j]*matriz34[j][i+1]);
            matriz0[2][2]+=(matriz12[i+2][j]*matriz34[j][i+2]);
            matriz0[2][3]+=(matriz12[i+2][j]*matriz34[j][i+3]);

            matriz0[3][0]+=(matriz12[i+3][j]*matriz34[j][i+0]);
            matriz0[3][1]+=(matriz12[i+3][j]*matriz34[j][i+1]);
            matriz0[3][2]+=(matriz12[i+3][j]*matriz34[j][i+2]);
            matriz0[3][3]+=(matriz12[i+3][j]*matriz34[j][i+3]);
        }

        //Matriz1234*matriz5
        i=0;
        for(j=0;j<4;j++){
            matriz05[0][0]+=(matriz0[i][j]*matriz5[j][i+0]);
            matriz05[0][1]+=(matriz0[i][j]*matriz5[j][i+1]);
            matriz05[0][2]+=(matriz0[i][j]*matriz5[j][i+2]);
            matriz05[0][3]+=(matriz0[i][j]*matriz5[j][i+3]);

            matriz05[1][0]+=(matriz0[i+1][j]*matriz5[j][i+0]);
            matriz05[1][1]+=(matriz0[i+1][j]*matriz5[j][i+1]);
            matriz05[1][2]+=(matriz0[i+1][j]*matriz5[j][i+2]);
            matriz05[1][3]+=(matriz0[i+1][j]*matriz5[j][i+3]);

            matriz05[2][0]+=(matriz0[i+2][j]*matriz5[j][i+0]);
            matriz05[2][1]+=(matriz0[i+2][j]*matriz5[j][i+1]);
            matriz05[2][2]+=(matriz0[i+2][j]*matriz5[j][i+2]);
            matriz05[2][3]+=(matriz0[i+2][j]*matriz5[j][i+3]);

            matriz05[3][0]+=(matriz0[i+3][j]*matriz5[j][i+0]);
            matriz05[3][1]+=(matriz0[i+3][j]*matriz5[j][i+1]);
            matriz05[3][2]+=(matriz0[i+3][j]*matriz5[j][i+2]);
            matriz05[3][3]+=(matriz0[i+3][j]*matriz5[j][i+3]);
        }

        printf("\nMATRIZ (1*2*3*4*5):\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz05[j][k]);
            }
            printf("\n");
        }

        printf("\nOs valores X, Y, Z:");
        printf("\n[X]=[%.2f]", matriz05[0][3]);
        printf("\n[Y]=[%.2f]", matriz05[1][3]);
        printf("\n[Z]=[%.2f]", matriz05[2][3]);

        break;
    //CASE 6--------------------------------------------------------------------------------
    case 6:
        //Calcular a 1-2
        i=0;
        for(j=0;j<4;j++){
            matriz12[0][0]+=(matriz1[i][j]*matriz2[j][i+0]);
            matriz12[0][1]+=(matriz1[i][j]*matriz2[j][i+1]);
            matriz12[0][2]+=(matriz1[i][j]*matriz2[j][i+2]);
            matriz12[0][3]+=(matriz1[i][j]*matriz2[j][i+3]);

            matriz12[1][0]+=(matriz1[i+1][j]*matriz2[j][i+0]);
            matriz12[1][1]+=(matriz1[i+1][j]*matriz2[j][i+1]);
            matriz12[1][2]+=(matriz1[i+1][j]*matriz2[j][i+2]);
            matriz12[1][3]+=(matriz1[i+1][j]*matriz2[j][i+3]);

            matriz12[2][0]+=(matriz1[i+2][j]*matriz2[j][i+0]);
            matriz12[2][1]+=(matriz1[i+2][j]*matriz2[j][i+1]);
            matriz12[2][2]+=(matriz1[i+2][j]*matriz2[j][i+2]);
            matriz12[2][3]+=(matriz1[i+2][j]*matriz2[j][i+3]);

            matriz12[3][0]+=(matriz1[i+3][j]*matriz2[j][i+0]);
            matriz12[3][1]+=(matriz1[i+3][j]*matriz2[j][i+1]);
            matriz12[3][2]+=(matriz1[i+3][j]*matriz2[j][i+2]);
            matriz12[3][3]+=(matriz1[i+3][j]*matriz2[j][i+3]);
        }

        printf("\nMATRIZ 1*2:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz12[j][k]);
            }
            printf("\n");
        }

        //Calcular a 3-4
        i=0;
        for(j=0;j<4;j++){
            matriz34[0][0]+=(matriz3[i][j]*matriz4[j][i+0]);
            matriz34[0][1]+=(matriz3[i][j]*matriz4[j][i+1]);
            matriz34[0][2]+=(matriz3[i][j]*matriz4[j][i+2]);
            matriz34[0][3]+=(matriz3[i][j]*matriz4[j][i+3]);

            matriz34[1][0]+=(matriz3[i+1][j]*matriz4[j][i+0]);
            matriz34[1][1]+=(matriz3[i+1][j]*matriz4[j][i+1]);
            matriz34[1][2]+=(matriz3[i+1][j]*matriz4[j][i+2]);
            matriz34[1][3]+=(matriz3[i+1][j]*matriz4[j][i+3]);

            matriz34[2][0]+=(matriz3[i+2][j]*matriz4[j][i+0]);
            matriz34[2][1]+=(matriz3[i+2][j]*matriz4[j][i+1]);
            matriz34[2][2]+=(matriz3[i+2][j]*matriz4[j][i+2]);
            matriz34[2][3]+=(matriz3[i+2][j]*matriz4[j][i+3]);

            matriz34[3][0]+=(matriz3[i+3][j]*matriz4[j][i+0]);
            matriz34[3][1]+=(matriz3[i+3][j]*matriz4[j][i+1]);
            matriz34[3][2]+=(matriz3[i+3][j]*matriz4[j][i+2]);
            matriz34[3][3]+=(matriz3[i+3][j]*matriz4[j][i+3]);
        }

        printf("\nMATRIZ 3*4:\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz34[j][k]);
            }
            printf("\n");
        }

        //Calcular a 5-6
        i=0;
        for(j=0;j<4;j++){
            matriz56[0][0]+=(matriz5[i][j]*matriz6[j][i+0]);
            matriz56[0][1]+=(matriz5[i][j]*matriz6[j][i+1]);
            matriz56[0][2]+=(matriz5[i][j]*matriz6[j][i+2]);
            matriz56[0][3]+=(matriz5[i][j]*matriz6[j][i+3]);

            matriz56[1][0]+=(matriz5[i+1][j]*matriz6[j][i+0]);
            matriz56[1][1]+=(matriz5[i+1][j]*matriz6[j][i+1]);
            matriz56[1][2]+=(matriz5[i+1][j]*matriz6[j][i+2]);
            matriz56[1][3]+=(matriz5[i+1][j]*matriz6[j][i+3]);

            matriz56[2][0]+=(matriz5[i+2][j]*matriz6[j][i+0]);
            matriz56[2][1]+=(matriz5[i+2][j]*matriz6[j][i+1]);
            matriz56[2][2]+=(matriz5[i+2][j]*matriz6[j][i+2]);
            matriz56[2][3]+=(matriz5[i+2][j]*matriz6[j][i+3]);

            matriz56[3][0]+=(matriz5[i+3][j]*matriz6[j][i+0]);
            matriz56[3][1]+=(matriz5[i+3][j]*matriz6[j][i+1]);
            matriz56[3][2]+=(matriz5[i+3][j]*matriz6[j][i+2]);
            matriz56[3][3]+=(matriz5[i+3][j]*matriz6[j][i+3]);
        }


        //Calcular a 1-2*3-4
        i=0;
        for(j=0;j<4;j++){
            matriz0[0][0]+=(matriz12[i][j]*matriz34[j][i+0]);
            matriz0[0][1]+=(matriz12[i][j]*matriz34[j][i+1]);
            matriz0[0][2]+=(matriz12[i][j]*matriz34[j][i+2]);
            matriz0[0][3]+=(matriz12[i][j]*matriz34[j][i+3]);

            matriz0[1][0]+=(matriz12[i+1][j]*matriz34[j][i+0]);
            matriz0[1][1]+=(matriz12[i+1][j]*matriz34[j][i+1]);
            matriz0[1][2]+=(matriz12[i+1][j]*matriz34[j][i+2]);
            matriz0[1][3]+=(matriz12[i+1][j]*matriz34[j][i+3]);

            matriz0[2][0]+=(matriz12[i+2][j]*matriz34[j][i+0]);
            matriz0[2][1]+=(matriz12[i+2][j]*matriz34[j][i+1]);
            matriz0[2][2]+=(matriz12[i+2][j]*matriz34[j][i+2]);
            matriz0[2][3]+=(matriz12[i+2][j]*matriz34[j][i+3]);

            matriz0[3][0]+=(matriz12[i+3][j]*matriz34[j][i+0]);
            matriz0[3][1]+=(matriz12[i+3][j]*matriz34[j][i+1]);
            matriz0[3][2]+=(matriz12[i+3][j]*matriz34[j][i+2]);
            matriz0[3][3]+=(matriz12[i+3][j]*matriz34[j][i+3]);
        }

        //Calcular a 1234*56
        i=0;
        for(j=0;j<4;j++){
            matriz00[0][0]+=(matriz0[i][j]*matriz56[j][i+0]);
            matriz00[0][1]+=(matriz0[i][j]*matriz56[j][i+1]);
            matriz00[0][2]+=(matriz0[i][j]*matriz56[j][i+2]);
            matriz00[0][3]+=(matriz0[i][j]*matriz56[j][i+3]);

            matriz00[1][0]+=(matriz0[i+1][j]*matriz56[j][i+0]);
            matriz00[1][1]+=(matriz0[i+1][j]*matriz56[j][i+1]);
            matriz00[1][2]+=(matriz0[i+1][j]*matriz56[j][i+2]);
            matriz00[1][3]+=(matriz0[i+1][j]*matriz56[j][i+3]);

            matriz00[2][0]+=(matriz0[i+2][j]*matriz56[j][i+0]);
            matriz00[2][1]+=(matriz0[i+2][j]*matriz56[j][i+1]);
            matriz00[2][2]+=(matriz0[i+2][j]*matriz56[j][i+2]);
            matriz00[2][3]+=(matriz0[i+2][j]*matriz56[j][i+3]);

            matriz00[3][0]+=(matriz0[i+3][j]*matriz56[j][i+0]);
            matriz00[3][1]+=(matriz0[i+3][j]*matriz56[j][i+1]);
            matriz00[3][2]+=(matriz0[i+3][j]*matriz56[j][i+2]);
            matriz00[3][3]+=(matriz0[i+3][j]*matriz56[j][i+3]);
        }

        printf("\nMATRIZ RESULTANTE(1*2*3*4*5*6):\n");
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                printf("[%.2f] ", matriz00[j][k]);
            }
            printf("\n");
        }

        printf("\nOs valores X, Y, Z:");
        printf("\n[X]=[%.2f]", matriz00[0][3]);
        printf("\n[Y]=[%.2f]", matriz00[1][3]);
        printf("\n[Z]=[%.2f]", matriz00[2][3]);

        break;

    }
}

