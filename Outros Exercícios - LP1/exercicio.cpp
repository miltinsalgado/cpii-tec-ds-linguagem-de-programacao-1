#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <windows.h>

int main (){
	setlocale(LC_ALL,"");
	struct TDesp{
		char despesa[15];
		int ano;
		int mes;
		float valor;	
	};
	FILE *arq;
	struct TDesp desp;
	char opc, consulta[15], ch;	
	float total=0;
	int busca;
	while (1){
		system("cls");
		printf ("\n 1 - INSERIR DESPESAS");
		printf ("\n 2 - INSERIR TIPO DE DESPESAS");
		printf ("\n 3 - LISTAR DESPESAS MENSAIS COM TOTALIZADOR");
		printf ("\n 4 - GERAR AQUIVOS DE DESPESAS POR MÊS/ANO");
		printf ("\n 5 - SAIR");
		printf("\nOpção:\t");
		opc=getche();
		if(opc=='5'){
			exit(1);
		}
		if(opc=='1'){
			system("cls");
			printf("\nDigite o tipo de despesa:\t");
			scanf("%s", &desp.despesa);
			printf("\nDigite o mês da despesa:\t");
			fflush(stdin);
			scanf("%d", &desp.mes);
			printf("\nDigite o ano da despesa:\t");
			fflush(stdin);
			scanf("%d", &desp.ano);
			printf("\n digite o valor da despesa: \t");
			fflush(stdin);
			scanf("%f",&desp.valor);
			arq=fopen("despesas.dat","a+");
			fwrite(&desp, sizeof(struct TDesp),1,arq);
			fclose(arq);
		}
		if(opc=='2')
		{
			system("cls");
			printf ("\n digite a despesa a ser inserida:\t");
			scanf("%s",&consulta);
			arq=fopen("despesas.dat","r");
			fread(&desp,sizeof(struct TDesp),1,arq);
			while(!feof(arq))
			{
				if(!feof(arq))
				if(strcmp(consulta,desp.despesa)!=0)
				{
				printf("\n NÃO EXISTE\n");
				break;	
				}
				
			}
			rewind(arq);
			system("pause");
			fclose(arq);
		}
		if(opc=='3')
		{
			system("cls");
			arq=fopen("despesas.dat","r");
			printf("\n Digite o ano a ser buscado:\n");
			scanf("%d",&busca);
			while(!feof(arq))
			{
				if(busca==desp.ano)
				{
						
			for (int i=1;i<=12;i++)
			{
				total=0;
				if(i==1)
				printf("\n JANEIRO \n");
				if(i==2)
				printf("\n FEVEREIRO \n");
				if(i==3)
				printf("\n MARCO \n");
				if(i==4)
				printf("\n ABRIL \n");
				if(i==5)
				printf("\n MAIO \n");
				if(i==6)
				printf("\n JUNHO \n");
				if(i==7)
				printf("\n JULHO \n");
				if(i==8)
				printf("\n AGOSTO \n");
				if(i==9)
				printf("\n SETEMBRO \n");
				
				
				while(!feof(arq))
				{
					total=0;
					fread(&desp,sizeof(struct TDesp),1,arq);
					if(desp.mes==i){
					total+=desp.valor;
					if(!feof(arq))
					printf ("\n %s-%f\n", desp.despesa, total);
					}	
				}
				}	rewind(arq);
			}
		
				
			}
			system("pause");
			fclose(arq);
		}
	}
}
