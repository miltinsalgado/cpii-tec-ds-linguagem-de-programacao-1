#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>

int main()
{
	setlocale (LC_ALL ,"");
	printf("2)Receber um nome e imprimir as letras na posição impar");
	char nome[100];
	
	printf("\nInsira um nome qualquer:\t");
	gets(nome);
	for (int i = 0; i < strlen(nome); i++)
		if (i%2 != 0)
			printf("%c", nome[i]);
	
	printf("\n\n");		
	system("PAUSE");
	return 0;
}
