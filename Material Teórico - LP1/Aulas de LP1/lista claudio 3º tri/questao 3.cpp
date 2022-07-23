#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

struct dm
{
	int dia;
	int mes;
	int ano;
};

struct dm data[2];

int main()
{
		setlocale(LC_ALL, "portuguese");
	int cont = -1;
	
	for(;cont < 1;)
	{
		cont++;
		
		printf("\nDigite o %dº dia:\n", cont + 1);
		scanf("%d", &data[cont].dia);
		printf("\nDigite o %dº mês:\n", cont + 1);
		scanf("%d", &data[cont].mes);
		printf("\nDigite o %dº ano:\n", cont + 1);
		scanf("%d", &data[cont].ano);
	}
	
	if(data[1].ano != data[0] != ano)
	{
		
	}
	
}
