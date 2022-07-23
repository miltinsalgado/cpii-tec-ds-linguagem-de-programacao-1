#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
//Autor do Programa: Milton Salgado Leandro | Turma:IN110 | N�:23 | Professor de Linguagem de Programa��o 1: Cl�udio Passos

char* Formatacao_Turma (char* classroom) //Fun��o(Formatacao):Formata a string da vari�vel (classroom), retirando todos os caracteres especiais.
{
	char* classroomaux;
	classroomaux=(char*) malloc(strlen(classroom)+1);
	int i, cont=0;
	for(i=0;i<strlen(classroom);i++)
	{
		if ((classroom[i]!=' ') && (classroom[i]!='-') && (classroom[i]!='_') && (classroom[i]!='/') && (classroom[i]!='(') && (classroom[i]!=')'))
		{
			/*if((classroom[i]=='0') || (classroom[i]=='1') || (classroom[i]=='2') || (classroom[i]=='3') || (classroom[i]=='4') || (classroom[i]=='5') || (classroom[i]=='6') || (classroom[i]=='7') || (classroom[i]=='8') || (classroom[i]=='9'))
			{
				classroomaux[cont]=classroom[i];
				cont++;
			}
			else
			{
				classroomaux[cont]=classroom[i];
				cont++;
			}*/
			classroomaux[cont]=classroom[i];
			cont++;
		}
	}
	classroomaux[cont]='\0';
	return classroomaux;
}
	
char* Formatacao_Nome (char* classroom) //Fun��o(Formatacao_Nome): Formata a string da vari�vel (classroom), retirando todos os caracteres especiais menos o espa�o.
{
	char* classroomaux;
	classroomaux=(char*) malloc(strlen(classroom)+1);
	int i, cont=0;
	for(i=0;i<strlen(classroom);i++)
	{
		if ((classroom[i]!='-') && (classroom[i]!='_') && (classroom[i]!='/') && (classroom[i]!='(') && (classroom[i]!=')'))
		{
			/*if((classroom[i]=='0') || (classroom[i]=='1') || (classroom[i]=='2') || (classroom[i]=='3') || (classroom[i]=='4') || (classroom[i]=='5') || (classroom[i]=='6') || (classroom[i]=='7') || (classroom[i]=='8') || (classroom[i]=='9'))
			{
				classroomaux[cont]=classroom[i];
				cont++;
			}
			else
			{
				classroomaux[cont]=classroom[i];
				cont++;
			}*/
			classroomaux[cont]=classroom[i];
			cont++;
		}
	}
	classroomaux[cont]='\0';
	return classroomaux;
}
	
char* Conversor_Maiusculo (char*st) //Fun��o(Conversor_Maiusculo):Conversor para caracteres mai�sculos para a vari�vel (busca).
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
	
char* Conversor_Minusculo (char* st) //Fun��o(Conversor_Minusculo):Conversor para caracteres min�sculos para a vari�vel (busca).
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
	

int main()
{
	setlocale (LC_ALL ,"");
	printf("\t\t\t\t\t01_Menu-Cadastro de alunos e turmas");
	
	char nome[100][50], searchclass[50], searchaluno[50], turma[100][50];
	char opc;
	int idade[100], cont=0, achou=0;

	while(1)
	{
		Beep(659,1000);
		system("cls");
		printf("\t\t\t\t\t01_Menu-Cadastro de alunos e turmas");
		printf("\n\t|MENU|");
		printf("\n 1-Entrada de Dados");
		printf("\n 2-Listagem de Alunos");
		printf("\n 3-Pesquisa de Alunos por nome");
		printf("\n 4-Pesquisa de Alunos por turma");
		printf("\n 5-Encerramento do Menu");
		printf("\n Op��o:\t");
		fflush(stdin);
		opc=getche();
		
		switch(opc)
		{
			case '1':
				{
					system("cls");
					printf("\nVoc� selecionou a op��o 1-Entrada de Dados\n");
					printf("\nDigite do aluno:\nNome:\t");
					fflush(stdin);
					gets(nome[cont]);
					printf("\nDigite a idade do aluno:\nIdade(Anos):\t");
					fflush(stdin);
					scanf("%d", &idade[cont]);
					printf("\nDigite a turma correspondente ao nome digitado anteriormente:\nTurma:\t");
					fflush(stdin);
					gets(turma[cont]);
					cont++;
					system("pause");
					break;
				}
			case '2': 
				{
					system("cls");
					printf("\nVoc� selecionou a op��o 2-Listagem de Alunos\a\n");
					for(int i=0;i<cont;i++)
					{
						printf("\nNome do Aluno:\t %s \nIdade:\t %d Anos \nTurma:\t%s\t\n", Conversor_Maiusculo(Formatacao_Nome(nome[i])), idade[i], Conversor_Maiusculo(Formatacao_Turma(turma[i])));
					}
					system("pause");
					break;
				}
			case '3':
				{
					system("cls");
					printf("\nVoc� selecionou a op��o 3-Pesquisa de Alunos por nome\n");
					printf("\nDigite o nome a ser consultado:\n");
					fflush(stdin);
					gets(searchclass);
					for(int i=0;i<=cont;i++)
					{
						if (strcmp(Conversor_Maiusculo(searchclass), Conversor_Maiusculo(nome[i]))==0)
						{
							achou++;
							printf("\nTurma correspondente ao nome do aluno digitado (%s):\t %s\n", Conversor_Maiusculo(nome[i]),Conversor_Maiusculo(Formatacao_Turma(turma[i])));
						}
					}
					if (achou==0)
						{
							printf("\n\a[ERRO] Nome de aluno n�o cadastrado na op��o {1-Entrada de Dados}. Retorne ao menu e cadastre o nome na op��o apresentada.\n");
						}
					system("pause");
					break;
				}
			case '4':
				{
					system("cls");
					printf("\nVoc� selecionou a op��o 4-Pesquisa de Alunos por turma\n");
					printf("\nDigite a turma a ser consultada:\n");
					fflush(stdin);
					gets(searchaluno);
					for(int i=0;i<=cont;i++)
					{
						if (strcmp(Conversor_Maiusculo(searchaluno), Conversor_Maiusculo(Formatacao_Turma(turma[i])))==0)
						{
							achou++;
							printf("\nTurma:\t %s", Conversor_Maiusculo(Formatacao_Turma(turma[i])));
							printf("\nAlunos:\t %s\n", Conversor_Maiusculo(nome[i]));
						}
					}
					if (achou==0) 
						{
							printf("\n\a[ERRO] Turma n�o cadastrada na op��o {1-Entrada de Dados}. Retorne ao menu e cadastre a turma na op��o apresentada.\n");
						}
					system("pause");
					break;
				}
			case '5': 
				{
					system("cls");
					printf("\nVoc� selecionou a op��o 5-Encerramento do Programa\n");
					printf("\n\a[AGUARDE] Encerrando Programa\n");
					system("cls");
					system("pause");
					exit(1);
				}
				default:	
				{
					system("cls");
					printf("\n\a[ERRO] Op��o digitada n�o presente no Menu, por favor retorne ao Menu e selecione uma de suas op��es");
					break;
					system("pause");
				}
			break;
		}
		}
}
