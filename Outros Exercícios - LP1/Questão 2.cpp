#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>



int main(){
	setlocale (LC_ALL ,"");
	
	struct info{
		char produto[20];
		int codigo;
		float preco;
		float quantidade;
	};
	struct info estoque[5];
	
	int opc, cont=-1, j=-1, achouprod=0, busca_codigo=-1;
	float busca_quantidade, subtotal, total;
	
	while(1){
		Beep(659,1000);
		system("cls");
		
		printf("\t\t\t\t\tLista de Structs: QUESTÃO 02");
		printf("\n\t\t\t\t\t    ESTOQUE DE UM MERCADO");
		printf("\n|MENU|\n");
		printf("\n0-Encerrar programa");
		printf("\n1-Cadastrar informações de um produto");
		printf("\n2-Listar informações do estoque");
		printf("\n3-Realizar pedidos");
		printf("\nOpção selecionada:\t");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 0:{
				system("cls");
				printf("\nOpção [0-Encerrar programa] selecionada");
				printf("\n\a[AGUARDE], encerrando programa");
				system("cls");
				system("pause");
				exit(1);
			}
			case 1:{
				Beep(523,500);
				system("cls");
				printf("\nOpção [1-Cadastrar informações de um produto] selecionada");
				cont++;
				printf("\nDigite o nome do produto:\t");
				fflush(stdin);
				gets(estoque[cont].produto);
				estoque[cont].codigo=cont+1;
				printf("\nCódigo do produto (%s) gerado pelo sistema = %d\n", estoque[cont].produto, estoque[cont].codigo);
				printf("\nDigite o preço (em R$) por Kg (Quilogramas) do produto (%s):\tR$ ", estoque[cont].produto);
				fflush(stdin);
				scanf("%f", &estoque[cont].preco);
				printf("\nDigite a quantidade do produto (%s) a ser armazenada no estoque, em Kg:\n", estoque[cont].produto);
				fflush(stdin);
				printf("Quantidade em Kg:\t");
				scanf("%f", &estoque[cont].quantidade);
				printf("\n\aPRODUTO (%s) CADASTRADO\n", estoque[cont].produto);
				system("pause");
				break;
			}
			case 2:{
				Beep(523,500);
				system("cls");
				printf("\nOpção [2-Listar informações do estoque] selecionada");
				printf("\n\tINFORMAÇÕES DE ESTOQUE\n");
				for(int i=0;i<=cont;i++){
					printf("\nNome do produto:\t%s", estoque[i].produto);
					printf("\nCódigo do produto:\t%d", estoque[i].codigo);
					printf("\nPreço do produto:\tR$ %f", estoque[i].preco);
					printf("\nQuantidade disponível no estoque em Kg:\t%f Kg\n", estoque[i].quantidade);
				}
				system("pause");
				break;
			}
			case 3:{
				Beep(523,500);
				system("cls");
				printf("\nOpção [3-Realizar pedidos] selecionada");
				printf("\nINICIANDO PEDIDOS");
				do{
						total=0;
						printf("\nDigite o código do produto desejado:\t");
						fflush(stdin);
						scanf("%d", &busca_codigo);
						j++;
						if(busca_codigo!=0){
							if(estoque[j].codigo==busca_codigo){
							achouprod=1;	
							printf("\nProduto identificado no estoque. Nome do produto de código [%d]: %s", estoque[j].codigo, estoque[j].produto);
							printf("\nInforme a quantidade do produto (%s) em Kg a ser adicionada no pedido:\t", estoque[j].produto);
							fflush(stdin);
							scanf("%f", &busca_quantidade);
								if(busca_quantidade>estoque[j].quantidade){
									printf("\n\a[ERRO] QUANTIDADE EM KG NO PEDIDO (%f) EXCEDE À QUANTIDADE NO ESTOQUE (%f)", busca_quantidade, estoque[j].quantidade);
									printf("\n\aPEDIDO NÃO REALIZADO COM SUCESSO!");
									break;
								}
								else{
								estoque[j].quantidade-=busca_quantidade;
								printf("\n\aPEDIDO REALIZADO COM SUCESSO!");
								printf("\nInformações do pedido:\n");
								subtotal+=estoque[j].preco*busca_quantidade;
								printf("\nProduto:\t%s\nQuantidade:\t%f Kg\nPreço Total: R$\t%f\n", estoque[j].produto, busca_quantidade, subtotal);
								}
							}
						if (achouprod!=1){
							printf("\n\a[ERRO]PRODUTO NÃO EXISTENTE NO ESTOQUE\n");
							break;
							}
						}
						
				}while(j>=1 && j<=5);
				total=subtotal;
				printf("\nTotal dos pedidos:\t%f\n", total);
				
				system("pause");
				break;
			}
			default:{			
				printf("\n\a[ERRO] OPÇÃO DIGITADA NÃO PRESENTE NO MENU! POR FAVOR, REINICIE O MENU E TENTE NOVAMENTE\n");
				system("pause");
				break;
			}
		}
	}	
}
