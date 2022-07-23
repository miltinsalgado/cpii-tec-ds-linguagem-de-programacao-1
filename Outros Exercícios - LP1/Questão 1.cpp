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
		char nome[30];
		char endereco[50];
		int comida;
		float nota;
	};
	struct info restaurante[100];
	
	int opc, cont=-1, procura_comida;
	float avaliacao;
	
	while(1){
		Beep(659,1000);
		system("cls");
		
		printf("\t\t\t\t\tLista de Structs: QUESTÃO 01");
		printf("\n\t\t\t\t\tINFORMAÇÕES DE RESTAURANTES");
		printf("\n\t\t|MENU|");
		printf("\n---------------------------------------");
		printf("\n0-Encerrar programa");
		printf("\n1-Cadastrar novo restaurante");
		printf("\n2-Listar todos os restaurantes cadastrados");
		printf("\n3-Consultar restaurantes pela avaliação");
		printf("\n4-Consultar restaurantes pelo tipo de comida");
		printf("\nOpção selecionada:\t");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 0:{
				system("cls");
				printf("\nOpção [0-Encerrar programa] selecionada");
				printf("\n\a[AGUARDE], encerrando programa");
				system("pause");
				exit(1);
			}
			case 1:{
				Beep(523,500);
				system("cls");
				system("color 7");
				printf("\nOpção [1-Cadastrar novo restaurante] selecionada\n");
				cont++;
				printf("\nDigite o nome do restaurante:\t");
				fflush(stdin);
				gets(restaurante[cont].nome);
				printf("\nDigite o endereço completo do restaurante (%s):\t", restaurante[cont].nome);
				fflush(stdin);
				gets(restaurante[cont].endereco);
				printf("\nDigite o tipo de comida do restaurante de acordo com o sub-menu abaixo:\n1-Brasileira\n2-Chinesa\n3-Francesa\n4-Italiana\n5-Japonesa");
				printf("\nTipo de comida:\t");
				fflush(stdin);
				scanf("%d", &restaurante[cont].comida);
				printf("\nDigite a avaliação do restaurante (%s) de 0 a 5.0:\t", restaurant[cont].nome);
				fflush(stdin);
				scanf("%f", &restaurante[cont].nota);
				printf("\n\aRESTAURANTE (%s) CADASTRADO!", restaurante[cont].nome);
				system("pause");
				break;
			}
			case 2:{
				Beep(523,500);
				system("cls");
				printf("\nOpção [2-Listar todos os restaurantes cadastrados] selecionada");
				printf("\n\t\tRESTAURANTES CADASTRADOS");
				for(int i=0;i<=cont;i++){
					printf("\n%d-Nome do Restaurante:\t%s", i+1, restaurante[i].nome);
					printf("\nEndereço: %s", restaurante[i].endereco);
					if(restaurante[i].comida==1){
						printf("\nTipo de comida:\tBrasileira");
					}
					else if(restaurante[i].comida==2){
						printf("\nTipo de comida:\tChinesa");
					}
					else if(restaurante[i].comida==3){
						printf("\nTipo de comida:\tFrancesa");
					}
					else if(restaurante[i].comida==4){
						printf("\nTipo de comida:\tItaliana");
					}	
					else if(restaurante[i].comida==5){
						printf("\nTipo de comida:\tJaponesa");
					}
					else{
						printf("\nTipo de comida:\tNão cadastrado");
					}
					printf("\nAvaliação de 0 a 5.0:\t %.1f\n", restaurante[i].nota);			
				}
				system("pause");
				break;
			}
			case 3:{
				Beep(523,500);
				system("cls");
				printf("\nOpção [3-Consultar restaurantes pela avaliação] selecionada");
				printf("\nDigite a avaliação mínima (de 0 a 5) dos restaurantes desejados:\n");
				scanf("%f", &avaliacao);
				printf("Restaurantes com nota igual ou superior a %f pontos:\n", avaliacao);
				for(int i=0;i<=cont;i++){
					if(restaurante[i].nota>=avaliacao){
						if(restaurante[i].comida==1){
						printf("\nRestaurante: %s\nEndereço: %s \nAvaliação: %f \nTipo de Comida: Brasileira\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else if(restaurante[i].comida==2){
						printf("\nRestaurante: %s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Chinesa\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else if(restaurante[i].comida==3){
						printf("\nRestaurante: %s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Francesa\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else if(restaurante[i].comida==4){
						printf("\nRestaurante: %s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Italiana\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else if(restaurante[i].comida==5){
						printf("\nRestaurante: %s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Japonesa\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else{
						printf("\nRestaurante:%s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Não cadastrado\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}	
					}
					
				}
				system("pause");
				break;
			}
			case 4:{
				Beep(523,500);
				system("cls");
				printf("\nOpção [4-Consultar restaurantes pelo tipo de comida] selecionada");
				printf("\nDigite o tipo de comida dos restaurantes desejados, de acordo com o sub-menu abaixo:\n1-Brasileira\n2-Chinesa\n3-Francesa\n4-Italiana\n5-Japonesa\n");
				printf("\nTipo de Comida:\t");
				fflush(stdin);
				scanf("%d", &procura_comida);
				printf("\nRestaurantes com o tipo de comida selecionado:\n");
				for(int i=0;i<=cont;i++){
					if(procura_comida==restaurante[i].comida){
												if(restaurante[i].comida==1){
						printf("\nRestaurante: %s\nEndereço: %s \nAvaliação: %f \nTipo de Comida: Brasileira\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else if(restaurante[i].comida==2){
						printf("\nRestaurante: %s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Chinesa\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else if(restaurante[i].comida==3){
						printf("\nRestaurante: %s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Francesa\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else if(restaurante[i].comida==4){
						printf("\nRestaurante: %s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Italiana\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else if(restaurante[i].comida==5){
						printf("\nRestaurante: %s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Japonesa\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
						else{
						printf("\nRestaurante:%s \nEndereço: %s \nAvaliação: %f \nTipo de Comida: Não cadastrado\n", restaurante[i].nome, restaurante[i].endereco, restaurante[i].nota);
						}
					}
				}					
				system("pause");
				break;
			}
			default: {			
				system("cls");
				system("color D");
				printf("\n\a[ERRO] Opção digitada não presente no Menu, por favor abra o Menu novamente\n");
				system("pause");
				break;
			}
		}
	}	
}
