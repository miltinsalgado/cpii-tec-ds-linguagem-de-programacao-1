#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N�:23 | Professor de Linguagem de Programa��o 1: Cl�udio Passos

int main()
{
	setlocale(LC_ALL,"");
	printf("\t\t\t\t\tQuest�o 01_Quadrados e Ret�ngulos\n");
	double largura[10], comprimento[10];
	int quadrado=0, retangulo=0, i;
	
	for(i=0;i<10;i++)
	{
		printf("\nDigite uma largura:\t");
		scanf("%lf", &largura[i]);
		printf("\nDigite um comprimento:\t");
		scanf("%lf", &comprimento[i]);		
		
		if ((comprimento[i]!=largura[i]) || (largura[i]!=comprimento[i]))
		{
			retangulo++;
		}
		else 
		{
			quadrado++;	
		}	
	}		
	
	printf("\nRet�ngulos:\t%d\nQuadrados:\t%d", retangulo, quadrado);

}
