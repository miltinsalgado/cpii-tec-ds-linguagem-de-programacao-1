#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
        setlocale(LC_ALL, "portuguese");
        printf ("\n---M�DIA DE DUAS TURMAS-REVIS�O---\n");
		float mediaanual[70], paf[35];
        char nome[70][50], turma[70][6], continua;
        int x, k;
        for (int x=0; x<70; x++)
          {
          	system("cls"); 
			  printf("\nDigite a Turma (IN110 OU IN112):");
          	scanf("%s", &turma[x]);
          	 printf("\nDigite o Nome:");
          	 scanf("%s", &nome[x]);
          	  printf ("\nDigite a M�dia Anual:\n");
          	    scanf ("%f", &mediaanual[x]);
				paf[x]= 25-(3*mediaanual[x])/2;
				  printf("\n Deseja Continuar (S/N)?\n");
                  continua=getche();
                  if((continua=='N')||(continua=='n')) break;                  
          }
		for (k=0; k<=x; k++)
	    {	
		if (mediaanual[k]<7)
			printf("\n O Aluno %s da Turma %s teve M�dia Anual %f e ter� que fazer Prova Final, precisando de %f pontos", nome[k], turma[k], mediaanual[k], paf[k]);
		}
         getch();
	}
		
