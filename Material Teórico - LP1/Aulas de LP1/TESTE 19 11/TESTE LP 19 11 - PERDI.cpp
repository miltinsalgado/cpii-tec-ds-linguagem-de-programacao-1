#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

char* maiusculas(char* st)
{
	char* aux = (char*) malloc (strlen(st) + 1);
	
	for(int i = 0; i < strlen(st); i++)
	{
		aux[i] = toupper(st[i]);
	}
	
	return aux;
}

struct Tcad
{
	char matricula[15];
	char nome[50];
	char sexo;
	char turma[10];	
};

FILE* arq;
FILE* arq110;
FILE* arq112;
FILE* arq210;
FILE* arq212;
FILE* arq310;
FILE* arq312;
struct Tcad cad;

int main()
{
		setlocale(LC_ALL, "portuguese");
	char op, limpar, st[100];
	
	while(1)
	{
		system("cls");
		printf("\n1 - Inserir;");
		printf("\n2 - Listar agrupado por turma;");
		printf("\n3 - Gerar arquivos por turma;");
		printf("\n4 - Sair.\n");
		printf("\nOpção: ");
		op = getche();
		
		switch(op)
		{
			case '4': exit(1);
			
			case '1':{
				system("cls");
				
				printf("\nDeseja limpar o arquivo? (S/N)\n");
				limpar = toupper(getche());
				if (limpar == 'S')
				arq = fopen("alunos.dat", "w+");
				
				fclose(arq);
				
				fflush(stdin);
				
				printf("\n\nDigite tua matrícula:\n");
				gets(cad.matricula);
				printf("\nDigite teu nome:\n");
				gets(cad.nome);
				
				do
				{
					printf("\nDigite teu sexo (F/M):\n");
					cad.sexo = toupper(getche());
					
					if(cad.sexo != 'F' && cad.sexo != 'M')
					{
						printf("\n\n[ERRO] Opção inválida. Digite novamente:\n");
					}
					
				}while(cad.sexo != 'F' && cad.sexo != 'M');
				
				printf("\n\nDigite tua turma:\n");
				gets(cad.turma);
				arq = fopen("alunos.dat", "a+");
				fwrite(&cad, sizeof(struct Tcad), 1, arq);
				fclose(arq);
				
				if(strcmp(maiusculas(cad.turma), "IN110") != 0 && strcmp(maiusculas(cad.turma), "IN112") != 0 && strcmp(maiusculas(cad.turma), "IN210") != 0 && strcmp(maiusculas(cad.turma), "IN212") != 0 && strcmp(maiusculas(cad.turma), "IN310") != 0 && strcmp(maiusculas(cad.turma), "IN312") != 0)
				{
					arq = fopen("alunos.dat", "w+");
					fclose(arq);
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '2':{
				system("cls");
				arq = fopen("alunos.dat", "r");
				
				printf("\nIN110\n\n");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && (strcmp(maiusculas(cad.turma), "IN110") == 0)) printf("%s - %s - %c\n", maiusculas(cad.matricula), maiusculas(cad.nome), toupper(cad.sexo));
				}
				
				fclose(arq);
				
				arq = fopen("alunos.dat", "r");
				
				printf("\nIN112\n\n");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && (strcmp(maiusculas(cad.turma), "IN112") == 0)) printf("%s - %s - %c\n", maiusculas(cad.matricula), maiusculas(cad.nome), toupper(cad.sexo));
				}
				
				fclose(arq);
				
				arq = fopen("alunos.dat", "r");
				
				printf("\n\nIN210\n\n");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && (strcmp(maiusculas(cad.turma), "IN210") == 0)) printf("%s - %s - %c\n", maiusculas(cad.matricula), maiusculas(cad.nome), toupper(cad.sexo));
				}
				
				fclose(arq);
				
				arq = fopen("alunos.dat", "r");
				
				printf("\n\nIN212\n\n");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && (strcmp(maiusculas(cad.turma), "IN212") == 0)) printf("%s - %s - %c\n", maiusculas(cad.matricula), maiusculas(cad.nome), toupper(cad.sexo));
				}
				
				fclose(arq);
				
				arq = fopen("alunos.dat", "r");
				
				printf("\n\nIN310\n\n");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && (strcmp(maiusculas(cad.turma), "IN310") == 0)) printf("%s - %s - %c\n", maiusculas(cad.matricula), maiusculas(cad.nome), toupper(cad.sexo));
				}
				
				fclose(arq);
				
				arq = fopen("alunos.dat", "r");
				
				printf("\n\nIN312\n\n");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && (strcmp(maiusculas(cad.turma), "IN312") == 0)) printf("%s - %s - %c\n", maiusculas(cad.matricula), maiusculas(cad.nome), toupper(cad.sexo));
				}
				
				fclose(arq);
				
				fclose(arq);
				printf("\n");
				system("pause");
				break;
			}
			
			case '3':{
				
				arq110 = fopen("110.dat", "w+");
				if(strcmp(maiusculas(cad.turma), "IN110") == 0) fwrite(&cad, sizeof(struct Tcad), 1, arq110);
				arq112 = fopen("112.dat", "w+");
				if(strcmp(maiusculas(cad.turma), "IN112") == 0) fwrite(&cad, sizeof(struct Tcad), 1, arq112);
				arq110 = fopen("210.dat", "w+");
				if(strcmp(maiusculas(cad.turma), "IN210") == 0) fwrite(&cad, sizeof(struct Tcad), 1, arq210);
				arq110 = fopen("212.dat", "w+");
				if(strcmp(maiusculas(cad.turma), "IN212") == 0) fwrite(&cad, sizeof(struct Tcad), 1, arq212);
				arq110 = fopen("310.dat", "w+");
				if(strcmp(maiusculas(cad.turma), "IN310") == 0) fwrite(&cad, sizeof(struct Tcad), 1, arq310);
				arq110 = fopen("312.dat", "w+");
				if(strcmp(maiusculas(cad.turma), "IN312") == 0) fwrite(&cad, sizeof(struct Tcad), 1, arq312);
				
				fclose(arq110);
				fclose(arq112);
				fclose(arq210);
				fclose(arq212);
				fclose(arq310);
				fclose(arq312);

				break;
			}
		}
	}
}
