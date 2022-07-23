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
	
	printf("\nArquivos em Linguagem C.4-Leitura de Arquivos\n");
	
	FILE* arquivo4;
	char nome[50];
	char ch;
	int cont=1, aux=1;
	
	printf("\nDigite o nome do arquivo:\t");
	fflush(stdin);
	scanf("%s", &nome);
	arquivo4=fopen(nome, "r");
	if(arquivo4==NULL){
		printf("\n\aErro na abertura do Arquivo!");
	}
	do{
		if(ch=='\n' || aux==1)
	{
		Beep(500,100);
		printf("%d\t", cont);
		cont++;
	}
		system("color 1F");
		ch=fgetc(arquivo4);
		if(ch!=EOF){
			printf("%c", ch);
		}
		aux++;
		
	}while(ch!=EOF);
		
	system("pause");
}
