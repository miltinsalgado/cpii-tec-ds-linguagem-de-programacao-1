#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main()
{
	struct tProduto{
		int cod;
		char nome[20];
		float preco;
	};

	struct tVenda {
		char data[11];
		int codPrV[200];
		float precoPrV[200];
		float qtdPrV[200];
		float total;
	};
	
	struct tProduto prod[200];
	struct tVenda venda[500];	
	
	int contP = -1, contV = -1;

	char opc, nomePrV[20];
	int contItem = -1;
	float totParcial;
	int achou;
	
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
					scanf("%d", &prod[contP].cod);
					printf("\n Digite o nome do produto ->");
					scanf("%s", &prod[contP].nome);
					printf("\n Digite o preco do produto ->");
					scanf("%f", &prod[contP].preco);
					break;
				}
				
			case '2':
				{
					system("cls");
					for (int i = 0; i <= contP; i++)
						printf("\n %d - %s - %f\n", prod[i].cod, prod[i].nome, prod[i].preco);
						
					system("pause");
					break;
				}
				
			case '3':
				{
					if (contP==-1)
					{
						printf("\n Nenhum produto cadastrado!!!");
						system("pause");
						continue;
					}
					fflush(stdin);
					system("cls");
					contV++;
					totParcial = 0;
					contItem = -1;
					printf("\n Digite a data da venda ->");
					scanf("%s", &venda[contV].data);
					
					while(1)
					{
						contItem++;
						do{
							printf("\n Digite o codigo do produto ->");
							scanf("%d", &venda[contV].codPrV[contItem]);
						
							if (venda[contV].codPrV[contItem]==-1) break;
						
							venda[contV].precoPrV[contItem] = 0;
							achou = 0;
						
							for (int i = 0; i <= contP; i++)
							{
								if (prod[i].cod==venda[contV].codPrV[contItem])
								{
									venda[contV].precoPrV[contItem]=prod[i].preco;
									strcpy(nomePrV,prod[i].nome);
									achou = 1;
								}
							}
						
						} while(achou==0);
						
						printf("\n %s - %f", nomePrV, venda[contV].precoPrV[contItem]);
						printf("\n Digite a quantidade do produto ->");
						scanf("%f", &venda[contV].qtdPrV[contItem]);
						totParcial += venda[contV].precoPrV[contItem]*venda[contV].qtdPrV[contItem];
						printf("\nTotal Parcial -> %f", totParcial);
					}
					
					venda[contV].total = totParcial;
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
