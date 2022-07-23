#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>


int main(){
	setlocale (LC_ALL ,"");
	
	struct TFunc {
		char nome [50];
		char tel [15];
		float sal;
		
	};
	struct TFunc func;
	char opc, consulta[50];
	float maior;
	char maiornome[50], maiortel[12];
	int cont=-1;
	
	FILE* arq;
		
	while(1){
		system("cls");
		
		printf("\n\t\t\t\t\tINFORMAÇÕES DE FUNCIONÁRIOS-2");
		printf("\n\t\t|MENU|");
		printf("\n---------------------------------------");
		printf("\n1-Inserir");
		printf("\n2-Listar Todos");
		printf("\n3-Consultar");
		printf("\n4-Consultar Maior Salário");
		printf("\n5-Sair");
		printf("\nOpção selecionada:\t");
		opc=getche();
		if (opc=='5')
		{
			fclose(arq);
			exit(1);
			}	
			if (opc=='1')
			{
				cont++;
				printf ("\nDigite seu nome: \n");
				fflush(stdin);
				scanf ("%[a-z A-Z]s",&func.nome);
				printf ("\nDigite seu telefone: \n");
				fflush(stdin);
				scanf ("%s",&func.tel);
				printf ("\nDigite seu salario: \n");
				fflush(stdin);
				scanf ("%f",&func.sal);
				arq=fopen("aula_1.dat","a+");
				fwrite(&func,sizeof(struct TFunc),1,arq);
				fclose(arq);
				system("pause");
			}
			if (opc=='2')
			{
				arq=fopen("aula_1.txt","r");
			
				while (!feof(arq)){
				fread (&func, sizeof(struct TFunc),1,arq);
				printf ("\n Nome: %s - - telefone: %s - - salario: %f \n", func.nome, func.tel, func.sal);
				}
				fclose(arq);
				system("pause");
				
			}
			if (opc=='3')
			{
				printf ("\nDigite o nome a ser consultado: \n");
				scanf ("%s",&consulta);
				arq=fopen("aula_1.dat","r+");

				while (!feof(arq)){
				if (strcmp(consulta,func.nome)==0)
				{				
					fread (&func, sizeof(struct TFunc),1,arq);
					printf ("\nNome: %s - - telefone: %s - - salario: %f \n", func.nome, func.tel, func.sal);
				}
				
			}
			fclose(arq);
				system("pause");
			}
			if (opc=='4')
			{
				maior=0;
				int i=0;			
				
				fread(&func,sizeof(struct TFunc),1,arq);
				while (!feof(arq)){
				{
				arq=fopen("aula_1.dat","r+");
				if (i==0)
				{
					maior=func.sal;
				}
				if (func.sal>maior)
				{
					maior=func.sal;
					strcpy(maiornome, func.nome);
					strcpy(maiortel, func.tel);
				}
				i++;
				}
				printf("\nMaior Salário: %f - %s - %s", maior, maiornome, maiortel);
				
				system("pause");
				
			}
	}
	
}
}
