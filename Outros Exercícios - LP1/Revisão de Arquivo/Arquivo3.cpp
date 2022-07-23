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
	
	printf("\nArquivos em Linguagem C.2-Gravação de Dados em Arquivos\n");
	
	FILE* arquivo3 = fopen("text_3.txt", "w");
	char texto[50];
	
	if(arquivo3==NULL){
		printf("\n\aErro na abertura do arquivo");
		exit(1);
	}
	else{
		printf("\n\aArquivo aberto com sucesso!");
		printf("\nDigite o texto a ser gravado no arquivo:\t");
		scanf("%s", &texto);
		fprintf(arquivo3, "%s", texto);
		printf("\nTexto gravado com sucesso!");
		fclose(arquivo3);
	}	
}
