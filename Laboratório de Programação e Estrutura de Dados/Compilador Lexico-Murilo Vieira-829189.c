//Compilador Léxico-Murilo Vieira Pizzamiglio
//declaração das bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define MAX 10000


//declaração do ponteiro
FILE *arquivo;
FILE *arquivo2;

//Função principal
main()
{
	//declaração da variavel de saida

	int i,y,x=0,id=0,tamanho,linha=0;
	char texto[1000], identificador[1000];

	//estrutura condicional para abertura do arquivo
	//verificar se o prouivo existe abri-lo para leitura
    arquivo = fopen("Progama.txt","r");

	if(arquivo==NULL)
	{
		printf("\nErro na abertura do arquivo....");
		sleep(3);
		exit(0);
	}

	//estrutura condicional para lera as informaçoes

    for (i=0;!feof(arquivo);i++)
    {
        texto[i]=fgetc(arquivo);
    }

    fclose(arquivo);

    tamanho=strlen(texto);

    //abrindo outro arquivo para ser a tabela
    arquivo2=fopen("Tabela Token.txt","w");

    //Rodar minha variável

    for(y=0;y<tamanho;y++)
    {
        //Pegar as linhas
        if(texto[y]=='\n')
        {
            linha++;
        }
        else if(texto[y]=='{')//Desconsiderar comentarios
        {
            do
            {
                y++;
            }while(texto[y]!='}');
        }
        //Encontrar digitos
        if(texto[y]=='0' || texto[y]== '1' ||texto[y]== '2' ||texto[y]== '3' ||texto[y]=='4' ||texto[y]== '5' || texto[y]=='6' || texto[y]=='7' || texto[y]=='8' || texto[y]=='9')
        {
            if(texto[y]=='0')
            {
                fprintf(arquivo2,"0              |snumero             |Linha:%i\n", linha);
            }
            else if(texto[y]=='1')
            {
                fprintf(arquivo2,"1              |snumero             |Linha:%i\n", linha);
            }
            else if(texto[y]=='2')
            {
                fprintf(arquivo2,"2              |snumero             |Linha:%i\n", linha);
            }
            else if(texto[y]=='3')
            {
                fprintf(arquivo2,"3              |snumero             |Linha:%i\n", linha);
            }
            else if(texto[y]=='4')
            {
                fprintf(arquivo2,"4              |snumero             |Linha:%i\n", linha);
            }
            else if(texto[y]=='5')
            {
                fprintf(arquivo2,"5              |snumero             |Linha:%i\n", linha);
            }
            else if(texto[y]=='6')
            {
                fprintf(arquivo2,"6              |snumero             |Linha:%i\n", linha);
            }
            else if(texto[y]=='7')
            {
                fprintf(arquivo2,"7              |snumero             |Linha:%i\n", linha);
            }
            else if(texto[y]=='8')
            {
                fprintf(arquivo2,"8              |snumero             |Linha:%i\n", linha);
            }
            else
            {
                fprintf(arquivo2,"9              |snumero             |Linha:%i\n", linha);
            }
        }
        else if(texto[y]=='+' || texto[y]=='-' || texto[y]=='*' || texto[y]=='/' || texto[y]=='d' )//Condição dos operadores aritimeticos
        {
            if(texto[y]=='d')
            {
                if(texto[y+1]=='i')
                {
                    if(texto[y+2]=='v')
                    {
                      fprintf(arquivo2,"div            |sdiv                |Linha:%i\n", linha);
                    }
                }
            }
            else if(texto[y]=='+')
            {
              if(texto[y-1]==' ')//Antes do +
                 if(isalpha(texto[y-2]))
                 {
                     x=0;
                     id=0;
                     x=y-2;
                     strcpy(identificador,"");
                     while(texto[x]!='=')
                        {
                        identificador[id]=texto[x];
                        id++;
                        x--;
                        }
                     identificador[id]='\0';
                     fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                 }
                 fprintf(arquivo2,"+              |smais               |Linha:%i\n", linha);
                 if(texto[y+1]==' ')//Depois do +
                 if(isalpha(texto[y+2]))
                 {
                     x=0;
                     id=0;
                     x=y+2;
                     strcpy(identificador,"");
                     while(texto[x]!=';')
                        {
                        identificador[id]=texto[x];
                        id++;
                        x++;
                        }
                     identificador[id]='\0';
                     fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                 }
            }
            else if(texto[y]=='-')
            {
                if(texto[y-1]==' ')//Antes do -
                 if(isalpha(texto[y-2]))
                 {
                     x=0;
                     id=0;
                     x=y-2;
                     strcpy(identificador,"");
                     while(texto[x]!='=')
                        {
                        identificador[id]=texto[x];
                        id++;
                        x--;
                        }
                     identificador[id]='\0';
                     fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                 }
              fprintf(arquivo2,"-              |smenos              |Linha:%i\n", linha);
                if(texto[y+1]==' ')//Depois de +
                 if(isalpha(texto[y+2]))
                 {
                     x=0;
                     id=0;
                     x=y+2;
                     strcpy(identificador,"");
                     while(texto[x]!=';')
                        {
                        identificador[id]=texto[x];
                        id++;
                        x++;
                        }
                     identificador[id]='\0';
                     fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                 }

            }
            else if(texto[y]=='*')
            {
                if(texto[y-1]==' ')//Antes do *
                 if(isalpha(texto[y-2]))
                 {
                     x=0;
                     id=0;
                     x=y-2;
                     strcpy(identificador,"");
                     while(texto[x]!='=')
                        {
                        identificador[id]=texto[x];
                        id++;
                        x--;
                        }
                     identificador[id]='\0';
                     fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                 }
              fprintf(arquivo2,"*              |svezes              |Linha:%i\n", linha);
                 if(texto[y+1]==' ')//Depois de *
                 if(isalpha(texto[y+2]))
                 {
                     x=0;
                     id=0;
                     x=y+2;
                     strcpy(identificador,"");
                     while(texto[x]!=';')
                        {
                        identificador[id]=texto[x];
                        id++;
                        x++;
                        }
                     identificador[id]='\0';
                     fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                 }

            }
            else
            {
               if(texto[y-1]==' ')
                if(isalpha(texto[y-2]))
                 {
                     x=0;
                     id=0;
                     x=y-2;
                     strcpy(identificador,"");
                     while(texto[x]!='=')
                        {
                        identificador[id]=texto[x];
                        id++;
                        x--;
                        }
                     identificador[id]='\0';
                     fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                 }
              fprintf(arquivo2,"/              |sdivisao            |Linha:%i\n", linha);

                if(texto[y+1]==' ')//Depois de /
                 if(isalpha(texto[y+2]))
                 {
                     x=0;
                     id=0;
                     x=y+2;
                     strcpy(identificador,"");
                     while(texto[x]!=';')
                        {
                        identificador[id]=texto[x];
                        id++;
                        x++;
                        }
                     identificador[id]='\0';
                     fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                 }
            }

        }
        else if(texto[y]=='>' || texto[y]=='<' || texto[y]=='=')//Condição dos operadores relacionais
        {
            if(texto[y]=='>')
            {
                if(texto[y+1]=='=')
                {
                    fprintf(arquivo2,">=             |smaior_igual        |Linha:%i\n", linha);
                }
                else
                {
                    fprintf(arquivo2,">              |smaior              |Linha:%i\n", linha);
                }
            }
            else if(texto[y]=='<')
            {
                if(texto[y+1]=='=')
                {
                    fprintf(arquivo2,"<=             |smenor_igual        |Linha:%i\n", linha);
                }
                else if(texto[y+1]=='>')
                {
                    fprintf(arquivo2,"<>             |sdiferente          |Linha:%i\n", linha);
                }
                else
                {
                    fprintf(arquivo2,"<              |smenor              |Linha:%i\n", linha);
                }
            }
            else if(texto[y]=='=')
            {
                if(texto[y-1]=='<' || texto[y-1]=='>')
                {

                }
                else if(texto[y-1]==':' && texto[y]=='=')
                {
                    if(texto[y-2]!=' ')//Checar pega de identificadores
                        {
                            x=0;
                            id=0;
                            x=y-2;
                            strcpy(identificador,"");
                            while(texto[x]!='\n')
                            {
                                identificador[id]=texto[x];
                                id++;
                                x--;
                            }
                            identificador[id]='\0';
                            fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                        }
                    fprintf(arquivo2, ":=             |satribuicao         |Linha:%i\n", linha);
                }
                else
                {
                    fprintf(arquivo2,"=              |sigual              |Linha:%i\n", linha);
                }

            }
        }
        else if(texto[y]=='(' ||texto[y]==')' || texto[y]=='[' || texto[y]==']' || texto[y]==';' || texto[y]=='.'|| texto[y]==',')//Condição de pontuação
        {
            if(texto[y]=='(')
            {
                fprintf(arquivo2,"(              |sabre_parênteses    |Linha:%i\n", linha);
            }
            else if(texto[y]==')')
            {
                fprintf(arquivo2,")              |sfecha_parênteses   |Linha:%i\n", linha);
            }
            else if(texto[y]=='[')
            {
                fprintf(arquivo2,"[              |sabre_colchetes     |Linha:%i\n", linha);
            }
            else if(texto[y]==']')
            {
                fprintf(arquivo2,"]              |sfecha_colchetes    |Linha:%i\n", linha);
            }
            else if(texto[y]=='.')
            {
                fprintf(arquivo2,".              |sponto              |Linha:%i\n", linha);
            }
            else if(texto[y]==';')
            {
                fprintf(arquivo2,";              |sponto_virgula      |Linha:%i\n", linha);
            }
            else
            {
                fprintf(arquivo2,",              |svirgula            |Linha:%i\n", linha);
            }

        }
        else if(texto[y]=='`' && texto[y+2]=='`')//Valores ASC
        {
            fprintf(arquivo2,"%c              |sASC                |Linha:%i\n",texto[y+1],linha);
        }
        else if(texto[y]=='i' || texto[y]=='f' || texto[y]=='c' || texto[y]=='v')//Tipos de variaveis
        {
            if(texto[y]=='i')//Se for int
            {
                if(texto[y+1]=='n')
                {
                    if(texto[y+2]=='t')
                    {
                        fprintf(arquivo2,"int            |sint                |Linha %i\n", linha);
                        if(texto[y+3]==' ')//Checar pega de identificadores
                        {
                            if(texto[y+4]!=' ')
                            {
                                x=0;
                                id=0;
                                x=y+4;
                                strcpy(identificador,"");
                                while(texto[x]!=';')
                                {
                                    identificador[id]=texto[x];
                                    id++;
                                    x++;

                                }
                                identificador[id]='\0';
                                fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                            }
                        }
                    }

                }
            }
            else if(texto[y]=='f')//Se for float
            {
               if(texto[y+1]=='l')
               {
                   if(texto[y+2]=='o')
                   {
                       if(texto[y+3]=='a')
                       {
                           if(texto[y+4]=='t')
                           {
                              fprintf(arquivo2,"float          |sfloat              |Linha:%i\n",linha);
                              if(texto[y+5]==' ')
                              {
                                  if(texto[y+6]!=' ')
                                  {
                                    x=0;
                                    id=0;
                                    x=y+6;
                                    strcpy(identificador,"");
                                    while(texto[x]!=';')
                                    {
                                        identificador[id]=texto[x];
                                        id++;
                                        x++;
                                    }
                                    identificador[id]='\0';
                                    fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                                  }
                              }
                           }
                       }
                   }
               }
            }
            else if(texto[y]=='c')//Se for char
            {
               if(texto[y+1]=='h')
               {
                   if(texto[y+2]=='a')
                   {
                       if(texto[y+3]=='r')
                       {
                           fprintf(arquivo2,"char           |schar               |Linha:%i\n",linha);
                           if(texto[y+4]==' ')
                           {
                               if(texto[y+5]!=' ')
                               {
                                    x=0;
                                    id=0;
                                    x=y+5;
                                    strcpy(identificador,"");
                                    while(texto[x]!=';')
                                    {
                                        identificador[id]=texto[x];
                                        id++;
                                        x++;
                                    }
                                    identificador[id]='\0';
                                    fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                               }
                           }
                       }
                   }
               }
            }
            else//Se for o campo de variaveis
            {
                if(texto[y+1]=='a')
                {
                    if(texto[y+2]=='r')
                    {
                        fprintf(arquivo2,"var            |svar                |Linha:%i\n", linha);
                    }
                }
            }
        }

        //Desfalque
        if(texto[y]=='w' || texto[y]=='r' || texto[y]=='d' || texto[y]=='u')//Comando de repetição
        {
            if(texto[y]=='w')//Se for o comando While
            {
                if(texto[y+1]=='h')
                {
                    if(texto[y+2]=='i')
                    {
                        if(texto[y+3]=='l')
                        {
                            if(texto[y+4]=='e')
                            {
                                fprintf(arquivo2,"while          |swhile              |Linha:%i\n", linha);
                            }
                        }
                    }
                }
            }
            else if(texto[y]=='r')//Se for o comando Repeat
            {
                if(texto[y+1]=='e')
                {
                    if(texto[y+2]=='p')
                    {
                        if(texto[y+3]=='e')
                        {
                            if(texto[y+4]=='a')
                            {
                                if(texto[y+5]=='t')
                                {
                                        fprintf(arquivo2,"repeat         |srepeat             |Linha:%i\n", linha);
                                }
                            }
                        }
                    }
                }
            }
            else if(texto[y]=='u')
            {
                if(texto[y+1]=='n')
                {
                    if(texto[y+2]=='t')
                    {
                        if(texto[y+3]=='i')
                        {
                            if(texto[y+4]=='l')
                            {
                                fprintf(arquivo2,"until          |suntil              |Linha:%i\n", linha);
                            }
                        }
                    }
                }
            }
            else
            {
                if(texto[y+1]=='o')
                {
                    fprintf(arquivo2,"do             |sdo                 |Linha:%i\n", linha);
                }
            }
        }

        //A partir daqui, eu reinicio os meus if, para que nao haja por exemplo, duas checagens em i, e ele ingora outra
        //Nesse caso eu ja analizava i la nos TIPOS de VARIAVEIS, ai ele via que tinha i, e ia embora e nem entrava aqui
        if(texto[y]=='i' || texto[y]=='e' || texto[y]=='t')//Comando condicional
        {
            if(texto[y]=='i')//Problema
            {
                if(texto[y+1]=='f')
                {
                    fprintf(arquivo2,"if             |sif                 |Linha:%i\n", linha);
                }
            }
            else if(texto[y]=='e')//Se for ELSE
            {
                if(texto[y+1]=='l')
                {
                   if(texto[y+2]=='s')
                    {
                        if(texto[y+3]=='e')
                        {
                          fprintf(arquivo2,"else           |selse               |Linha:%i\n", linha);
                        }
                    }
                }
            }
            else//Se for THEN
            {
                if(texto[y+1]=='h')
                {
                    if(texto[y+2]=='e')
                    {
                        if(texto[y+3]=='n')
                        {
                            fprintf(arquivo2,"sthen           |sthen               |Linha:%i\n", linha);
                        }
                    }
                }

            }

        }
        else if(texto[y]=='r')//Tokens de Comandos de leitura
        {
            if(texto[y+1]=='e')
            {
                if(texto[y+2]=='a')
                {
                    if(texto[y+3]=='d')
                    {
                        if(texto[y+4]=='d')
                        {
                            fprintf(arquivo2,"readd          |sreadd              |Linha:%i\n", linha);
                        }
                        else if(texto[y+4]=='c')
                        {
                            fprintf(arquivo2,"readc          |sreadc              |Linha:%i\n", linha);
                        }

                    }
                }
            }
        }
        else if(texto[y]=='w')
        {
            if(texto[y+1]=='r')
            {
                if(texto[y+2]=='i')
                {
                    if(texto[y+3]=='t')
                    {
                        if(texto[y+4]=='e')
                        {
                            if(texto[y+5]=='d')
                            {
                                fprintf(arquivo2,"writed         |swrited             |Linha:%i\n", linha);
                            }
                            else if(texto[y+5]=='c')
                            {
                                fprintf(arquivo2,"writec         |swritec             |Linha:%i\n", linha);
                            }
                        }
                    }
                }
            }
        }

        if(texto[y]=='b' || texto[y]=='e' || texto[y]=='p')//Tokens de Comando de Inicio/Fim
        {
            if(texto[y]=='b')
            {
                if(texto[y+1]=='e')
                {
                    if(texto[y+2]=='g')
                    {
                        if(texto[y+3]=='i')
                        {
                            if(texto[y+4]=='n')
                            {
                                fprintf(arquivo2,"begin          |sbegin              |Linha:%i\n", linha);
                            }
                        }
                    }
                }
            }
            else if(texto[y]=='e')
            {
                if(texto[y+1]=='n')
                {
                    if(texto[y+2]=='d')
                    {
                        fprintf(arquivo2,"end            |send                |Linha:%i\n", linha);
                    }
                }
            }
            else
            {
                if(texto[y+1]=='r')
                {
                    if(texto[y+2]=='o')
                    {
                        if(texto[y+3]=='g')
                        {
                            if(texto[y+4]=='r')
                            {
                                if(texto[y+5]=='a')
                                {
                                    if(texto[y+6]=='m')
                                    {
                                        fprintf(arquivo2,"program        |sprogram            |Linha:%i\n", linha);
                                        if(texto[y+7]==' ')
                                        {
                                            if(texto[y+8]!=' ')
                                            {
                                                x=0;
                                                id=0;
                                                x=y+8;
                                                strcpy(identificador,"");
                                                while(texto[x]!=';')
                                                {
                                                identificador[id]=texto[x];
                                                id++;
                                                x++;
                                                }
                                                identificador[id]='\0';
                                                fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        if(texto[y]=='a' ||texto[y]=='o' || texto[y]=='n')//And, Or e Not
        {
            if(texto[y]=='a')
            {
                if(texto[y+1]=='n')
                {
                    if(texto[y+2]=='d')
                    {
                        fprintf(arquivo2, "and            |sand                |Linha:%i\n", linha);
                    }
                }
            }
            else if(texto[y]=='o')
            {
                if(texto[y+1]=='r')
                {
                   fprintf(arquivo2, "or             |sor                 |Linha:%i\n", linha);
                }
            }
            else
            {
                if(texto[y+1]=='o')
                {
                    if(texto[y+2]=='t')
                    {
                        fprintf(arquivo2, "not            |snot                |Linha:%i\n", linha);
                    }
                }
            }
        }
        else if(texto[y]=='p' || texto[y]=='f')//Procedure e Function
        {
            if(texto[y]=='p')
            {
                if(texto[y+1]=='r')
                {
                    if(texto[y+2]=='o')
                    {
                        if(texto[y+3]=='c')
                        {
                            if(texto[y+3]=='e')
                            {
                                if(texto[y+4]=='d')
                                {
                                    if(texto[y+5]=='u')
                                    {
                                        if(texto[y+6]=='r')
                                        {
                                            if(texto[y+7]=='e')
                                            {
                                                fprintf(arquivo2,"procedure      |sprocedure          |Linha:%i\n", linha);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                if(texto[y+1]=='u')
                {
                    if(texto[y+2]=='n')
                    {
                        if(texto[y+3]=='c')
                        {
                            if(texto[y+4]=='t')
                            {
                                if(texto[y+5]=='i')
                                {
                                    if(texto[y+6]=='o')
                                    {
                                        if(texto[y+7]=='n')
                                        {
                                            fprintf(arquivo2,"function       |sfunction           |Linha:%i\n", linha);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        if(texto[y]=='(')//Pegar identificador
        {
                x=0;
                id=0;
                x=y+1;
                strcpy(identificador,"");
                while(texto[x]!=')')
                {
                    identificador[id]=texto[x];
                    id++;
                    x++;
                }
                identificador[id]='\0';
                fprintf(arquivo2,"%s           |sidentificador       |Linha %i\n", identificador,linha);
        }

    }//Saida do For

    printf("%s\n",texto);
    printf("\nTabela gerada para o codigo acima!");

	//fechar o arquivo
	fclose(arquivo2);

}
