#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main()
{

	int codPr[200];
	char nomePr[200][20];
	float precoPr[200];
	
	int contP = -1, contV = -1;
	//----
	//int codV[1000];
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
					fflush(stdin);
					scanf("%d", &codPr[contP]);
					printf("\n Digite o nome do produto ->");
					fflush(stdin);
					scanf("%s", &nomePr[contP]);
					printf("\n Digite o preco do produto ->");
					fflush(stdin);
					scanf("%f", &precoPr[contP]);
					break;
				}
				
			case '2':
				{
					system("cls");
					for (int i = 0; i <= contP; i++)
						printf("\n %d - %s - %f\n", codPr[i], nomePr[i], precoPr[i]);
						
					system("pause");
					break;
				}
				
			case '3':
				{
					fflush(stdin);
					system("cls");
					contV++;
					totParcial = 0;
					contItem = -1;
					printf("\n Digite a data da venda ->");
					scanf("%s", &dataV[contV]);
					
					while(1)
					{
						contItem++;
						printf("\n Digite o codigo do produto ->");
						scanf("%d", &codPrV[contV][contItem]);
						
						if (codPrV[contV][contItem] == -1) break;
						
						precoPrV[contV][contItem] = 0;
						
						for (int i = 0; i <= contP; i++)
						{
							if (codPr[i]==codPrV[contV][contItem]);
							{
								precoPrV[contV][contItem]=precoPr[i];
								strcpy(nomePrV, nomePr[i]);
							}
						}
						
						printf("\n %s - %f", nomePrV, precoPrV[contV][contItem]);
						printf("\n Digite a quantidade do produto ->");
						scanf("%f", &qtdPrV[contV][contItem]);
						totParcial += precoPrV[contV][contItem]*qtdPrV[contV][contItem];
						printf("\nTotal Parcial -> %f", totParcial);
					}
					
					total[contV] = totParcial;
					printf("\n Total da venda - > %f", total[contV]);
					system("pause");
					break;
				}
			
			case '4':
				{
					system("cls");
					for (int i = 0; i <= contV; i++)
						printf("\n %d - %s - %f", i + 1, dataV[i], total[i]);
						
					system("pause");
					break;
				}

		}
	}
}
