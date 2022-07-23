#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>

		char* Retira_Traco (char* phone)
{
	int posINI, posFINAL, j=0;
	char* aux;
	aux=(char*) malloc(strlen(phone)+1);
	
	for (int i=0;i<strlen(phone);i++)
	{
		if(phone[i]!='-') //(telefone[i]=='(')||(telefone[i]==' ')
		{
			posINI=i;  
			break;
		}
	}
	for (int i=strlen(phone);i>=0;i--)
	{
		if(phone[i]!='-')
		{
			posFINAL=i;
			break;
		}
	}
	for(int i=posINI;i<=posFINAL;i++)
	{
		aux[j]=phone[i];
		j++;
	}
	aux[j]='\0';
	return aux;
}

		char* Retira_Espaco (char* phone)
{
	int posINI, posFINAL, j=0;
	char* aux;
	aux=(char*) malloc(strlen(phone)+1);
	
	for (int i=0;i<strlen(phone);i++)
	{
		if(phone[i]!=' ')
		{
			posINI=i;
			break;
		}
		else if(phone[i]==' ')
		{
			posINI=i+1;
			break;
		}
	}
	for (int i=strlen(phone);i>=0;i--)
	{
		if(phone[i]!=' ')
		{
			posFINAL=i;
			break;
		}
		else if (phone[i]==' ')
		{
			posINI=i+1;
			break;
		}
	}
	for(int i=posINI;i<=posFINAL;i++)
	{
		aux[j]=phone[i];
		j++;
	}
	aux[j]='\0';
	return aux;
}

		char* getDDD (char* phone)
{
	char* aux;
	aux=(char*) malloc(strlen(phone)+1);
	int contNUM=0, i, posFINAL;
	for(int i=strlen(phone)-1;i>=0;i--)
	{
		if ((phone[i]=='0') || (phone[i]=='1') || (phone[i]=='2') || (phone[i]=='3') || (phone[i]=='4') || (phone[i]=='5') || (phone[i]=='6') || (phone[i]=='7') || (phone[i]=='8') || (phone[i]=='9'))
		{
			contNUM++;
			if (contNUM==9)
			{
				posFINAL=i-1;
				break;
			}
		}
	}
	for(i=0;i<=posFINAL;i++)
	{
		aux[i]=phone[i];
	}
	aux[i]='\0';
	return aux;
}

		char* getTEL (char* phone)
{
		char* aux;
		aux=(char*) malloc(strlen(phone)+1);
		int i, j=0, posFINAL, contNUM=0;
		
		for(int i=strlen(phone)-1;i>=0;i--)
	{
		if ((phone[i]=='0') || (phone[i]=='1') || (phone[i]=='2') || (phone[i]=='3') || (phone[i]=='4') || (phone[i]=='5') || (phone[i]=='6') || (phone[i]=='6') || (phone[i]=='7') || (phone[i]=='8') || (phone[i]=='9'))
		{
			contNUM++;
			if (contNUM==9)
			{
				posFINAL=i;
				break;
			}
		}
	}
	for(i=posFINAL;i<strlen(phone);i++)
	{
		aux[j]=phone[i];
		j++;
	}
	aux[j]='\0';
	return aux;
}

int main()
{
	char telefone[50], vetddd[50][20], vetnum[50][20];
	int i;
	setlocale(LC_ALL,"");
	printf("\n----Número de telefone e DDD separados----");
	for(i=0;i<1;i++)
	{
		printf("\nDigite um número de telefone (DDD+Número):\n\t");
		fflush(stdin);
		gets(telefone);
		strcpy(vetddd[i], Retira_Espaco(Retira_Traco(getDDD(telefone))));
		strcpy(vetnum[i], Retira_Espaco(Retira_Traco(getTEL(telefone))));
	}
	for(int j=0;j<i;j++)
	{
		printf("\nDDD: %s \nPHONE: %s", vetddd[j], vetnum[j]);
	}
}
