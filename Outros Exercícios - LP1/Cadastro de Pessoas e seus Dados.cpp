#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
	setlocale (LC_ALL ,"");
     
    char nome[100][50], sexo[100], opc, estcivil[100][50],aux[50];
    int idade[100], estcivil2[100], i=0, t=0;	
	while (1)
	{
		 Beep(659,1000);
		system("cls");
		printf("\n |MENU|");
		printf("\n 1-Entrada de Dados");
		printf("\n 2-Listagem de Dados");
		printf("\n 3-Consulta de Dados");
		printf("\n 4-Encerramento do Programa");
		printf("\n Opção: ");
		opc=getche();
	
	if (opc=='1')
	{
		system("cls");
		Beep(523,500);
		printf("\nVocê selecionou a opção 1-Entrada de Dados\n");
		printf("\nDigite o seu nome: ");
		scanf("%s" ,&nome[i]);
		printf("\nDigite sua idade: ");
		scanf("%d" ,&idade[i]);
		printf("\nDigite seu sexo (M/F): ");
		sexo[i]=toupper(getche());
		do
		{
		printf("\nDigite o estado civil do usuário:\n\n1 - Solteiro(a)\n\n2 - Casado(a)\n\n3 - Divorciado(a)\n\n4 - Viúvo(a)\n\nOpção: ");
		scanf("%d" ,&estcivil2[i]);
		if(estcivil2[i]==1)
		{
		strcpy(estcivil[i],"Solteiro(a)");
		}
		else if(estcivil2[i]==2)
		{
		strcpy(estcivil[i],"Casado(a)");
	    }
		else if(estcivil2[i]==3)
		{
		strcpy(estcivil[i],"Divorciado(a)");
	    }
		else if(estcivil2[i]==4)
		{
		strcpy(estcivil[i],"Viúvo(a)");
		}
		else
		{
	    printf("\n\a[ERRO]: Número de Estado Civil não encontrado");
     	}
	    }while((estcivil2[i]!=1) && (estcivil2[i]!=2) && (estcivil2[i]!=3) && (estcivil2[i]!=4));
		i++;
		printf("\n\n");
		system("pause");
		system("cls");
	}
	else if (opc=='2')
	{
	    system("cls");
	    Beep(523,500);
	    printf("\nVocê selecionou a opção 2-Listagem de Dados\n");
		for(int x=0;x<i;x++)
	    {
	       if (sexo[x]=='M')
	       {
	       	printf("\nNome: %s - Idade: %d anos - Sexo: Masculino - Estado Civil: %s" ,nome[x],idade[x] ,estcivil[x]);
		   }
		   else if (sexo[x]=='F')
	       {
	       	printf("\nNome: %s - Idade: %d anos - Sexo: Feminino - Estado Civil: %s" ,nome[x],idade[x] ,estcivil[x]);
		   }
		   else
	       {
	       	printf("\nNome: %s - Idade: %d anos - Sexo: Indefinido - Estado Civil: %s" ,nome[x],idade[x] ,estcivil[x]);
		   }
		}
		printf("\n\n");
		system("pause");
		system("cls");		
	}
    else if (opc=='3')
    {
    	system("cls");
    	Beep(523,500);
    	printf("\nVocê selecionou a opção 3-Consulta de Dados\n");
    	printf("\n\n");
    	printf("Digite o nome da pessoa a ser consultada:\n");
    	scanf("%s" ,&aux);
    	for(int j=0;j<i;j++)
    	{
    		if (strcmp(nome[j],aux)==0) 
		    {
			  if (sexo[j]=='M')
	          {
	       	    printf("\nIdade: %d - Sexo: Masculino - Estado Civil: %s" ,idade[j] ,estcivil[j]);
		      }
		      else if (sexo[j]=='F')
	          {
	       	    printf("\nIdade: %d - Sexo: Feminino - Estado Civil: %s" ,idade[j] ,estcivil[j]);
		      }
		      else
	          {
	       	    printf("\nIdade: %d - Sexo: Indefinido - Estado Civil: %s" ,idade[j] ,estcivil[j]);
		      }
			  break;
			}
		}
		printf("\n\n");
		system("pause");
		system("cls");
	}
	else if (opc=='4')
	{
		printf("\nVocê selecionou a opção 4-Encerramento do Programa\n");
		printf("\n\a[AGUARDE] Encerrando Programa\n");
		break;
	}
	else
	{
		printf("\n\a[ERRO] Opção digitada não presente no Menu, por favor reinicie o programa\n");
	    break;
    }
    }
printf("\n\n");
system("pause");
return 0;
}

