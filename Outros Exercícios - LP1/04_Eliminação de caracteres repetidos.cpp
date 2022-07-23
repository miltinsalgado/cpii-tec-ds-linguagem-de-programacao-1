#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N°:23 | Professor de Linguagem de Programação 1: Cláudio Passos

char* Eliminacao (char* word)
{
	char* wordaux;
	wordaux=(char*) malloc(strlen(word)+1);
	char ch;
	int i, cont=0, found=0;
	
	for(i=0;i<strlen(word);i++)
	{
		found=0;
		ch=word[i];
		for(int j=0;j<strlen(word);j++)
		{
			if(j!=i && word[j]!=' ')
			{
				if(word[j]==word[i])
				{
					found++;	
					break;
				}
			}
			
		}
		if (found==0)
		{
			wordaux[cont]=word[i];
			cont++;
		}
	}
	wordaux[cont]='\0';
	return wordaux;
}

using namespace std;	
int main()
{
	setlocale (LC_ALL ,"");
	printf("\t\t\t\t\t04_Eliminação de caracteres repetidos");
	
	char word[50];
	
	printf("\nDigite uma palavra:\t");
	fflush(stdin);
	gets(word);
	
	printf("\nPalavra gerada pela função Eliminação:\t %s", Eliminacao(word));
	
	getch();
	return 0;
	
}

