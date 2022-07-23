#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	printf ("\n---Bem Vindo ao programa de Treino com Strings, Vetores e Caracteres---\n");
	char str1[100], str2[100];
	printf("\n Entre com uma string:");
	gets (str1);
	printf("\n Entre com outra string:");
	gets (str2);
	 if (strcmp (str1,str2))
	 printf ("\n As strings inseridas no programa são diferentes");
	 else printf ("\n As strings inseridas no programa são iguais");
	 getch ();
	 return 0;
}
