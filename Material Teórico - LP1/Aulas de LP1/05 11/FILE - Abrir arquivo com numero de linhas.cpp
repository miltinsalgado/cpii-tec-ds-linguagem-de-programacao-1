#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

main()
{
	system("color E2");
	FILE *arq;
	char nomearq[50];
	char ch;
	int lin = 1;
	printf("\n digite o nome do arquivo ");
	scanf("%s", &nomearq);
	
	arq = fopen(nomearq, "r"); //abre o arquivo somente para leitura
	if (!arq) //se houver erro na abertura do arquivo...
	{
		printf("\nErro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	printf("%d ", lin); //coloca o 1 na primeira linha
	while (!feof(arq))
	{
	//	system("color B2");
		ch = fgetc(arq); //pega um caracter do arquivo
		if (ch == '\n') //se esse caracter for um espaço
		{
			lin++; //aumenta o contador de linhas
			printf("%c", ch); // imprime o espaço
			printf("%d ", lin); //imprime o contador de linhas
		}
		else //se nao for um espaço
			printf("%c", ch); // imprime um caracter
	}
	
	fclose(arq); //fecha o arquivo
}
