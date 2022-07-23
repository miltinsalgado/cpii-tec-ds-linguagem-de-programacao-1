#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <locale.h>

/*char* maiusculas (char* st)
{
	char* aux = (char*) malloc ((strlen(st) + 1) * sizeof (char));
	
	for(int i = 0; i < strlen(st); i++)
	{
		aux[i] = toupper(st[i]);
	}
	
	return aux;
}*/

struct Tcad
{
	char nome[50];
	char senha[50];
	char prior;
};

struct Tcad cad[200];

int main()
{
		setlocale(LC_ALL, "portuguese");
	char opc;
	int contp = -1, contn = 0, achou = 0;
	
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
					
					do{
						printf("\nVocê é prioritário ou não prioritário? (P/N).\n");
						cad[contp].prior = toupper(getche());
						
						if(cad[contp].prior != 'P' && cad[contp].prior != 'N')
						{
							printf("\n\nOpção inválida. Digite novamente.\n");	
						}
						
					} while(cad[contp].prior != 'P' && cad[contp].prior != 'N');
					
					printf("\n\n");
					system("pause");
					break;
				}
				
			case '2':
				{
					system("cls");
					printf("\n");
					for(int i = 0; i <= contp; i++)
					{
						printf("%s - %s - %c\n", cad[i].nome, cad[i].senha, cad[i].prior);
					}
					printf("\n");
					system("pause");
					break;
				}
				
			case '3':
				{
					for(int i = 0; i <= contp; i++)
					{
						if(cad[i].prior == 'N' && contn == 2)
						{
							for(int k = 0; k <= contp; k++)
							{
								if(cad[k].prior == 'P')
								{
									achou++;
									for(int i = k; i <= contp; i++)
									{
										cad[i] = cad[i + 1];
									}
									contp--;
								}
							}
							
							if(achou == 0)
							{
								for(int i = 0; i <= contp; i++)
								{
									cad[i] = cad[i + 1];
								}
								contp--;
							}	
							contn = 0;
							break;
						}
						
						if(cad[i].prior == 'P')
						{
							for(int i = 0; i <= contp; i++)
							{
								cad[i] = cad[i + 1];
							}
							contp--;
							break;
						}
						
						if(cad[i].prior == 'N')
						{
							for(int i = 0; i <= contp; i++)
							{
								cad[i] = cad[i + 1];
							}
							contp--;
							contn++;
						}
						
						break;
					}
					
					
					break;
					
					
					/*for(int i = 0; i <= contp; i++)
					{
						cad[i] = cad[i + 1];
					}
					contp--;
					break;*/
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
