#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

char* iniciais1 (char* nome)
{
	char* nomeaux;
	int cont=0, aux=0;
	nomeaux=(char*) malloc(strlen(nomeaux)+1);
	
	nomeaux[cont]=toupper(nome[0]); //milton salgado leandro-->M
	cont++;
	
	nomeaux[cont]='.';//M.
	cont++;
	
	for(int i=0;i<strlen(nome);i++)
	{
		if (nome[i]==' ')// milton_salgado_leandro
		{
			aux=i+1;// milton'i'i+1'
			if (nome[aux]!=' ')//milton              salgado      leandro
			{
				nomeaux[cont]=toupper(nome[aux]);//M.S.L
				cont++;
				nomeaux[cont]='.';//M.S.L.
				cont++;
			}
		}
	}
	nomeaux[cont]='\0';
	return nomeaux;
}

char* iniciais2 (char* nome)
{
	char* nomeaux;
	int cont=0, aux=0;
	nomeaux=(char*) malloc(strlen(nomeaux)+1);
	
	nomeaux[cont]=tolower(nome[0]); //milton salgado leandro-->M
	cont++;
	
	nomeaux[cont]='.';//M.
	cont++;
	
	for(int i=0;i<strlen(nome);i++)
	{
		if (nome[i]==' ')// milton_salgado_leandro
		{
			aux=i+1;// milton'i'i+1'
			if (nome[aux]!=' ')//milton              salgado      leandro
			{
				nomeaux[cont]=tolower(nome[aux]);//M.S.L
				cont++;
				nomeaux[cont]='.';//M.S.L.
				cont++;
			}
		}
	}
	nomeaux[cont]='\0';
	return nomeaux;
}

int main()
{
	char nome[50], vetnome[50][20], vetnome2[50][20], continua;
	int i;
	setlocale(LC_ALL,"");
	for(i=0;i<50;i++)
	{
		printf("\nDigite um nome completo:\t");
		fflush(stdin);
		scanf("%[a-z A-Z]", &nome);
		strcpy(vetnome[i], iniciais1(nome));
		strcpy(vetnome2[i], iniciais2(nome));
	}
	
	printf("\nDeseja analisar os nomes alterados no vetor? S OU N:\t");
	continua=getche();
	
	if ((continua=='S')||(continua=='s'))
	{
			for(int j=0;j<i;j++)
		{
			printf("\nIniciais do nome [%s] em Maiúsculo:\t%s", nome, vetnome[j]);
			printf("\nIniciais do nome [%s] em Minúsculo:\t%s", nome, vetnome2[j]);
		}
	}
	
	return 0;
}

