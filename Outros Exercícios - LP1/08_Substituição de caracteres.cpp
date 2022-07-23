#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N°:23 | Professor de Linguagem de Programação 1: Cláudio Passos

char* Substituicao (char* word, char ch, char chs)
{
	char* wordaux;
	wordaux=(char*) malloc(strlen(word)+1);
	int i, cont=0;
	
	for (i=0;i<strlen(word);i++)
	{
		if ((word[i]==toupper(ch)) || (word[i]==tolower(ch)))
		{
			wordaux[cont]=chs;
			cont++;
		}
		else
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
	printf("\t\t\t\t\t08_Substituição de Caracteres");
	
	char word[50];
	char ch, chs;
	
	printf("\nDigite uma palavra:\t");
	fflush(stdin);
	scanf("%[a-z A-Z]s", &word);
	
	printf("\nDigite o caracter a ser trocado na palavra:\t");
	fflush(stdin);
	ch=getche();
		
	printf("\nDigite o caracter que vai substituir o caracter selecionado acima:\t");
	fflush(stdin);
	chs=getche();
	
	printf("\nPalavra formada com as configurações selecionadas:\t %s", Substituicao(word, ch, chs));
	
	getch();
	return 0;
}
