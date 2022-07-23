#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>

int quebra_linha(char* st){
	int lin=0;
	for(int i=0;i<strlen(st);i++){
		if(st[i]=='\n')
		return 1;
	}
}

int main(){
	setlocale(LC_ALL,"");
FILE *arq;
char arquivo[50];
char st[200];
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
	system("color 1F");
	fgets(st,200,arq);
	Beep(500,500);
	printf("%d\t%s", quebra_linha(st),st);
}
printf("\n");
system("pause");
fclose(arq);
}
