#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

int achapula (char* st)
{
	int lin = 0;
	for(int i = 0; i < strlen(st); i++) //criei um for que percorre o tamanho da string, que deve der maior que o da linha
		if(st[i] == '\n') //se achar um espaço na string, ele retorna o valor de i/numeração da linha
			return 1;
	
	return lin; //senão retorna nada
}

main()
{
	system("color E2");
	FILE *arq;
	char nomearq[50];
	char st[200];
//	int lin = 1;
	printf("\n digite o nome do arquivo ");
	scanf("%s", &nomearq);
	
	arq = fopen(nomearq, "r"); //abri arquivo somente para leitura
	if (!arq)
	{
		printf("\nErro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	while (!feof(arq))
	{
		fgets(st, 200, arq); // pega a linha inteira a partir do momento que ela está dentro dos limites (ou conta de tantos em tantos)
		printf("%d %s", achapula(st), st);
	}
	
	fclose(arq);
}
