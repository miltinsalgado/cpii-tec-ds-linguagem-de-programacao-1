#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

struct rest
{
	char nome[50];
	char ende[50];
	char tipo[10];
	int nota;
};

struct rest cad[100];

char* maiusculas (char* st)
{
	char* aux = (char*) malloc (strlen(st) + 1);
	
	for(int i = 0; i < strlen(st); i++)
	{
		aux[i] = toupper(st[i]);
	}
	
	return aux;
}

int main()
{
		setlocale(LC_ALL, "portuguese");
	char op, buscatipo[10];
	int cont = -1, buscanota, achou;
	
	while(1)
	{
		system("cls");
		system("color F4");
		printf("\n- - - CADASTRO DE RESTAURANTES - - -\n");
		printf("\nMenu:\n");
		printf("\na - Inserir;");
		printf("\nb - Listar;");
		printf("\nc - Liste por nota;");
		printf("\nd - Liste por culinária;");
		printf("\ne - SAIR.\n");
		printf("\n\nOpção: ");
		op = toupper(getche());
		
		switch(op)
		{
			case 'A':
			{
				cont++;
				system("cls");
				system("color 30");
				fflush(stdin);
				printf("\nInsira o nome do restaurante:\n");
				gets(cad[cont].nome);
				printf("\nInsira o endereço do restaurante:\n");
				gets(cad[cont].ende);
				printf("\nInsira o tipo de comida do restaurante:\n");
				gets(cad[cont].tipo);
				
				do
				{
					printf("\nInsira uma nota (entre 0 e 5) para o restaurante:\n");
					scanf("%d", &cad[cont].nota); /* não posso usar o GETCHE pois ele tranformaria o número em caracter
													e isso impediria fazer comparações matemáticas com ele após a inserção. */
					
					if(cad[cont].nota < 0 || cad[cont].nota > 5)
					{
						printf("\n[ERRO] Nota inválida. Digite novamente.\n");
					}
					
				} while(cad[cont].nota < 0 || cad[cont].nota > 5);
				
				printf("\n");
				system("pause");
				break;
			}
			
			case 'B':
			{
				system("cls");
				system("color E1");
				
				for(int i = 0; i <= cont; i++)
				{
					printf("\n%s - %s - %s - %d\n", cad[i].nome, cad[i].ende, cad[i].tipo, cad[i].nota);
				}
				
				printf("\n");
				system("pause");	
				break;
			}
			
			case 'C':
			{
				system("cls");
				system("color 71");
				achou = 0;
								
				do
				{
				
					do
					{	
						printf("\nInsira uma nota para busca:\n");
						scanf("%d", &buscanota);
						
						if(buscanota < 0 || buscanota >= 5)
						{
							printf("\n[ERRO] Nota inválida. Digite novamente.\n");
						}
						
					} while(buscanota < 0 || buscanota > 5);
					
					
					for(int i = 0; i <= cont; i++)
					{
						if(cad[i].nota > buscanota)
						{
							printf("\n%s - %s - %s - %d\n", cad[i].nome, cad[i].ende, cad[i].tipo, cad[i].nota);
							achou++;
						}
					}
					
					if(achou == 0)
					{
						printf("\n[ERRO] Restaurantes com nota acima desta pesquisada não existem. Tente novamente.\n");
					}
					
				} while(achou == 0);
				
				
				printf("\n");
				system("pause");
				break;
			}
			
			case 'D':
			{
				system("cls");
				system("color 04");
				fflush(stdin);
				achou = 0;
				
				do
				{
				
					printf("\nDigite uma culinária para busca:\n");
					gets(buscatipo);
					
					for(int i = 0; i <= cont; i++)
					{
						if(strcmp(maiusculas(buscatipo), maiusculas(cad[i].tipo)) == 0)
						{
							printf("\n%s - %s - %d\n", cad[i].nome, cad[i].ende, cad[i].nota);
							achou++;
							
						}
					}
				
					if(achou == 0)
					{
						printf("\n[ERRO] Restaurantes com essa culinária pesquisada não existem. Tente novamente.\n");
					}
				
				} while(achou == 0);
				
				printf("\n");
				system("pause");
				break;
			}
			
			case 'E':
			{
				system("cls");
				system("color 40");
				
				printf("\n[ENCERRANDO PROGRAMA]\n\n");
				
				system("pause");
				exit(1);
				break;
			}
			
			default:
			{
				system("cls");
				system("color B2");
				
				printf("\n[ERRO] Opção inválida!\n\n");

				system("pause");
				break;
			}
		
		}
	}
}
