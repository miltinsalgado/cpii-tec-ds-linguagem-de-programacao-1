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
	
	arq = fopen(nomearq, "r"); //abri o arquivo somente para leitura
	if (!arq)
	{
		printf("\nErro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	while (!feof(arq))
	{
		ch = fgetc(arq); //pega um caracter do arquivo naquela posição
		printf("%c", ch); //imprime esse caracter
	}
	
	fclose(arq); //fecha o arquivo
}
