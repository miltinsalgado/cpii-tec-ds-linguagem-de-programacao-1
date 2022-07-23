#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main()
{
	FILE *Arq;
	char st[100];
	char continua, limpar;
	char ch;
	int lin = 1;
	//char *st;
	//st=(char *) malloc(100);
	
	printf("\n Deseja limpar o arquivo? (S/N)->");
	limpar=toupper(getche());
	if (limpar=='S')
		Arq=fopen("in110.txt", "w+"); // w+ -> Cria um arquivo para leitura e escrita (ou seja, caso já haja, substitui)
	else
		Arq=fopen("in110.txt", "a+"); //a+ -> Acrescenta dados ou cria uma arquivo para leitura e escrita (ou seja, não substitui o arquivo, só acrescenta coisas
		
		if (Arq == NULL)  //(!Arq) // se der erro na abertura do arquivo...
		{
			printf("\n Problema na abertura do arquivo!!!");
			system("pause");
			exit(1);
		}
		
		while(1)
		{
			fflush(stdin);
			printf("\n Digite um texto->");
			scanf("%[A-Z a-z]s", &st);
			//fputs(st, Arq); // fputs escreve uma string num arquivo
			//fputs("\n", Arq);
			fprintf(Arq, "%s\n", st); //escrevi no arquivo a string que eu digitei e, ao final, dei um espaço
			printf("\n Digita outro texto (S/N)->");
			continua=toupper(getche());
			if (continua=='N') break;
		}
		fclose(Arq);
		
		Arq=fopen("in110.txt", "r");
		
		while(!feof(Arq))
		{
			fgets(st, 100, Arq); //ch=fgetc(Arq)
			if(!feof(Arq))          //se usar fgetc, não precisa disso
				printf("%s", st);
		}
		
		fclose(Arq); // fechei o arquivo
}
