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
	
	printf("\nArquivos em Linguagem C.2-Criação de Arquivos\n");
	
	FILE* arquivo2 = fopen("text_2.txt", "a");
	
	printf("\n\aArquivo 2 criado com sucesso!\n");
	fclose(arquivo2);
}
