#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

struct Tcad
{
	char cpf[12];
	char nome[50];
	int cargo;
	float sal;
};

struct Tcad cad[100];
int cont=-1;

int remove (char* cpf2)
{
	for(int i=0; i<=cont; i++)
	{
		if(strcmp(cad[i].cpf, cpf2) == 0)
		{
			cont--;
			for(int j = i; i <= cont; j++)
				cad[j] = cad[j + 1];
				
			return 1;
		}
	}
	
	return 0;
}

int removeFaixa(float sal1, float sal2)
{
	int achou=0;
	
	for(int i = 0; i<= cont; i++)
	{
		if((cad[i].sal>=sal1) && (cad[i].sal<=sal2))
		{
			cont--;
			for(int j = i; j <= cont; j++)
				cad[j] = cad[j + 1];
				
				achou = 1;
		}
	}
	
	return achou;
}

main()
{
	char opc;
	char cpf[12];
	float sal1, sal2, total;
	setlocale(LC_ALL, "portuguese");
	while(1)
	{
		system("cls");
		printf("\n 1 - Inserir;");
		printf("\n 2 - Listar todos;");
		printf("\n 3 - Listar por cargo;");
		printf("\n 4 - Buscar por CPF;");
		printf("\n 5 - Remover funcionário;");
		printf("\n 6 - Remover por faixa salarial;");
		printf("\n 7 - Sair.\n");
		printf("\nOpção ");
		opc = getche();
		switch(opc)
		{
			case'1':{
				if(cont==99)
				{
					printf("\n Cadastro excedido!!!");
					system("pause");
					break;
				}
				cont++;
				printf("\n Digite o CPF->");
				scanf("%s", &cad[cont].cpf);
				printf("\n Digite o nome->");
				scanf("%s", &cad[cont].nome);
				do{
					printf("\n Digite o Cargo(1-Analista 2 _ Programador 3 - Digitador)->");
					scanf("%d", &cad[cont].cargo);
				}while((cad[cont].cargo<0) && cad[cont].cargo>4);
				printf("\n Digte o Salario->");
				scanf("%f", &cad[cont].sal);
				break;
			}
			case'2':{
				for(int i = 0; i <= cont; i++)
				{
					/*if(cad[i].cargo==1)
						printf("\n %s - % s - Analista - %0.2f", cad[i].cpf, cad[i].nome, cad[i].sal);
					else if(cad[i].cargo==2)
						printf("\n %s - % s - Programador - %0.2f", cad[i].cpf, cad[i].nome, cad[i].sal);
					else
						printf("\n %s - % s - Digitador - %0.2f", cad[i].cpf, cad[i].nome, cad[i].sal);
					*/
					printf("\n %s - %s - %s - %0.2f", cad[i].cpf, cad[i].nome, cad[i].cargo, cad[i].sal);
				}
				system("pause");
				break;
			}
			case '3':{
				/*total=0;
				printf("\nAnalista\n");
				for(int i = 0; i<= cont; i++)
				{
					if(cad[i].cargo==1)
					{
						printf("\n %s - %0.2f",cad[i].nome, cad[i].sal);
						total+=cad[i].sal;
					}
				}
				printf("\n total = %f", total);
				
				total=0;
				printf("\nProgramador\n");
				for(int i = 0;i<=cont; i++)
				{
					if(cad[i].cargo==2)
					{
						printf("\n %s - %0.2f", cad[i].nome, cad[i].sal);
						total+=cad[i].sal;
					}
				}
				printf("\n Total = %f", total);
				
				total=0;
				printf("\nDigitador\n");
				for(int i = 0; i <= cont; i++)
				{
					if(cad[i].cargo==3)
					{
						printf("\n %s - %0.2f", cad[i].nome, cad[i].sal);
						total+=cad[i].sal;
					}
				}
				printf("\n Total = %f", total);*/
				
				for(int cargo = 1; cargo <= 3; cargo++)
				{
					total=0;
					printf("\n %s", cargo==1"Analista":cargo==2?"Programador":"Digitador");
					//printf("\nDigitador\n");
					for(int i = 0; i <cont; i++)
					{
						if(cad[i].cargo == cargo)
						{
							printf("\n % s - %0.2f", cad[i].nome, cad[i].sal);
							total+=cad[i].sal;
						}
					}
					printf("\n Total = %f", total);
				}
				system("pause");
				break;
			}
			case '4':{
				printf("\n Digite o CPF->");
				scanf("%s", &cpf);
				for(int i = 0 ; i<= cont; i++)
				{
					if(strcmp(cad[i].cpf, cpf) == 0)
					{
						printf("\n %s - %s %0.2f", cad[i].nome, cad[i].cargo==1?"Analista":)
						system("pause");
						break;
					}
				}
				break;
			}
			case'5':{
				printf("\n Digite o CPF->");
				scanf("%s", &cpf);
				if(remove(cpf) == 1)
					printf("\n CPF removido com sucesso!!!");
				else
					printf("\n CPF não encontrado!!!");
				system("pause");
				break;
			}
			case '6':{
				printf("\nDigite a faixa mínima do salário->");
				scanf("%f", &sal1);
				printf("\n Digite a faixa máxima do salário->");
				scanf("%f", &sal2);
				if(removeFaixa(sal1, sal2) == 1)
					printf("\n Cadastros removidos com sucesso!!!");
				else
					printf("\n Cadastros não encontrados!!!");
				system("pause");
				break;
			}
			
			case '7': exit(1);
		}
	}
}
