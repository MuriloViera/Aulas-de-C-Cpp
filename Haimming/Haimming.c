//Murilo Vieira Pizzamiglio-829189

//Declaração das bibliotecas
#include <stdlib.h>
#include <stdio.h>

//Declaração das variáveis
int codigofinal[3], codigo1[11], codigo2[11],numero=0,i=0,j=0,n=0,z=0;


main()
{
    //Obtenção do codigo 1
    printf("Informe o bit numero %i do seu codigo de 8 bits: ", i);//Posição 0
    scanf("%i", &codigo1[0]);
    i++;
    printf("\nInforme o bit numero %i do seu codigo de 8 bits: ", i);//Posição 1
    scanf("%i", &codigo1[1]);
    i++;
    printf("\nInforme o bit numero %i do seu codigo de 8 bits: ", i);//Posição 2
    scanf("%i", &codigo1[2]);
    i++;
    printf("\nInforme o bit numero %i do seu codigo de 8 bits: ", i);//Posição 3
    scanf("%i", &codigo1[3]);
    i++;
    printf("\nInforme o bit numero %i do seu codigo de 8 bits: ", i);//Posição 5
    scanf("%i", &codigo1[5]);
    i++;
    printf("\nInforme o bit numero %i do seu codigo de 8 bits: ", i);//Posição 6
    scanf("%i", &codigo1[6]);
    i++;
    printf("\nInforme o bit numero %i do seu codigo de 8 bits: ", i);//Posição 7
    scanf("%i", &codigo1[7]);
    i++;
    printf("\nInforme o bit numero %i do seu codigo de 8 bits: ", i);//Posição 9
    scanf("%i", &codigo1[9]);
    i++;
    //Posição 4,8 10 e 11 eu que preencho depois

    system("cls");

    //Obtenção do codigo 2
    do{
        printf("Informe o bit numero %i do codigo recebido: ", j);
        scanf("%i", &codigo2[j]);
        j++;
    }while(j<=11);

    //Calcular o Codigo Haimming do Codigo 1
    //Calculando o numero da posição 11(9,7,5,3,1)V
    if(codigo1[9]==1)
    {
        n++;
    }

    if(codigo1[7]==1)
    {
        n++;
    }

    if(codigo1[5]==1)
    {
        n++;
    }

    if(codigo1[3]==1)
    {
        n++;
    }

    if(codigo1[1]==1)
    {
        n++;
    }

    if(n%2==0)
    {
        codigo1[11]=0;
    }
    else
    {
        codigo1[11]=1;
    }

    //Calcular o bit da posição 10(9,6,5,2,1)V
    n=0;
    if(codigo1[9]==1)
    {
        n++;
    }

    if(codigo1[6]==1)
    {
        n++;
    }

    if(codigo1[5]==1)
    {
        n++;
    }

    if(codigo1[2]==1)
    {
        n++;
    }

    if(codigo1[1]==1)
    {
        n++;
    }

    if(n%2==0)
    {
        codigo1[10]=0;
    }
    else
    {
        codigo1[10]=1;
    }

    //Calcular a posição 8(7,6,5,0)
    n=0;
    if(codigo1[7]==1)
    {
        n++;
    }

    if(codigo1[6]==1)
    {
        n++;
    }

    if(codigo1[5]==1)
    {
        n++;
    }

    if(codigo1[0]==1)
    {
        n++;
    }

    if(n%2==0)
    {
        codigo1[8]=0;
    }
    else
    {
        codigo1[8]=1;
    }


    //Calcular o bit da posição 4(3,2,1,0)
    n=0;
    if(codigo1[3]==1)
    {
        n++;
    }

    if(codigo1[2]==1)
    {
        n++;
    }

    if(codigo1[1]==1)
    {
        n++;
    }

    if(codigo1[0]==1)
    {
        n++;
    }

    if(n%2==0)
    {
        codigo1[4]=0;
    }
    else
    {
        codigo1[4]=1;
    }

    system("cls");
    //Mostrar o codigo Haimming do Codigo 1
    printf("\nO seu codigo Haimming do codigo a ser trasnmitido foi calculado: ");
    printf("%i", codigo1[4]);
    printf("%i", codigo1[8]);
    printf("%i", codigo1[10]);
    printf("%i", codigo1[11]);


    printf("\nSeu Codigo a ser transmitido com o codigo de Haimming ficou:");
    do{
        printf("%i",codigo1[z]);
        z++;
    }while(z<=11);

    //Calcular o Codigo Haimming do Codigo 2
    //Calculando o numero da posição 11(9,7,5,3,1)V
    n=0;
    if(codigo2[9]==1)
    {
        n++;
    }

    if(codigo2[7]==1)
    {
        n++;
    }

    if(codigo2[5]==1)
    {
        n++;
    }

    if(codigo2[3]==1)
    {
        n++;
    }

    if(codigo2[1]==1)
    {
        n++;
    }

    if(n%2==0)
    {
        codigo2[11]=0;
    }
    else
    {
        codigo2[11]=1;
    }

    //Calcular o bit da posição 10(9,6,5,2,1)V
    n=0;
    if(codigo2[9]==1)
    {
        n++;
    }

    if(codigo2[6]==1)
    {
        n++;
    }

    if(codigo2[5]==1)
    {
        n++;
    }

    if(codigo2[2]==1)
    {
        n++;
    }

    if(codigo2[1]==1)
    {
        n++;
    }

    if(n%2==0)
    {
        codigo2[10]=0;
    }
    else
    {
        codigo2[10]=1;
    }

    //Calcular a posição 8(7,6,5,0)
    n=0;
    if(codigo2[7]==1)
    {
        n++;
    }

    if(codigo2[6]==1)
    {
        n++;
    }

    if(codigo2[5]==1)
    {
        n++;
    }

    if(codigo2[0]==1)
    {
        n++;
    }

    if(n%2==0)
    {
        codigo2[8]=0;
    }
    else
    {
        codigo2[8]=1;
    }


    //Calcular o bit da posição 4(3,2,1,0)
    n=0;
    if(codigo2[3]==1)
    {
        n++;
    }

    if(codigo2[2]==1)
    {
        n++;
    }

    if(codigo2[1]==1)
    {
        n++;
    }

    if(codigo2[0]==1)
    {
        n++;
    }

    if(n%2==0)
    {
        codigo2[4]=0;
    }
    else
    {
        codigo2[4]=1;
    }

    //Coletar o codigo de Haimming do codigo 2
    printf("\nCodigo de Haimming do codigo recebido: ");
    printf("%i", codigo2[4]);
    printf("%i", codigo2[8]);
    printf("%i", codigo2[10]);
    printf("%i", codigo2[11]);
    printf("\n");


    //Comparar o codigo de Haimming 1 com o 2
    if(codigo1[4] && codigo2[4] == 1)
    {
        codigofinal[0]=0;
    }
    else
    {
        codigofinal[0]=1;
    }

    if(codigo1[8] && codigo2[8] == 1)
    {
        codigofinal[1]=0;
    }
    else
    {
        codigofinal[1]=1;
    }

    if(codigo1[10] && codigo2[10] == 1)
    {
        codigofinal[2]=0;
    }
    else
    {
        codigofinal[2]=1;
    }

    if(codigo1[11] && codigo2[11] == 1)
    {
        codigofinal[3]=0;
    }
    else
    {
        codigofinal[3]=1;
    }

    printf("O codigo final apos a XOR do codigo 1 e 2 de Haimming foi: ");
    printf("%i", codigofinal[0]);
    printf("%i", codigofinal[1]);
    printf("%i", codigofinal[2]);
    printf("%i\n", codigofinal[3]);

    if(codigofinal[0]==1)
    {
        numero+=8;
    }

    if(codigofinal[1]==1)
    {
        numero+=4;
    }

    if(codigofinal[2]==1)
    {
        numero+=2;
    }

    if(codigofinal[3]==1)
    {
        numero+=1;
    }

    printf("Portanto o numero que esta errado no codigo recebido esta na posicao: %i\n", numero);

    system("pause");
}
