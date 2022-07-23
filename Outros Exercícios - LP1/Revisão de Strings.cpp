#include <stdio.h> 
#include <conio.h>
#include <string.h> 
#include <locale.h>
#include <windows.h>

using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	Beep(523,500);
	printf("\n----Revisão de Strings----");
	char str1[100], str2[100], str3[100], strc[100];
	int num, size1, size2, size3, i;
	
	while(1)
	{
		printf("\n_____Menu_____");
		printf("\nEntrada das Strings:1");
		printf("\nConsulta das strings digitadas:2");
		printf("\nComparação das Strings:3");
		printf("\nMedição das strings:4");
		printf("\nEncerramento do programa:5");
		printf("\n\nDigite o respectivo número da opção do Menu desejada:\t");
		num=getche();
		
		if(num=='1')
		{
			system ("cls");
			Beep(523,500);	
				printf("\n-----Entrada de Strings------\n");
			printf("\nDigite a primeira string:\n\t");
			gets(str1);
			printf("\nDigite a segunda string:\n\t");
			gets(str2);
			printf("\nDigite a terceira string:\n\t");
			gets(str3);
			
			printf("\n\n");
			printf("\t\tEntrada de Strings encerrada");
			system("cls");
		}
		else if (num=='2')
		{
			system("cls");
			printf("\nDigite corretamente a primeira string digitada para consultá-la:\n");
			gets(strc);
				if (strcmp(strc,str1))
			{
				printf("\nString digitada (%s) não presente no sistema, tente novamente", strc);
				
			}	else
				printf("\nString digitada (%s) presente no sistema (%s)", strc, str1);
				
			printf("\nDigite corretamente a segunda string digitada para consultá-la:\n");
			gets(strc);
				if (strcmp(strc,str2))
			{
				printf("\nString digitada (%s) não presente no sistema, tente novamente", strc);
			}
				else
				printf("\nString digitada (%s) presente no sistema (%s)", strc, str2);
				
			printf("\nDigite corretamente a terceira string digitada para consultá-la:\n");
			gets(strc);
				if (strcmp(strc,str3))
			{
				printf("\nString digitada (%s) não presente no sistema, tente novamente", strc);
			}
				else
				printf("\nString digitada (%s) presente no sistema (%s)", strc, str3);
		}
		else if(num=='3')
		{
			system ("cls");
			Beep(523,500);
				printf("\n-----Comparação de Strings------\n");
			if (strcmp(str1,str2))
			{
				printf("\n A string (%s) e a string (%s) são diferentes", str1, str2);
			}
			else 
				printf("\n A string (%s) e a string (%s) são iguais", str1, str2);
				
			if (strcmp(str1,str3))
			{
				printf("\n A string (%s) e a string (%s) são diferentes", str1, str3);
			}
			
			else 
				printf("\n A string (%s) e a string (%s) são iguais", str1, str3);
				
			if (strcmp(str2,str3))
			{
				printf("\n A string (%s) e a string (%s) são diferentes", str2, str3);
			}
			
			else 
				printf("\n A string (%s) e a string (%s) são iguais", str2, str3);
				
			printf("\n\n");
			printf("\t\tComparação das strings encerrada\n\n");
		}
		else if(num=='4')
		{
			system("cls");
			Beep(523,500);
				printf("\n-----Medição de Strings-----\n");
			size1=strlen(str1);
			printf("\nTamanho da primeira string digitada (%s) = %d", str1, size1);
			size2=strlen(str2);
			printf("\nTamanho da segunda string digitada (%s) = %d", str2, size2);
			size3=strlen(str3);
			printf("\nTamanho da terceira string digitada (%s) = %d", str3, size3);
			
			printf("\n\n");
			printf("\t\tMedição das strings encerrada\n\n");		
		}
		else if(num=='5')
		{
			printf("\nEncerrando programa\n");
			break;
			system("cls");
			system ("pause");
		}
		else
		{
		Beep(700,500);	
		system("cls");
		printf("\nOpção digitada desconhecida. Por favor digite uma opção presente no Menu\n\n");
		}
		
		
	}
	return 0;
}
