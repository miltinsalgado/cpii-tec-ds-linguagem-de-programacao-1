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
	char st[100];
	char continua;
	char limpar;
	char ch;
	
		printf("\nDeseja limpar o arquivo?\n");
		limpar=toupper(getche());
		if(limpar=='S'){
			arq=fopen("11-11-2019.txt","w+");
		}
		else{
			arq=fopen("11-11-2019.txt","a+");
		}
			if(!arq){
			 printf("\nProblema na abertura do arquivo");
			 system("pause");
			 exit(1);
			}
			while(1){
			printf("\nDigite o conteúdo do arquivo a ser adicionado:\t");
			scanf("%s", &st);
			Beep(500,500);
			//fputs(st,arq);
			//fputs("\n",arq);
			fprintf(arq, "%s", st);	
			printf("\nDeseja continuar inserindo? (S ou N)\n");
			continua=toupper(getche());
			printf("\n");
			if(continua=='N'){
				fclose(arq);
				arq=fopen("11-11-2019.txt","r");
				while(!feof(arq)){
					
				system("color 1F");
				Beep(500,500);
				ch = fgetc(arq);
				if(ch=='ÿ'){
				break;
				}
				printf("%c",ch);
				}
				break;
			}
		}
	fclose(arq);
}
