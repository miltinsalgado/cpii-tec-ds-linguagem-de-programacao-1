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
		
		printf("\t\t\t\t\tLista de Structs: QUEST�O 02");
		printf("\n\t\t\t\t\t    ESTOQUE DE UM MERCADO");
		printf("\n|MENU|\n");
		printf("\n0-Encerrar programa");
		printf("\n1-Cadastrar informa��es de um produto");
		printf("\n2-Listar informa��es do estoque");
		printf("\n3-Realizar pedidos");
		printf("\nOp��o selecionada:\t");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 0:{
				system("cls");
				printf("\nOp��o [0-Encerrar programa] selecionada");
				printf("\n\a[AGUARDE], encerrando programa");
				system("cls");
				system("pause");
				exit(1);
			}
			case 1:{
				Beep(523,500);
				system("cls");
				printf("\nOp��o [1-Cadastrar informa��es de um produto] selecionada");
				cont++;
				printf("\nDigite o nome do produto:\t");
				fflush(stdin);
				gets(estoque[cont].produto);
				estoque[cont].codigo=cont+1;
				printf("\nC�digo do produto (%s) gerado pelo sistema = %d\n", estoque[cont].produto, estoque[cont].codigo);
				printf("\nDigite o pre�o (em R$) por Kg (Quilogramas) do produto (%s):\tR$ ", estoque[cont].produto);
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
				printf("\nOp��o [2-Listar informa��es do estoque] selecionada");
				printf("\n\tINFORMA��ES DE ESTOQUE\n");
				for(int i=0;i<=cont;i++){
					printf("\nNome do produto:\t%s", estoque[i].produto);
					printf("\nC�digo do produto:\t%d", estoque[i].codigo);
					printf("\nPre�o do produto:\tR$ %f", estoque[i].preco);
					printf("\nQuantidade dispon�vel no estoque em Kg:\t%f Kg\n", estoque[i].quantidade);
				}
				system("pause");
				break;
			}
			case 3:{
				Beep(523,500);
				system("cls");
				printf("\nOp��o [3-Realizar pedidos] selecionada");
				printf("\nINICIANDO PEDIDOS");
				do{
						total=0;
						printf("\nDigite o c�digo do produto desejado:\t");
						fflush(stdin);
						scanf("%d", &busca_codigo);
						j++;
						if(busca_codigo!=0){
							if(estoque[j].codigo==busca_codigo){
							achouprod=1;	
							printf("\nProduto identificado no estoque. Nome do produto de c�digo [%d]: %s", estoque[j].codigo, estoque[j].produto);
							printf("\nInforme a quantidade do produto (%s) em Kg a ser adicionada no pedido:\t", estoque[j].produto);
							fflush(stdin);
							scanf("%f", &busca_quantidade);
								if(busca_quantidade>estoque[j].quantidade){
									printf("\n\a[ERRO] QUANTIDADE EM KG NO PEDIDO (%f) EXCEDE � QUANTIDADE NO ESTOQUE (%f)", busca_quantidade, estoque[j].quantidade);
									printf("\n\aPEDIDO N�O REALIZADO COM SUCESSO!");
									break;
								}
								else{
								estoque[j].quantidade-=busca_quantidade;
								printf("\n\aPEDIDO REALIZADO COM SUCESSO!");
								printf("\nInforma��es do pedido:\n");
								subtotal+=estoque[j].preco*busca_quantidade;
								printf("\nProduto:\t%s\nQuantidade:\t%f Kg\nPre�o Total: R$\t%f\n", estoque[j].produto, busca_quantidade, subtotal);
								}
							}
						if (achouprod!=1){
							printf("\n\a[ERRO]PRODUTO N�O EXISTENTE NO ESTOQUE\n");
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
				printf("\n\a[ERRO] OP��O DIGITADA N�O PRESENTE NO MENU! POR FAVOR, REINICIE O MENU E TENTE NOVAMENTE\n");
				system("pause");
				break;
			}
		}
	}	
}
