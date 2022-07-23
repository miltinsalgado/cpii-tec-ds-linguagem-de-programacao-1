#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <iostream>

main()
{
        setlocale(LC_ALL, "portuguese");
        printf ("\n---NOMES, NOTAS E MÉDIAS DOS ALUNOS EM LP1 E ICC DAS TURMAS IN110 E IN112---\n");
char nome[70][50], turma[5][70], continua;
float notalp [3][70], medialp[70], notaicc[3][70], mediaicc[70];
int i, j, k, cont=0;
 
for (int i=0; i<70;i++)
{    
      printf ("\n Digite o Nome do Aluno:\n");
      scanf("%s",&nome[i]);
      
      printf ("\n Digite a turma:\n");
      scanf("%s",&turma[i]);
    
        printf("\n Digite a primeira nota de LP1\n");
        scanf("%f",&notalp[0][i]);
         printf("\n Digite a segunda nota de LP1\n");
         scanf("%f",&notalp[1][i]);
          printf("\n Digite a terceira nota de LP1\n");
          scanf("%f",&notalp[2][i]);
          
          medialp[i]=(notalp[0][i]+notalp[1][i]+notalp[2][i])/3;
          
                     
                       printf("\n Digite a primeira nota de ICC\n");
                       scanf("%f",&notaicc[0][i]);
                       printf("\n Digite a segunda nota de ICC\n");
                       scanf("%f",&notaicc[1][i]);
                       printf("\n Digite a terceira nota de ICC\n");
                       scanf("%f",&notaicc[2][i]);
                       
                       mediaicc[i]=(notaicc[0][i]+notaicc[1][i]+notaicc[2][i])/3;
                     
                  
                  printf("\n Deseja Continuar?\n");
                  continua=getche();
                  
                  if((continua=='N')||(continua=='n')) break;
                  
                  else
                  cont++;
                  }
                  
                  
                for(k=0;k<=cont;k++)
				{

                printf("\n Aluno: %s - Turma: %s - Media LP1: %f - Media ICC: %f \n", nome[k], turma[k], medialp[k], mediaicc[k]);
                  }
}
