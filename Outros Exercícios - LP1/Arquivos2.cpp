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
int cont=1, aux=1;

printf("\nDigite o nome do arquivo: ");
scanf("%s",&arquivo);
arq=fopen(arquivo,"r");

if (!arq){
	printf("\nArquivo não encontrado\n\n");
	system("pause");
	exit(1);
}


while (!feof(arq)){
	system("color B2");
	if(ch=='\n' || aux==1)
	{
		Beep(500,100);
		printf("%d\t", cont);
		cont++;
	}
	
	ch = fgetc(arq);
	printf("%c",ch);
	aux++;	
}
printf("\n");
system("pause");
fclose(arq);
}
