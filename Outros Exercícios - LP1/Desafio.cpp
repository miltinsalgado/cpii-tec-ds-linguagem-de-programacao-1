#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>

using namespace std;

char*inverte (char* data) //Função(inverta): Separa a data e inverte
	{
		char* aux;
		int posich=0, posich2=0, cont=0;
		aux=(char*) malloc(strlen(data)+1);
		for(int i=strlen(data);i>=0;i--)
		{
			if (data[i]=='/')
			{
			posich=i;
			for(int i=posich-1;i>=0;i--)
			{
				if (data[i]=='/')
				{
				posich2=i;
				break;
				}
			}
			break;
			}
		}
		
		for(int i=posich+1;i<strlen(data);i++)
		{
			aux[cont]=data[i];
			cont++;
		}
		aux[cont]='/';
		cont++;
		
		/*for(int x=posich2+1;x<5;x++)
		{
			aux[cont]=data[x];
			cont++;
		}
		aux[cont]='/';
		cont++;*/
		
		for(int x=posich2+1;x<strlen(data);x++)
		{
			if(data[x]=='/')
			{
				break;
			}
			aux[cont]=data[x];
			cont++;
		}
		aux[cont]='/';
		cont++;
		for (int x=0;x<strlen(data);x++)
		{
				if(data[x]=='/')
			{
				break;
			}
			aux[cont]=data[x];
			cont++;
		}
			aux[cont]='\0';
	
			return aux;
	}


int main()
{
	setlocale (LC_ALL ,"portuguese");
	
	char data[50];
		printf("\nDigite uma data:\t");
		fflush(stdin);
		scanf("%s", &data);
		printf("\nData invertida: %s\t", inverte(data));
		
printf("\n\n");
system("pause");
return 0;
}

