#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	
FILE *arq;
char arquivo[50];
char ch;

printf("\nDigite o nome do arquivo: ");
scanf("%s",&arquivo);
arq=fopen(arquivo,"r");
if (!arq){
	printf("\n\aArquivo não encontrado\n\n");
	system("pause");
	exit(1);
}

printf("\n");

while (!feof(arq)){	
	ch = fgetc(arq);
	printf("%c",ch);
}

system("pause");
fclose(arq);
}
