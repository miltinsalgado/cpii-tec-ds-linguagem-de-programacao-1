#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <iostream>
int main()
{
	 setlocale (LC_ALL, "portuguese");
	 printf("\n---DIVISORES DE UM N�MERO---\n");
	 int num, i; 
	 printf("\n Digite um N�mero:");
	 scanf ("%d", &num);
	 for (int i=1; i<num; i++)
	 {
	     if (num%i==0)
	     printf ("\n  Um dos Divisores �: (%d)", i);
	 }
	 printf("\n\n");
	 system ("pause");
	 return 0;
}
