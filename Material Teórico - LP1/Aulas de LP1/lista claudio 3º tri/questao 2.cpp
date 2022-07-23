#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

struct mercado
{
	int cod;
	char nome[20];
	float preco;
	int quant;
};

struct mercado mer[5];

struct vendas
{
	int codV;
//	char nomeV[20];
	float precoV;
};

struct vendas vd[50];

int main()
{
		setlocale(LC_ALL, "portuguese");
	char op;
	int cont = -1, buscacod, achou, quantdes, contvendas = -1;
	float total;
	
	while(1)
	{
		system("cls");
		printf("\n- - - MERCADO - - -\n");
		printf("\n1 - Inserir;");
		printf("\n2 - Listar;");
		printf("\n3 - Pedido;");
		printf("\n4 - Listar vendas;");
		printf("\n5 - SAIR.");
		printf("\n\nOpção: ");
		op = getche();
		
		switch(op)
		{
			case '1':
			{
				system("cls");
				cont++;
				
				printf("\nInsira o código do produto:\n");
				scanf("%d", &mer[cont].cod);
				fflush(stdin);
				printf("\nInsira o nome do produto:\n");
				gets(mer[cont].nome);
				printf("\nInsira o preço do produto:\n");
				scanf("%f", &mer[cont].preco);
				printf("\nInsira a quantidade do produto:\n");
				scanf("%d", &mer[cont].quant);
				
				printf("\n");
				system("pause");	
				break;
			}
			
			case '2':
			{
				system("cls");
				
				for(int i = 0; i <= cont; i++)
				{
					printf("\n%d - %s - %.2f - %d\n", mer[i].cod, mer[i].nome, mer[i].preco, mer[i].quant);
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '3':
			{
				system("cls");
					
				contvendas++;
				vd[contvendas].codV = contvendas + 1;
				
				while(1)
				{
					achou = 0;
					
					
					printf("\nDigite o código do produto a ser comprado:\n");
					scanf("%d", &buscacod);
					
					if(buscacod == 0)
					{
						break;
					}
					
					printf("\nDigite a quantidade desejada:\n");
					scanf("%d", &quantdes);
					
					for(int i = 0; i <= cont; i++)
					{
						if(mer[i].cod == buscacod)
						{
							printf("\nPRODUTO: %s;", mer[i].nome);
							printf("\nQUANTIDADE: %d;", mer[i].quant);
							printf("\nPREÇO UNITÁRIO: %.2f.\n", mer[i].preco);
							achou++;
							
							if(mer[i].quant - quantdes >= 0)
							{
								printf("\nO produto está disponível.\n");
								
								total = mer[i].preco * quantdes;
								vd[contvendas].precoV = vd[contvendas].precoV + total;
								
								//strcpy(vd[contvendas].nomeV, mer[i].nome);
								
								printf("\nPreço total da compra: %.2f.\n\n", vd[contvendas].precoV);
								
								mer[i].quant = mer[i].quant - quantdes;
							}
							
							else
							{
								printf("\nO produto não está disponível.\n\n");
							}
						}	
					}
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '4':
			{
				system("cls");
				
				for(int i = 0; i <= contvendas; i++)
				{
					printf("\n%d - %f\n", vd[i].codV, vd[i].precoV);
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '5':
			{
				system("cls");
				
				printf("\n[ENCERRANDO O PROGRAMA...]\n\n");
				
				system("pause");
				exit(1);
			}
			
			default:
			{
				system("cls");
				
				printf("\n[ERRO] Opção inexistente!\n\n");
				
				system("pause");
				break;
			}
		}
	}
}
