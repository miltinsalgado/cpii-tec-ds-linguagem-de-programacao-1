#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N°:23 | Professor de Linguagem de Programação 1: Cláudio Passos

char* Inversao(char* word)
{
	char* wordaux;
	wordaux=(char*) malloc(strlen(word)+1);
	int cont=-1;
	//strrev(word); strcpy(wordaux, word); return(wordaux)
	strcpy(wordaux, word);
	for (int i=strlen(word)-1;i>=0;i--) 
	{
		cont++;
		wordaux[cont]=word[i];
	}
	return wordaux;
}

int main()
{
	setlocale (LC_ALL ,"");
	printf("\t\t\t\t\t06_Verificação de palíndromos");
	char word[50];
	int palindromo;
	printf("\nDigite uma palavra:\t");
	fflush(stdin);
	gets(word);
	
		if(strcmp(word, Inversao(word))==0)
		{
			printf("\nA palavra digitada (%s) é um palíndromo, ou seja, ao ser lida de trás pra frente, o resultado é a própria palavra!", word);
			printf("\nPalavra Original:\t%s", word);
			printf("\nPalavra Invertida:\t%s\n", Inversao(word));
			palindromo++;
		}
		
		else
		{
			printf("\nA palavra digitada (%s) não é um palíndromo, ou seja, ao ser lida de trás pra frente, o resultado não é a própria palavra!", word);
			printf("\nPalavra Original:\t%s", word);
			printf("\nPalavra Invertida:\t%s\n", Inversao(word));
		}
	
}
