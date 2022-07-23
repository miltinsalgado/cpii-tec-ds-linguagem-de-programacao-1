#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N°:23 | Professor de Linguagem de Programação 1: Cláudio Passos

char* Eliminacao_Vogais (char* string)
{
	char* stringaux;
	stringaux=(char*) malloc(strlen(string)+1);
	int i, cont=0;
	
	for(i=0;i<strlen(string);i++)
	{
		if((tolower(string[i])!='a') && (tolower(string[i])!='e') && (tolower(string[i])!='i') && (tolower(string[i])!='o') && (tolower(string[i])!='u'))
		{
			stringaux[cont]=string[i];
			cont++;
		}
	}
	stringaux[cont]='\0';
	return stringaux;
}

int main()
{
	setlocale(LC_ALL,"");
	printf("\t\t\t\t\t07_Duplicação de Vogais");
	
	char string[100][50], vetstring[100][50];
	int i;
	
	for(i=0;i<1;i++)
	{
		printf("\nDigite uma string:\t");
		fflush(stdin);
		gets(string[i]);
		strcpy(vetstring[i], Eliminacao_Vogais(string[i]));
	}
	for(int j=0;j<i;j++)
	{
		printf("\nString sem vogais:\t %s", vetstring[j]);
	}
}
