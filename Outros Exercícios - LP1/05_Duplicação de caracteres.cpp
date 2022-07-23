#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N°:23 | Professor de Linguagem de Programação 1: Cláudio Passos

char* Duplicacao (char* string)
{
	char* stringaux;
	stringaux=(char*) malloc(strlen(string)+1);
	int i, cont=0, aux=0;
	
	for(i=0;i<strlen(string);i++)
	{
		stringaux[cont]=string[i];
		cont++;
		stringaux[cont]=string[i];
		cont++;
	}
	stringaux[cont]='\0';
	return stringaux;
}

int main()
{
	setlocale(LC_ALL, "");
	printf("\t\t\t\t\t03_Duplicação de caracteres");
	
	char string[50][50], vetstring[50][50];
	int i;
	
	for(i=0;i<50;i++)
	{
		printf("\nDigite uma string:\t");
		fflush(stdin);
		gets(string[i]);
		strcpy(vetstring[i], Duplicacao(string[i]));
	}
	for(int j=0;j<i;j++)
	{
		printf("\nString com caracteres duplicados:\t %s", vetstring[j]);
	}
}
