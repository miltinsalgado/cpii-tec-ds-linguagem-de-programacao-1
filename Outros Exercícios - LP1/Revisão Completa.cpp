#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>

char* Revertedor_de_Strings (char* str)
{
	char* aux;
	aux=(char*) malloc(strlen(str)+1);
	strcpy(aux,str);
	strrev(aux);
	return aux;
}
/*{
	char* aux;
	int k=-1;
	aux=(char*) malloc(strlen(str)+1);
	strcpy(aux,str);
	for(int j=strlen(aux)-1;j>=0;j--)
	{
		k++;
		aux[j]=str[k];
	}
	return aux;
}*/
char* Maiusculizador_de_Strings (char *str)
{
	char* aux;
	aux=(char*) malloc(strlen(str)+1);
	strcpy(aux,str);
	for(int j=0;j<strlen(aux);j++)
	{
		aux[j]=toupper(str[j]);
	}
	return aux;
}
char* Minusculizador_de_Strings (char *str)
{
	char* aux;
	aux=(char*) malloc(strlen(str)+1);
	strcpy(aux,str);
	for(int j=0;j<strlen(aux);j++)
	{
		aux[j]=tolower(str[j]);
	}
	return aux;
}
char* Maiusculizador_de_Iniciais (char *str, char ch)
{
	char* aux;
	aux=(char*) malloc(strlen(str)+1);
	strcpy(aux,str);
	aux[0]=toupper(str[0]);
	for (int i=1;i<strlen(str);i++)
	{
		aux[i]=tolower(str[i]);
	}
	return aux;
}
char* Separador_de_Strings (char* str)
{
	char* aux;
		int posich=0, cont=0;
		aux=(char*) malloc(strlen(str)+1);
		for(int i=strlen(str);i>=0;i--)
		{
			if (str[i]==' ')
			{
			posich=i;
			break;
			}
		}
		for(int x=posich+1;x<strlen(str);x++)
		{
			aux[cont]=str[x];
			cont++;
		}
			aux[cont]=',';
			cont++;
			aux[cont]=' ';
			cont++;
			
		for (int x=0;x<posich;x++)
		{
			aux[cont]=str[x];
			cont++;
		}
			aux[cont]='\0';
	
			return aux;
}
int Contador_de_Vogais (char *str)
{
	int cont=0;
	for (int i=0;i<strlen(str);i++)
	{
		if ((tolower(str[i])=='a') || (tolower(str[i])=='e') || (tolower(str[i])=='i') || (tolower(str[i])=='o') || (tolower(str[i])=='u'))
		cont++;
	}
	return cont;
}
int Contador_de_Caracteres (char *str, char ch)
{
	int cont=0;
	for (int i=0;i<strlen(str);i++)
	{
		if (str[i]==ch)
		cont++;
	}
	return cont;
}

using namespace std;	
int main()
{
	setlocale (LC_ALL ,"");
	char string1[100], string2[100], string3[100];
	char ch;
	int cont=0, opc;
	
	while(1)
	{
		do
		{
			system("cls");
			printf("\n---- MENU ----");
		printf("\n0-Encerrar Menu");
		printf("\n1-Inserir Strings");
		printf("\n2-Reverter Strings");
		printf("\n3-Maiusculizar Strings");
		printf("\n4-Minusculizar Strings");
		printf("\n5-Maiusculizar o Caracter Inicial das strings");
		printf("\n6-Separar a primeira parte das Strings pelos espaços");
		printf("\n7-Contar as Vogais das Strings");
		printf("\n8-Contar as Letras das Strings");
		printf("\nOpção:\t");
		scanf("%d", &opc);
		}while((opc<1) && (opc>6));
		
		switch(opc)
		{
			case 0:
			{
				system("cls");
				printf("\n0-Encerrar Menu");
				exit(1);
				system("pause");
				break;
			}
			case 1:
			{
				system("cls");
				cont++;
				printf("\n1-Inserir Strings");
				printf("\nDigite a primeira string:\t");
				fflush(stdin);
				gets(string1);
				printf("\nDigite a segunda string:\t");
				fflush(stdin);
				gets(string2);
				printf("\nDigite a a terceira string:\t");
				fflush(stdin);
				gets(string3);
				system ("pause");
				break;
			}
			case 2:
			{
				system("cls");
				printf("\n2-Reverter Strings");
				printf("\n %s", Revertedor_de_Strings(string1));
				printf("\n %s", Revertedor_de_Strings(string2));
				printf("\n %s\n", Revertedor_de_Strings(string3));	
				system ("pause");
				break;
			}
			case 3:
			{
				system("cls");
				printf("\n3-Maiusculizar Strings");
				printf("\n %s", Maiusculizador_de_Strings(string1));
				printf("\n %s", Maiusculizador_de_Strings(string2));
				printf("\n %s\n", Maiusculizador_de_Strings(string3));
				system ("pause");
				break;
								
			}
			case 4:
			{
				system("cls");
				printf("\n4-Minusculizar Strings");
				printf("\n %s", Minusculizador_de_Strings(string1));
				printf("\n %s", Minusculizador_de_Strings(string2));
				printf("\n %s\n", Minusculizador_de_Strings(string3));
				system ("pause");
				break;
			}
			case 5:
			{
				system("cls");
				printf("\n5-Maiusculizar o Caracter Inicial das strings");
				printf("\n %s", Maiusculizador_de_Iniciais(string1,strlen(string1)));
				printf("\n %s", Maiusculizador_de_Iniciais(string2,strlen(string2)));
				printf("\n %s\n", Maiusculizador_de_Iniciais(string3,strlen(string3)));
				system ("pause");
				break;		
			}
			case 6:
			{
				system("cls");
				printf("\n6-Separar a primeira parte das Strings pelos espaços");
				printf("\n %s", Separador_de_Strings(string1));
				printf("\n %s", Separador_de_Strings(string2));
				printf("\n %s\n", Separador_de_Strings(string3));		
				system ("pause");
				break;	
			}
			case 7:
			{
				system("cls");
				printf("\n7-Contar as Vogais das Strings");
				printf("\n %d", Contador_de_Vogais(string1));
				printf("\n %d", Contador_de_Vogais(string2));
				printf("\n %d\n", Contador_de_Vogais(string3));
				system ("pause");
				break;				
			}
			case 8:
			{
				system("cls");
				printf("\n8-Contar os Caracteres das Strings");
				printf("\n %d", Contador_de_Caracteres(string1,'a'));
				printf("\n %d", Contador_de_Caracteres(string2,'a'));
				printf("\n %d\n", Contador_de_Caracteres(string3,'a'));
				system ("pause");
				break;
			}
				
			}
		}
	return 0;
	}
