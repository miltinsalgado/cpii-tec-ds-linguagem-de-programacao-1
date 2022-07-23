#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

main()
{
	setlocale (LC_ALL, "portuguese");
	printf("\n---PROGRAMA SIMPLES DE DEMONSTRAÇÃO DO COMANDO {DO WHILE}---\n");
	int i=0;
	do 
	{
		printf("\n %d", i);
		i++;
	} while (i<=10);
	getch();
	return 0;
}

