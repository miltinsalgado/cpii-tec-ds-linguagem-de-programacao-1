#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N�:23 | Professor de Linguagem de Programa��o 1: Cl�udio Passos

double IdentificarMenorNum (double Num[20])
{
	double MenorNum[20];
	int i;
	
	for(i=0;i<20;i++)
	{
		if (i==0)
		{
			MenorNum[0]=Num[0];
		}
		else if (Num[i]<MenorNum[i])
		{
			MenorNum[i]=Num[i];
		}
	}
	return MenorNum[i];
}

int main()
{
	setlocale(LC_ALL,"");
	printf("\t\t\tQuest�o 03_Maior N�mero Digitado e Menor N�mero Digitado\n");
	double Num[20], MaiorNum, MenorNum;
	int i;
	
	for(i=0;i<20;i++)
	{
		printf("\nDigite um n�mero:\t");
		scanf("%lf", &Num[i]);
		if(i==0)
		{
			MaiorNum=Num[0];
			MenorNum=Num[0];
		}
		else if(Num[i]>MaiorNum)
		{
			MaiorNum=Num[i];
		}
		else if(Num[i]<IdentificarMenorNum(Num))
		{
			MenorNum=Num[i];
		}
	}
	
	printf("\n O maior n�mero digitado foi:\t %lf\n O menor n�mero digitado foi:\t %lf", MaiorNum, MenorNum);
} 
