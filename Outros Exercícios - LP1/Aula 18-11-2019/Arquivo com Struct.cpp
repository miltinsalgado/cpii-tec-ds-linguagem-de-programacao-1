#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include<ctype.h>

int main ()
{
	struct TFunc{
		char nome[50];
		char tel[15];
		float sal;	
	};
	FILE *arq;
	struct TFunc func;
	char opc, consulta[50];
	float maior;
	
	while (1)
	{
		system("cls");
		printf ("\n 1 - INSERIR");
		printf ("\n 2 - LISTAR");
		printf ("\n 3 - BUSCAR");
		printf ("\n 4 - MAIOR SALARIO");
		printf ("\n 5 - SAIR");
		opc=getche();
		
		if (opc==5)
		{
			exit(1);
		}
		if (opc=='1')
		{
			system("cls");
			printf ("\n digite seu nome: \n");
			fflush(stdin);
			scanf("%s",&func.nome);
			printf ("\n digite seu telefone: \n");
			fflush(stdin);
			scanf("%s",&func.tel);
			printf ("\n digite seu salario: \n");
			fflush(stdin);
			scanf("%f",&func.sal);
			arq=fopen("funcionario.txt","a+");
			fwrite(&func,sizeof(struct TFunc),1,arq);
			fclose(arq);
		}
		if (opc=='2')
		{
			system("cls");
			arq=fopen("funcionario.txt","r");
			while(!feof(arq))
			{
				fread(&func,sizeof(struct TFunc),1,arq);
				printf ("\n nome: %s - - telefone: %s - - salario: %f \n", func.nome, func.tel, func.sal);
			}
				system("pause");
		}
		if (opc=='3')
		{
			system("cls");
			printf ("\n digite o nome a ser consultado: \n");
			fflush(stdin);
			scanf("%s",&consulta);
			arq=fopen("funcionario.txt","r");
			fread(&func,sizeof(struct TFunc),1,arq);
			if (strcmp(consulta,func.nome)==0)
			{
				printf ("\n telefone: %s -- salario: %f \n", func.tel, func.sal);
			}
			else
			{
				printf ("\n nome nao encontrado!!\n");
			}
			system("pause");
		}
		if (opc=='4')
		{
			arq=fopen("funcionario.txt","r");
			fread(&func,sizeof(struct TFunc),1,arq);
		
			if (func.sal>maior)
			{	
				maior=0;
				maior=func.sal;
			}
			printf ("\n %s - - %f \n", func.nome, maior);
			system("pause");
			
		}
	}
}
