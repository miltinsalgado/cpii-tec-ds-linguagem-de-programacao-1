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
	
	int opc;
	
	while(1){
		Beep(659,1000);
		system("cls");
		
		printf("\t\t\t\t\tLista de Structs: QUEST�O 03");
		printf("\n\t\t\t\t\tINFORMA��ES DE RESTAURANTES");
		printf("\n|MENU|\n");
		printf("\n0-Encerrar programa");
		printf("\n1-Cadastrar novo restaurante");
		printf("\n2-Listar todos os restaurantes cadastrados");
		printf("\n3-Consultar restaurantes pela avalia��o");
		printf("\n4-Consultar restaurantes pelo tipo de comida");
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
				system("cls");
				printf("\nOp��o [1-Cadastrar novo restaurante] selecionada");
				system("pause");
				break;
			}
			case 2:{
				system("cls");
				printf("\nOp��o [2-Listar todos os restaurantes cadastrados] selecionada");
				system("pause");
				break;
			}
			case 3:{
				system("cls");
				printf("\nOp��o [3-Consultar restaurantes pela avalia��o] selecionada");
				system("pause");
				break;
			}
			case 4:{
				system("cls");
				printf("\nOp��o [4-Consultar restaurantes pelo tipo de comida] selecionada");
				system("pause");
				break;
			}
		}
	}	
}
