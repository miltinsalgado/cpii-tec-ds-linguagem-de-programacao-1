#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>

char* DDD (char* telefone)
{
	char* dddaux;
	int cont=0, aux=0;
	dddaux = (char*) malloc(strlen(telefone)+1);
	for (int i=0;i<3;i++)
	{
		if((telefone[0]=='(')||(telefone[0]==' '))
		{
			aux=i+1;
			dddaux[cont]=telefone[aux];
			cont++;
		}
		else if ((telefone[1]!='(')||(telefone[1]!=' '))
		{
			dddaux[cont]=telefone[i];
			cont++;
		}
	}
	dddaux[cont]='\0';
	return dddaux;
}

char* Retira_Espaco(char* telefone)
{
	char*numaux;
	int cont=0, aux=0;
}

char* Numero (char* telefone)
{
	char* numaux;
	int cont=0, aux=0;
	numaux = (char*) malloc(strlen(telefone)+1);
	strcpy(numaux,telefone);
	for(int i=0;i<strlen(telefone);i++)
	{
		if((telefone[i]=='(')||(telefone[i]==' '))
		{
			aux=4;
			break;
		}
		else 
		{
			aux=2; 
			break;
		}
	}
	if (telefone[aux+1]==' ')
	{
		aux=aux+1;
	}
	for(int i=aux+1;i<strlen(telefone);i++)
	{
		numaux[cont]=telefone[i];
		cont++;
	}
	numaux[cont]='\0';
	return numaux;
}

int main()
{
	char telefone[50], vetddd[50][3], vetnum[50][10];
	int i;
	setlocale(LC_ALL,"");
	printf("\n----Número de telefone e DDD separados----");
	for(i=0;i<1;i++)
	{
		printf("\nDigite um número de telefone (DDD+Número):\n\t");
		fflush(stdin);
		gets(telefone);
		strcpy(vetddd[i], DDD(telefone));
		strcpy(vetnum[i], Numero(telefone));
	}
	for(int j=0;j<i;j++)
	{
	printf("\n DDD:\t%s", vetddd[j]);
	printf("\n Número:\t%s", vetnum[j]);
	}

}
