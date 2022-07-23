#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N�:23 | Professor de Linguagem de Programa��o 1: Cl�udio Passos

char* Corte (char* string, int position, int amount)
{
	char* stringaux;
	stringaux=(char*) malloc(strlen(string)+1);
	int i, cont=0;
	for(i=0;i<strlen(string);i++)
	{	
		if (i==position)
		i+=amount;
		stringaux[cont]=string[i];
		cont++;
	}
	
	stringaux[cont]='\0';
	return stringaux;
}


int main()
{
	setlocale(LC_ALL, "");
	printf("\t\t\t\t\t02_Diminui��o de strings");
	
	char string[50];
	int position, amount;
	
	printf("\nDigite uma string:\t");
	fflush(stdin);
	gets(string);
	
	printf("\nDigite a posi��o de caracter na string na qual ser� iniciado o corte:\t");
	fflush(stdin);
	scanf("%d", &position);
	
	printf("\nDigite a quantidade de caracteres que ser�o cortados da string:\t");
	fflush(stdin);
	scanf("%d", &amount);
	
	printf("\nAp�s o processo de corte, a string original (%s) ser� reduzida em %d caracteres a partir da posi��o %d", string, amount, position);
	printf("\nString formada com as configura��es inseridas: %s", Corte(string, position, amount));
	
	getch();
	return 0;
}
