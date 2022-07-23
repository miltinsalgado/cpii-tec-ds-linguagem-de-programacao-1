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
	printf("\t\t\t\t\t04_b) While>20");
	int x=0, s=0;
	
	s=0;
	while(x<=30)
	{
		if(x>20) s++;
		x++;
	}
	printf("\n%d\n", s);
}
