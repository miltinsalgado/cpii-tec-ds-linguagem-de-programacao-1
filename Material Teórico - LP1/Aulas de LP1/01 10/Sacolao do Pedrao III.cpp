#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

struct Tprod
{
	int cod;
	char nome[20];
	float preco;
};

struct Tvenda
{
	char data[11];
	int codV;
	
	float precoV;
	float qtdV;
	float totParcial;
	float total;
	
	char nomeV;
};
	struct Tprod produto[200];
	struct Tvenda venda[500];

main()
{
	int codPr[200];
	char nomePr[200][20];
	float precoPr[200];
	
	int contP = -1, contV = -1;
	//----
	int codV[1000];
	char dataV[500][11];
	int codPrV[500][200];
	float precoPrV[500][200];
	float qtdPrV[500][200];
	float total[500];
	
	char opc, nomePrV[20];
	int contItem = -1;
	float totParcial;

	
	
	while(1)
	{
		system("cls");
		printf("\n 1 - Cadastrar produto");
		printf("\n 2 - Listar produto");
		printf("\n 3 - Registrar venda");
		printf("\n 4 - Listar vendas");
		printf("\n 5 - Sair");
		printf("\n Opcao: ");
		opc = getche(); // scanf("%d", &opc);
		
		switch (opc)
		{
			case '5':
				{
					exit(1);
					break;
				}
				
			case '1':
				{
					fflush(stdin);
					system("cls");
					contP++;
					printf("\n Digite o codigo do produto ->");
					scanf("%d", &produto[contP].cod);
					printf("\n Digite o nome do produto ->");
					scanf("%s", &produto[contP].nome);
					printf("\n Digite o preco do produto ->");
					scanf("%f", &produto[contP].preco);
					break;
				}
				
			case '2':
				{
					system("cls");
					for (int i = 0; i <= contP; i++)
						printf("\n %d - %s - %f\n", produto[i].cod, produto[i].nome, produto[i].preco);
						
					system("pause");
					break;
				}
				
			case '3':
				{
					fflush(stdin);
					system("cls");
					contV++;
					venda.totParcial = 0;
					venda.contItem = -1;
					printf("\n Digite a data da venda ->");
					scanf("%s", &venda[contV].data);
					
					while(1)
					{
						venda.contItem++;
						printf("\n Digite o codigo do produto ->");
						scanf("%d", &venda[contV][contItem].codV);
						
						if (venda[contV][contItem].codV == -1) break;
						
						venda[contV][contItem].precoV = 0;
						
						for (int i = 0; i <= contP; i++)
						{
							if (produto[i].cod == venda[contV][contItem].codV)
							{
								venda[contV][contItem].precoV = produto[i].preco;
								strcpy(venda.nomeV, produto[i]).nome;
							}
						}
						
						printf("\n %s - %f", venda.nomeV, venda[contV][contItem].precoV);
						printf("\n Digite a quantidade do produto ->");
						scanf("%f", &venda[contV][contItem].qtdV);
						venda.totParcial += venda[contV][contItem].precoV * venda[contV][contItem].qtdV;
						printf("\nTotal Parcial -> %f", venda.totParcial);
					}
					
					venda[contV].total = venda   .totParcial;
					printf("\n Total da venda - > %f", venda[contV].total);
					system("pause");
					break;
				}
			
			case '4':
				{
					system("cls");
					for (int i = 0; i <= contV; i++)
						printf("\n %d - %s - %f", i + 1, venda[i].data, venda[i].total);
						
					system("pause");
					break;
				}

		}
	}
}
