#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

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

FILE* arq;
FILE* arqTipo;

FILE*arqAno;

struct Tcad cad;
struct Ttipo tipo;

int main()
{
		setlocale(LC_ALL, "portuguese");
	char op;
	int cod, achou, anobusca;
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
					
					arqTipo = fopen("tipo.dat", "r");
					if(!arqTipo)
					{
						printf("\nAinda não foi gerado o arquivo de despesas!!!\n\n");
						system("pause");
						breike++;
						break;
					}
					fclose(arqTipo);
					
					arqTipo = fopen("tipo.dat", "r");
					while(!feof(arqTipo))
					{
						fread(&tipo, sizeof(struct Ttipo), 1, arqTipo);
						if(!feof(arqTipo) && tipo.codTipo == cad.codVer) achou++;
					}
					fclose(arqTipo);
					
				}while(achou==0);
				
				if(breike==1)
					break;
					
			//	fflush(stdin);
				printf("\nInsira o mês:\n");
				scanf("%d", &cad.mes);
			//	fflush(stdin);
				printf("\nInsira o ano:\n");
				scanf("%d", &cad.ano);
			//	fflush(stdin);
				printf("\nInsira o valor da despesa:\n");
				scanf("%f", &cad.valor);
			//	fflush(stdin);
				
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
				
				printf("\nDigite o ano em que se desejam ver as despesas mensais:\n");
				scanf("%d", &anobusca);
				
				arq = fopen("despesa.dat", "r");
				arqTipo = fopen("tipo.dat", "r");
				while(!feof(arqTipo) && cad.ano == anobusca && cad.codVer == tipo.codTipo)
				{
					fread(&tipo, sizeof(struct Ttipo), 1, arqTipo);
					
					if(cad.mes == 1)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 2)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 3)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 4)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 5)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 6)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 7)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 8)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 9)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 10)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 11)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
					
					if(cad.mes == 12)
					{
						if(!feof(arqTipo)) printf("%d - %d\n", cad.mes, cad.ano);
						if(!feof(arqTipo)) printf("%d - %s\n", tipo.codTipo, tipo.tipo);
						if(!feof(arqTipo)) printf("%f\n", cad.valor);	
					}
		
				}
				
				fclose(arqTipo);
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '4':{
				system("cls");
				
				printf("\nDigite o ano em que se deseja gerar um arquivo de despesas por mês/ano:\n");
				scanf("%d", &anobusca);
				
				arq = fopen("despesa.dat", "r");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					
					if(!feof(arq) && anobusca == cad.ano)
					{
						arqAno = fopen("despesaanual.dat", "w+");
						fwrite(&cad, sizeof(struct Tcad), 1, arqAno);
						fclose(arqAno);
					}
				}
				fclose(arq);
				
				printf("\n");
				system("pause");
				break;
			}
		}
	}
}
