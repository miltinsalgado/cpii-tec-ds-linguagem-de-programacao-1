#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <locale.h>

struct Tcad
{
	char nome[50];
	char senha[50];
};

struct Tcad cad[200];

int main()
{
		setlocale(LC_ALL, "portuguese");
	char opc;
	int contp = -1;
	
	while(1)
	{
		system("cls");
		printf("\n- - - FILA DE ESPERA - - -\n\n");
		printf("\n1 - INSERIR;"); // nome e senha
		printf("\n2 - LISTAR;"); // nome e senha
		printf("\n3 - ATENDIMENTO;"); //tira a primeira pessoa da lista
		printf("\n4 - SAIR;"); //sai vagabundo
		printf("\nOpção: ");
		opc = getche();
		
		switch(opc)
		{
			case '4':
				{
					system("cls");
					printf("\n[SAINDO]\n\n");
					system("pause");
					exit(1);
				}
			
			case '1':
				{
					contp++;
					system("cls");
					fflush(stdin);
					printf("\nInsira o nome:\n");
					gets(cad[contp].nome);
					printf("\nInsira a senha:\n");
					scanf("%s", &cad[contp].senha);
					break;
				}
				
			case '2':
				{
					system("cls");
					printf("\n");
					for(int i = 0; i <= contp; i++)
					{
						printf("%s - %s\n", cad[i].nome, cad[i].senha);
					}
					printf("\n");
					system("pause");
					break;
				}
				
			case '3':
				{
					system("cls");
					for(int i = 0; i <= contp; i++)
					{
						cad[i] = cad[i + 1];
						/*strcpy(cad[i].nome, cad[i + 1].nome);
						strcpy(cad[i].senha, cad[i + 1].senha);*/
						
						/*strcpy(nome[i], nome[i + 1]);
						strcpy(senha[i], senha[i + 1]); --- OPÇÃO SEM STRUCT*/
					}
					contp--;
					break;
				}
			
			default:
				{
					system("cls");
					printf("\n[ERRO] Opção inválida!!!\n");
					system("pause");
					break;
				}	
		}		
	}
	
	return 0;
}
