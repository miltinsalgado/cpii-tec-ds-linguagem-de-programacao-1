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
	
	printf("\nArquivos em Linguagem C.1-Abertura de Arquivos\n");
	
	FILE* arquivo1 = fopen("text_1.txt", "r");
	
	if(arquivo1==NULL){
		printf("\n\aArquivo 1 não encontrado!\n");
	}
	else{
		printf("\n\aAbertura do Arquivo 1 realizada com sucesso!\n");
		fclose(arquivo1);
	}
}
