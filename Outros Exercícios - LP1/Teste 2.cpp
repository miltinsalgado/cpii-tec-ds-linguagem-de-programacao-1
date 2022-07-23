#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <windows.h>
	int main ()
{
	setlocale(LC_ALL,"");
	struct TFunc{
		char nome[50];
		char matricula[10];
		char turma[10];
		char sexo[10];	
	};
	FILE *arq;
	FILE *arq110;
	FILE *arq112;
	FILE *arq210;
	FILE *arq212;
	FILE *arq310;
	FILE *arq312;
	FILE *teste;
	struct TFunc func;
	char opc, consulta[50], ch;
	while (1){
		system("cls");
		printf ("\n 1 - INSERIR");
		printf ("\n 2 - LISTAR AGRUPADO");
		printf ("\n 3 - GERAR ARQUIVOS POR TURMA");
		printf ("\n 4 - CONFERIR");
		printf ("\n 5 - SAIR");
		printf("\nOpção:\t");
		opc=getche();
			if (opc==5){
				exit(1);
			}
			if (opc=='1'){
				system("cls");
				printf ("\nDigite seu nome:\t");
				fflush(stdin);
				scanf("%[A-Z a-z]s",&func.nome);
				printf ("\nDigite sua matrícula:\t");
				fflush(stdin);
				scanf("%s",&func.matricula);
				printf ("\nDigite sua turma:\t");
				fflush(stdin);
				scanf("%s",&func.turma);
				printf("\nDigite seu sexo:\t");
				fflush(stdin);
				scanf("%s",&func.sexo);
				arq=fopen("alunos.dat","a+");
				fwrite(&func,sizeof(struct TFunc),1,arq);
				fclose(arq);
			}
			if (opc=='2'){
				system("cls");
				arq=fopen("alunos.dat","r");
				
				printf ("\nIN-110\n");
				do{
					fread(&func,sizeof(struct TFunc),1,arq);
					if(strcmp(func.turma,"in110")==0){
					printf ("\nNome: %s - - Matricula: %s - - Turma: %s - - Sexo: %s \n", func.nome, func.matricula, func.turma, func.sexo);
					}
				}while(!feof(arq));
				printf ("\nIN-112\n");
				do{
					fread(&func,sizeof(struct TFunc),1,arq);
					if(strcmp(func.turma,"in112")==0){
					printf ("\nNome: %s - - Matricula: %s - - Turma: %s - - Sexo: %s \n", func.nome, func.matricula, func.turma, func.sexo);
					}
				}while(!feof(arq));
				printf ("\nIN-210\n");
				do{
					fread(&func,sizeof(struct TFunc),1,arq);
					if(strcmp(func.turma,"in210")==0){
					printf ("\nNome: %s - - Matricula: %s - - Turma: %s - - Sexo: %s \n", func.nome, func.matricula, func.turma, func.sexo);
					}
				}while(!feof(arq));
				printf ("\nIN-212\n");
				do{
					fread(&func,sizeof(struct TFunc),1,arq);
					if(strcmp(func.turma,"in212")==0){
					printf ("\nNome: %s - - Matricula: %s - - Turma: %s - - Sexo: %s \n", func.nome, func.matricula, func.turma, func.sexo);
					}
				}while(!feof(arq));
				printf ("\nIN-310\n");
				do{
					fread(&func,sizeof(struct TFunc),1,arq);
					if(strcmp(func.turma,"in310")==0){
					printf ("\nNome: %s - - Matricula: %s - - Turma: %s - - Sexo: %s \n", func.nome, func.matricula, func.turma, func.sexo);
					}
				}while(!feof(arq));
				
				printf ("\nIN-312 \n");
				do{
					fread(&func,sizeof(struct TFunc),1,arq);
					if(strcmp(func.turma,"in312")==0){
					printf ("\nNome: %s - - Matricula: %s - - Turma: %s - - Sexo: %s \n", func.nome, func.matricula, func.turma, func.sexo);
					}
				}while(!feof(arq));
				fclose(arq);
				system("pause");
		}
		if(opc=='3'){
				arq=fopen("alunos.dat","r");
				while(!feof(arq)){
					fread(&func,sizeof(struct TFunc),1,arq);
					if(strcmp(func.turma,"in110")==0){
						arq110=fopen("in110.dat","a+");
						fwrite(&func,sizeof(struct TFunc),1,arq110);
					}
					if(strcmp(func.turma,"in112")==0){
						arq110=fopen("in112.dat","a+");
						fwrite(&func,sizeof(struct TFunc),1,arq112);
					}
					if(strcmp(func.turma,"in210")==0){
						arq110=fopen("in210.dat","a+");
						fwrite(&func,sizeof(struct TFunc),1,arq210);
					}
					if(strcmp(func.turma,"in212")==0){
						arq110=fopen("in212.dat","a+");
						fwrite(&func,sizeof(struct TFunc),1,arq212);
					}
					if(strcmp(func.turma,"in310")==0){
						arq110=fopen("in310.dat","a+");
						fwrite(&func,sizeof(struct TFunc),1,arq310);
					}
					if(strcmp(func.turma,"in312")==0){
						arq110=fopen("in312.dat","a+");
						fwrite(&func,sizeof(struct TFunc),1,arq312);
					}
				}
				fclose(arq110);
				fclose(arq112);
				fclose(arq210);
				fclose(arq212);
				fclose(arq310);
				fclose(arq212);
				fclose(arq);
				Beep(300,300);
		}
		if(opc=='4'){
			printf ("\nDigite o nome do arquivo para ser aberto:\n");
			scanf("%s",&consulta);
			teste=fopen(consulta,"r");
			while(!feof(teste)){	
			ch=fgetc(teste);
			printf("%c",ch);
			}
			fclose(teste);
			system("pause");
		}
	}
}
