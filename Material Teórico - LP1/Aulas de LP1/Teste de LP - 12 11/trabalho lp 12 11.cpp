#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

struct Tcadastro
{
	char nome[50];
	char cpf[11];
	char cargo;
	float salario;
	char cargoBonito[15];
};

struct Tcadastro cad[100];

int main()
{
		setlocale(LC_ALL, "portuguese");
	char op,busca[11];
	int cont = -1, posi, nSal = -1, contTira = -1;
	float totAna = 0, totProg = 0, totDig = 0;
	float smin, smax;
	
	while(1)
	{
		system("cls");
		printf("\n1 - Inserir;");
		printf("\n2 - Listar todos;");
		printf("\n3 - Listar por cargo;");
		printf("\n4 - Listar por CPF;");
		printf("\n5 - Remover funcionário;");
		printf("\n6 - Remover por faixa salarial;");
		printf("\n7 - Sair.\n");
		printf("\nOpção: ");
		op = getche();
		
		switch(op)
		{
			case '1':
			{
				cont++;
				system("cls");
				fflush(stdin);
				printf("\nDigite o nome:\n");
				gets(cad[cont].nome);
				printf("\nDigite o CPF:\n");
				gets(cad[cont].cpf);
				printf("\nDigite o cargo (1 - Analista; 2 - Programador; 3 - Digitador):\n");
				cad[cont].cargo = getche();
				printf("\n\nDigite o salário:\n");
				scanf("%f", &cad[cont].salario);
				
				if(cad[cont].cargo == '1')
					strcpy(cad[cont].cargoBonito, "Analista");
				if(cad[cont].cargo == '2')
					strcpy(cad[cont].cargoBonito, "Programador");
				if(cad[cont].cargo == '3')
					strcpy(cad[cont].cargoBonito, "Digitador");
				
				if(cad[cont].cargo == '1')	
					totAna = totAna + cad[cont].salario;
				if(cad[cont].cargo == '2')
					totProg = totProg + cad[cont].salario;
				if(cad[cont].cargo == '3')
				totDig = totDig + cad[cont].salario;
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '2':
			{
				system("cls");
				for(int i = 0; i <= cont; i++)
				{
					printf("\n%s - %s - %s - R$%.2f\n", cad[i].nome, cad[i].cpf, cad[i].cargoBonito, cad[i].salario);
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '3':
			{
				system("cls");
				printf("\nAnalista\n");
				for(int i = 0; i <= cont; i++)
				{
					if(cad[i].cargo == '1')
						printf("\n%s - R$%.2f", cad[i].nome, cad[i].salario);
				}
				printf("\nTotal R$%.2f\n", totAna);
				printf("\nProgramador\n");
				for(int i = 0; i<= cont; i++)
				{
					if(cad[i].cargo == '2')
						printf("\n%s - R$%.2f", cad[i].nome, cad[i].salario);
				}
				printf("\nTotal R$%.2f\n", totProg);
				printf("\nDigitador\n");
				for(int i = 0; i<= cont; i++)
				{
					if(cad[i].cargo == '3')
						printf("\n%s - R$%.2f", cad[i].nome, cad[i].salario);
				}
				printf("\nTotal R$%.2f\n\n", totDig);
				
				system("pause");
				break;
			}
			
			case '4':
			{
				system("cls");
				fflush(stdin);
				printf("\nDigite o CPF a ser consultado:\n");
				gets(busca);
				
				for(int i = 0; i <= cont; i++)
				{
					if(strcmp(busca, cad[i].cpf) == 0)
					{
						printf("\n%s - %s - R$%.2f\n", cad[i].nome, cad[i].cargoBonito, cad[i].salario);
						break;
					}
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '5':
			{
				system("cls");
				fflush(stdin);
				printf("\nDigite o CPF do funcionário a ser removido:\n");
				gets(busca);
				
				for(int i = 0; i <= cont; i++)
				{
					if(strcmp(busca, cad[i].cpf) == 0)
					{
						posi = i;
						
						if(cad[i].cargo == '1')
							totAna = totAna - cad[i].salario;
						if(cad[i].cargo == '2')
							totProg = totProg - cad[i].salario;
						if(cad[i].cargo == '3')
							totDig = totDig - cad[i].salario;
						
						break;
					}
				}
				
				for(int i = posi; i <= cont; i++)
				{
					cad[i] = cad[i + 1];
				}
				
				cont--;
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '6':
			{
				system("cls");
				fflush(stdin);
				nSal = -1;
				contTira = -1;
				printf("\nDigite o mínimo da faixa de salário a ser removida:\n");
				scanf("%f", &smin);
				printf("\nDigite o máximo da faixa de salário a ser removida:\n");
				scanf("%f", &smax);
				
				for(int i = 0; i <= cont; i++)
				{
					if(cad[i].salario >= smin && cad[i].salario <= smax)
					{
						nSal++;
					}	
				}
				
				for(;contTira != nSal;)
				{
					contTira++;
					
					for(int i = 0; i <= cont; i++)
					{
			
						if(cad[i].salario >= smin && cad[i].salario <= smax)
						{
							posi = i;
							
							if(cad[i].cargo == '1')
								totAna = totAna - cad[i].salario;
							if(cad[i].cargo == '2')
								totProg = totProg - cad[i].salario;
							if(cad[i].cargo == '3')
								totDig = totDig - cad[i].salario;
							
							break;
						}							
					}
					
					for(int i = posi; i <= cont; i++)
					{
							cad[i] = cad[i + 1];	
					}
					
					cont--;	
				}
			
				printf("\n");
				system("pause");
				break;
			}
			
			case '7': exit(1);	
		}
	}
}
