#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N°:23 | Professor de Linguagem de Programação 1: Cláudio Passos

char* Separa_Sobrenome (char* name)
{
	char*nameaux;
	nameaux=(char*) malloc(strlen(name)+1);
	int i, cont=0, contSTART=0, contEND=0;
	
	for(i=0;i<strlen(name);i++)
	{
		if(name[i]!=' ')
		{
			contSTART=i;
			break;
		}
	}
	for(i=strlen(name)-1;i>=0;i--)
	{
		if(name[i]!=' ')
		{
			contEND=i;
			break;
		}
	}
	for(i=contSTART;i<=contEND;i++)
	{
		nameaux[cont]=name[i];
		cont++;
	}
	nameaux[cont]='\0';
	return nameaux;
}

char* Abreviacao (char*name)
{
	char* nameaux;
	nameaux=(char*) malloc(strlen(name)+1);
	int i, cont=0, posiSPACE;
	
	nameaux[0]=toupper(name[0]);
	cont++;
	nameaux[cont]='.';
	cont++;
	nameaux[cont]=' ';
	cont++;
	
	for(i=0;i<strlen(name);i++)
	{
		if(name[i]==' ' && name[i+1]!=' ')
		{
			nameaux[cont]=name[i+1];
			cont++;
			nameaux[cont]='.';
			cont++;
			nameaux[cont]=' ';
			cont++;
		}
	}
	for(i=strlen(name);i>0;i--)
	{
		if(name[i]==' ')
		{
			posiSPACE=i;
			break;
		}
	}
	for(i=posiSPACE+1;i<strlen(name);i++)
	{
		nameaux[cont]=name[i];
		cont++;
	}
	nameaux[cont]='\0';
	return nameaux;
}

int main()
{
	setlocale(LC_ALL,"");
	printf("\t\t\t\t\t03_Abreviação com iniciais + último sobrenome");
	
	char name[50][50], vetname[50][50];
	int i;
	
	for(i=0;i<1;i++)
	{
		printf("\nDigite um nome:\t");
		fflush(stdin);
		gets(name[i]);
		strcpy(vetname[i], Separa_Sobrenome(Abreviacao(name[i])));
	}
	for(int j=0;j<i;j++)
	{
		printf("\nAbreviação com último sobrenome:\t %s", vetname[j]);
	}
}
