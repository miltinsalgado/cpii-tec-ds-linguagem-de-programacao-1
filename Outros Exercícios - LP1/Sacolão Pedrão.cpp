#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

	struct Tprod
	{
		char nome[20];
		int codigoP;   
		float preco;   
		float peso;	    
	};	
	struct Tprod produto, vetprod[200];	
	int contp=-1;
	
	char* AchaProduto(int codigo)
{
	int k=0;
	for(k=0;k<=contp;k++)
		{
			if(vetprod[k].codigoP==codigo)
			{
			return vetprod[k].nome;
			}
		}
		return vetprod[k].nome;
}	
	struct Tvenda
	{
		char data[20];
		int codigoV[200];	
		int codigoPV[200];	
		float QtdPV[200];	
		float total[200];	
		float precoPV[200];
		int Qtditens;
		char nomePV[20];
	};
	struct Tvenda vetvenda[500];
int main()
{
		setlocale(LC_ALL,"");

	int contp=-1, contv=-1, contpv=-1, i=0, j=0, achou=0, sair=0;
	char opc;
	float subtotal;
	
	while(1)
	{
		fflush(stdin);
		system("cls");
		system("color 7");
		printf("\nMENU-SACOLÃO PEDRÃO");
		printf("\n1-Cadastro de Produtos");
		printf("\n2-Listagem de Produtos Cadastrados");
		printf("\n3-Registro de Vendas");
		printf("\n4-Listagem de Vendas Registradas");
		printf("\n5-Listagem de Dados de vendas");
		printf("\n6-Encerramento do Sacolão");
		printf("\nOpção do menu selecionada:\t");
		opc=getche();
		switch (opc)
		{
			case '1':
			{
				fflush(stdin);
				system("cls");
				system("color A");
				Beep(500, 500);
				contp++;
				printf("\nOpção (1) selecionada: Cadastro de Produtos\n");
				printf("\nDigite o nome do produto a ser cadastrado:\t");
				fflush(stdin);
				fgets(produto.nome, sizeof(produto.nome), stdin);
				produto.codigoP=contp+1;
				printf("\nCódigo de produto gerado pelo programa:\t[%d]", produto.codigoP);
				printf("\nDigite o preço do produto cadastrado em R$:\t");
				fflush(stdin);
				scanf("%f", &produto.preco);
				vetprod[contp]=produto;
				system("pause");
				break;		
			}
			case '2':
			{
					if (contp==-1)
				{
					printf("\n\a[ERRO] Nenhum produto cadastrado no sistema!\n");
					system("pause");
					continue;
				}
				fflush(stdin);
				system("cls");
				system("color B");
				Beep(500, 500);
				printf("\nOpção (2) selecionada: Listagem de Produtos Cadastrados\n");
				printf("Produtos cadastrados na Opção (1)-Cadastro de Produtos\n");
				for(i=0;i<=contp;i++)
				{
				printf("\nNome do produto: %s", vetprod[i].nome);
				printf("\nCódigo do produto: [%d]", vetprod[i].codigoP);
				printf("\nPreço do produto: R$ %f\n", vetprod[i].preco);
				}
				system("pause");
				break;	
			}
			case '3':
			{
				system("cls");
				system("color C");
				Beep(500, 500);
				fflush(stdin);					
				if (contp==-1)
				{
					printf("\n\a[ERRO] Nenhum produto cadastrado no sistema\n!");
					system("pause");
					continue;
				}
				printf("\nOpção (3) selecionada: Registro de Vendas");
				contv++;
				vetvenda[contv].Qtditens=0;
				subtotal=0;
				printf("\nDigite a data da venda:\t");
				fflush(stdin);
				fgets(vetvenda[contv].data, sizeof(produto.nome), stdin);
				vetvenda[contv].codigoV[contv]=contv+1;
				printf("\nIniciando registro de venda, digite [-1] para sair");
				contpv++;
				achou=0;
				while(1)
				{
					do
					{
						printf("\nDigite o código do produto:\t");
						scanf("%d", &vetvenda[contv].codigoPV[contpv]);
						vetvenda[contv].precoPV[contpv]=0;
						if(vetvenda[contv].codigoPV[contpv]==-1)
						{
							sair=1;
							break;
						} 
						for(int k=0;k<=contp;k++)
						{
							if(vetvenda[contv].codigoPV[contpv]==vetprod[k].codigoP)
							{
								achou=1;
								vetvenda[contv].precoPV[contpv]=vetprod[k].preco;
								strcpy(vetvenda[contv].nomePV, vetprod[k].nome);
								vetvenda[contv].Qtditens++;
							}	
						}
						if (achou==0)
						{
							printf("\n\a[ERRO]Produto não cadastrado\n");
						}
					}while(achou==0);
					
					if(sair==1) break;
						fflush(stdin);
						printf("Nome do produto:\t%s\nPreço do produto em R$:\tR$%f\n", vetvenda[contv].nomePV, vetvenda[contv].precoPV[contpv]);
						printf("\nDigite a quantidade do produto na venda:\t");
						scanf("%f", &vetvenda[contv].QtdPV[contpv]);
						subtotal+=vetvenda[contv].precoPV[contpv]*vetvenda[contv].QtdPV[contpv];
						printf("\nSubtotal da venda em R$ = R$ %f", subtotal);
				}
				vetvenda[contv].total[contv]=subtotal;
				printf("\nTotal da venda em R$ = R$%f\n", vetvenda[contv].total[contv]);
				system("pause");
				break;	
			}
			case '4':
			{
				if (contp==-1)
				{
					printf("\n\a[ERRO] Nenhum produto cadastrado no sistema!\n");
					system("pause");
					continue;
				}
				system("cls");
				Beep(500,500);	
				system("color D");
				printf("\nOpção (4) selecionada: Listagem de Vendas Registradas");
			
				for(int j=0;j<=contv;j++)	
				{
					printf("\nCódigo da Venda:\t%d", vetvenda[j].codigoV[j]);
					printf("\nData da Venda:\t%s", vetvenda[j].data);
					printf("\nTotal da venda em R$:\tR$%f\n", vetvenda[j].total[j]);
				} 
				system("pause");
				break;
			}
			case '5':
			{
				system("cls");	
				if (contp==-1)
				{
					printf("\n\a[ERRO] Nenhum produto cadastrado no sistema!\n");
					system("pause");
					continue;
				}
				Beep(500,500);	
				system("color E");
				printf("\nOpção (5) selecionada: Listagem de Dados de vendas\n");
					for(int j=0;j<=contv;j++)	
				{
					printf("\nData da Venda:\t%s", vetvenda[j].data);
					for(int i=0;i<vetvenda[j].Qtditens;i++)
					{
						printf("\nNome do produto: %s\nPreço: %f - Quantidade:  %f\n", AchaProduto(vetvenda[j].codigoPV[i]), vetvenda[j].precoPV[i], vetvenda[j].QtdPV[i]);
						printf("\nTotal da venda: %f\n", vetvenda[j].total[j]);
					}
				} 
				system("pause");
				break;	
			}
			case '6':
			{
				system("cls");
				system("color F");
				printf("\nOpção (6) selecionada: Encerramento do Sacolão");
				printf("\n\a[AGUARDE] Encerrando sistema do Sacolão Pedrão");
				exit(1);
				system("pause");
				break;	
			}
		}
	}
}


