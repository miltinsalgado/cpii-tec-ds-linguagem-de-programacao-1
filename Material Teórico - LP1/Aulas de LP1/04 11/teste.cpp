#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

main()
{
	FILE *arq;
	char nomearq[50];
	char ch;
	printf("\n digite o nome do arquivo ");
	scanf("%s", &nomearq);
	
	arq = fopen(nomearq, "r");
	if (!arq)
	{
		printf("\nErro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	while (!feof(arq))
	{
		ch = fgetc(arq);
		printf("%c", ch);
	}
	
	fclose(arq);
}
