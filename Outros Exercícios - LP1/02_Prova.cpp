#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N�:23 | Professor de Linguagem de Programa��o 1: Cl�udio Passos

char* TrocaChar (char* word, char ch, char chs)
{
	char* wordaux;
	wordaux=(char*) malloc(strlen(word)+1);
	int i, cont=0;
	
	for (i=0;i<strlen(word);i++)
	{
		if ((word[i]==toupper(ch))||(word[i]==tolower(ch))||(word[i]==ch))
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

int main()
{
	setlocale(LC_ALL,"");
	printf("\t\t\t\t\tQuest�o 02_Fun��o TrocaChar\n");
	
	char word[50];
	char ch, ch2;
	
	printf("\nDigite uma string:\t");
	fflush(stdin);
	scanf("%s", &word);
	
	printf("\nDigite o caracter a ser trocado na string:\t");
	fflush(stdin);
	ch=getche();

	printf("\nDigite o caracter que vai substituir o caracter selecionado acima:\t");
	fflush(stdin);
	ch2=getche();
	
	printf("\nString formada com as configura��es selecionadas:\t %s", TrocaChar(word, ch, ch2));
	
	getch();
	return 0;
}
