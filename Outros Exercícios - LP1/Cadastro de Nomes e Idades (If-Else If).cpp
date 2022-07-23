#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Créditos do Programa: Milton Salgado Leandro-IN110-N°23, Professor: Cláudio Passos

	char* ConversorMaiusculo (char*st) //Função(ConversorMaiusculo):Conversor para caracteres maiúsculos para a variável (busca)
	{
		{
 			int i=0;
 			while (i<strlen(st))
    			{
 	  				st[i]=toupper(st[i]);
 	  				i++;
    			} 
 			return st;
 		}
	}
	
	char* ConversorMinusculo (char* st) //Função(ConversorMinusculo):Conversor para caracteres minúsculos para a variável (busca)
	{
		{
 			int i=0;
 			while (i<strlen(st))
    			{
 	  				st[i]=tolower(st[i]);
 	  				i++;
    			} 
 			return st;
 		}
	}
	
	char* ConversorIniciais(char* x) //Função(ConversorIniciais):Conversor para caracteres iniciais de um nome para a variável (busca)
	{
		x[0]=toupper(x[0]);
		for (int i=1;i<strlen(x);i++)
	  		x[i]=tolower(x[i]);
			return x;
	}
	
	char* SeparadorSobrenome (char* nome) //Função(SeparadorSobrenome):Separa o sobrenome do nome, na variável (nome) para (sobrenome)
	{
		char* sobrenome;
		int posich=0, cont=0;
		sobrenome=(char*) malloc(strlen(nome)+1);
		for(int i=strlen(nome);i>=0;i--)
			{
			if (nome[i]==' ')
			{
			posich=i;
			break;
			}
		}
		for(int x=posich+1;x<strlen(nome);x++)
		{
			sobrenome[cont]=nome[x];
			cont++;
		}
			sobrenome[cont]=',';
			cont++;
			sobrenome[cont]=' ';
			cont++;
	
		for (int x=0;x<posich;x++)
		{
			sobrenome[cont]=nome[x];
			cont++;
		}
			sobrenome[cont]='\0';
	
			return sobrenome;
	}

using namespace std;	
int main()
{
	setlocale (LC_ALL ,"");
	
	char nome[100][50], busca[50];
	int idade[100];
	char opc;
	int cont=-1;
	
	while(1)
	{
		Beep(659,1000);
		fflush(stdin);
		system("cls");
		printf("\n |MENU|");
		printf("\n 1-Entrada de Nomes e Idades");
		printf("\n 2-Listagem de Nomes e Idades");
		printf("\n 3-Consulta de Idades pelo Nome");
		printf("\n 4-Encerramento do Programa");
		printf("\n Opção: ");
		opc=getche();

			if(opc=='1')
				{
					system("cls");
					printf("\nVocê selecionou a opção 1-Entrada de Nomes e Idades\n");
					cont++;
					printf("\nDigite um nome completo:\a\n");
					scanf("%[a-z A-Z]s", &nome[cont]);
					printf("\nDigite a idade correspondente ao nome digitado anteriormente:\a\n");
					scanf("%d", &idade[cont]);
					system("pause");
					break;
				}
			else if(opc=='2')
				{
					system("cls");
					printf("\nVocê selecionou a opção 2-Listagem de Nomes e Idades\n");
					for(int i=0; i<=cont;i++)
					{
						printf("\nSobrenome e Nome: %s \nIdade: %d Anos\n", ConversorMaiusculo(SeparadorSobrenome(nome[i])), idade[i]);
					}
					system("pause");
					break;
				}
			else if(opc=='3') 
				{
					system("cls");
					printf("\nVocê selecionou a opção 3-Consulta de Idades pelo Nome\n");
					printf("\nDigite o nome a ser consultado:\a\n");
					scanf("%[a-z A-Z]s", &busca);
					for(int i=0;i<=cont;i++)
					{
						if (strcmp(ConversorMaiusculo(nome[i]), ConversorMaiusculo(busca))==0)
						{
							printf("\nIdade correspondente ao nome digitado: %d\n", idade[i]);
							break;
							system("pause");
						}
						else 
						{
							printf("\n[ERRO] Nome digitado não encontrado, por favor reinicie o programa e digite novamente\n");
							break;
							system("pause");
						}
					}
					system("pause");
					break;
				}
			else if(opc=='4')
				{
					system("cls");
					printf("\nVocê selecionou a opção 4-Encerramento do Programa\n");
					printf("\n\a[AGUARDE] Encerrando Programa\n");
					system("cls");
					system("pause");
					break;
				} 
			else 
				{
					system("cls");
					printf("\n\a[ERRO] Opção digitada não presente no Menu, por favor reinicie o programa\n");
					system("pause");
				}
					break;
	}
}

