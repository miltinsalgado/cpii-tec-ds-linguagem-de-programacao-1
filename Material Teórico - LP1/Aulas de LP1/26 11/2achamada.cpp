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

struct Ttipo
{
	char tipo[20];
	int codTipo;
};

struct Tcad
{
	int codVer;
	int mes;
	int ano;
	float valor;
};

struct Tvariedade
{
	int mesCop;
	int anoCop;
};

struct Tvariedade vari;

FILE* arq;
FILE* arqTipo;

struct Tcad cad;
struct Ttipo tipo;

int main()
{
		setlocale(LC_ALL, "portuguese");
	char op;
	int cod, achou;
	float total = 0;
	
	while(1)
	{
		system("cls");
		fflush(stdin);
		printf("\n1 - Inserir despesas;");
		printf("\n2 - Inserir tipos de despesas;");
		printf("\n3 - Listar despesas mensais com totalizador;"); //o  usuario dá os parâmetros (ano)
		printf("\n4 - Gerar arquivos de despesas por mês/ano;"); //o  usuario dá os parâmetros (ano)
		printf("\n5 - Sair.\n");
		op = getche();
		
		switch(op)
		{
			case '5': exit(1);
			
			case '1':{
				system("cls");
				achou = 0;
				int breike = 0;
				fflush(stdin);
				
				do{
				
					printf("\nInsira o código da despesa:\n");
					scanf("%d", &cad.codVer);
					fflush(stdin);
					
					arqTipo = fopen("tipo.dat", "r");
					if(!arqTipo)
					{
						printf("\nAinda não foi gerado o arquivo de despesas!!!\n");
						breike++;
						break;
					}
					
					while(!feof(arqTipo))
					{
						fread(&tipo, sizeof(struct Ttipo), 1, arqTipo);
						if(!feof(arqTipo) && tipo.codTipo == cad.codVer) achou++;
					}
					fclose(arqTipo);
				}while(achou==0);
				
				if(breike==1)
					break;
				fflush(stdin);
				printf("\nInsira o mês:\n");
				scanf("%d", &cad.mes);
				fflush(stdin);
				printf("\nInsira o ano:\n");
				scanf("%d", &cad.ano);
				fflush(stdin);
				printf("\nInsira o valor da despesa:\n");
				scanf("%f", &cad.valor);
				fflush(stdin);
				
				arq = fopen("despesa.dat", "a+");
				fwrite(&cad, sizeof(struct Tcad), 1, arq);
				fclose(arq);
			
				printf("\n");
				system("pause");
				break;
			}
			
			case '2':{
				system("cls");
				fflush(stdin);
				printf("\nInsira o código do tipo da despesa:\n");
				scanf("%d", &tipo.codTipo);
				fflush(stdin);
				printf("\nInsira o tipo da despesa:\n");
				gets(tipo.tipo);
				fflush(stdin);
				
				arqTipo  = fopen("tipo.dat", "a+");
				fwrite(&tipo, sizeof(struct Ttipo), 1, arqTipo);
				fclose(arqTipo);
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '3':{
				system("cls");
				total = 0;
				
				arq = fopen("despesa.dat", "r");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					
					total = cad.valor + total;
				}
				fclose(arq);
				
				arqTipo = fopen("tipo.dat", "r");
				while(!feof(arqTipo))
				{
					fread(&tipo, sizeof(struct Ttipo), 1, arqTipo);
					if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
				}
				
				fclose(arqTipo);
				
				printf("\n\nTOTAL: %f\n", total);
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '4':{
				system("cls");
				
				arq = fopen("despesa.dat", "r");
				arqTipo = fopen("tipo.dat", "r");
				while(!feof(arq) && !feof(arqTipo));
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					fread(&tipo, sizeof(struct Ttipo), 1, arqTipo);
					
					vari.mesCop = cad.mes;
					vari.anoCop = cad.ano;
					
					printf("\n%d / %d\n", vari.mesCop, vari.anoCop);
					if(!feof(arqTipo) && cad.mes == vari.mesCop && cad.ano == vari.anoCop && tipo.codTipo == cad.codVer) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
				}
				fclose(arq);
				fclose(arqTipo);
				
				printf("\n");
				system("pause");
				break;
			}
		}
	}
}
