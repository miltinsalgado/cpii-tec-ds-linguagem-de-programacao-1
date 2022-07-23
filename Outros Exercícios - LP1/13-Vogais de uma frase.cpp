#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>

char* onlyvogais (char* frase)
{
	char* aux;
	int cont=0, posich;
	aux=(char*) malloc(strlen(frase)+1);
	strcpy(aux,frase);
	for (int i=0;i<strlen(frase);i++)
	{
		if ((tolower(frase[i]=='a')) || (tolower(frase[i]=='e')) || (tolower(frase[i]=='i')) || (tolower(frase[i]=='o')) || (tolower(frase[i]=='u')))
		{
			aux[cont]=frase[i];
			cont++;
		}
	}
	aux[cont]='\0';
	return aux;
}

int main()
{
	char frase[50];
	setlocale(LC_ALL,"");
	printf("----APENAS VOGAIS DE UMA FRASE----");
	printf("\nDigite uma frase\t");
	fflush(stdin);
	gets(frase);
	printf("\n A frase ficou assim (apenas as vogais): %s", onlyvogais(frase));
	return 0;	
}
