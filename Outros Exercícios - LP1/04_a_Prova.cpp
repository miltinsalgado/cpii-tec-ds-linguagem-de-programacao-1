#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N°:23 | Professor de Linguagem de Programação 1: Cláudio Passos

int main()
{
	setlocale(LC_ALL,"");
	printf("\t\t\t\t\t04_a) While (i) e While (j)");
	
	int i=0, j, s=0;
	
	while(i<=20)
	{
		j=i;
		while(j<=20)
		{
			j=j+2; //  
			s++;		
		}
		i=i+4; // 0 - 4 - 8 - 12 - 16 - 20 - 24
	}
	printf("\n%d %d %d", s, j, i);
}

