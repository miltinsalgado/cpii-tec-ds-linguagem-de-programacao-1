#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

struct Tcadastro
{
	char nome[50];
	char email[50];
	char end[100];
	char tel[20];
	int NDia;
	int NMes;
	int NAno;
	char obs[50];
};

struct Tcadastro cad[100];

char* buscaPrim (char* st)
{
	char* aux = (char*) malloc (strlen(st) + 1);
	int cont = 0;
	int posi, achou;
	
	for(int i = 0; i < strlen(st); i++)
	{
		if(st[i] == ' ')
		{
			posi = i;
			achou++;
			break;
		}	
	}
	
	if(achou == 0)
		return st;
	
	for(int i = 0; i < posi; i++)
	{
		aux[cont] = st[i];
		cont++;
	}
	
	aux[cont] = '\0';
	return aux;
}

char* maiusculas (char* st)
{
	char* aux = (char*) malloc (strlen(st) + 1);
	
	for(int i = 0; i < strlen(st); i++)
	{
		aux[i] = toupper(st[i]);
	}
	
	return aux;	
}

int main()
{
		setlocale(LC_ALL, "portuguese");
	char op, primbusca[50], buscaNome[50], op2;
	int cont = -1, buscaMes, buscaDia;
	
	while(1)
	{
		system("cls");
		printf("\n- - - AGENDA - - -\n");
		printf("\nMenu:\n");
		printf("\n1 - Inserir");
		printf("\n2 - Busca por primeiro nome;");
		printf("\n3 - Busca por mês de aniversário;");
		printf("\n4 - Busca por dia e mês de aniversário;");
		printf("\n5 - Retirar cadastro;");
		printf("\n6 - Imprimir agenda;");
		printf("\n7 - Sair.");
		printf("\n\nOpção: ");
		op = getche();
		
		switch(op)
		{
			case '1':
			{
				system("cls");
				cont++;
				fflush(stdin);
				printf("\nDigite o nome:\n");
				gets(cad[cont].nome);
				printf("\nDigite o e-mail:\n");
				gets(cad[cont].email);
				printf("\nDigite o endereço:\n");
				gets(cad[cont].end);
				printf("\nDigite o telefone:\n");
				gets(cad[cont].tel);
				printf("\nDigite o dia do aniversário:\n");
				scanf("%d", &cad[cont].NDia);
				printf("\nDigite o mês do aniversário:\n");
				scanf("%d", &cad[cont].NMes);
				printf("\nDigite o ano de nascimento:\n");
				scanf("%d", &cad[cont].NAno);
				fflush(stdin);
				printf("\nDigite uma observação:\n");
				gets(cad[cont].obs);
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '2':
			{
				system("cls");
				
				printf("\nDigite o primeiro nome a ser buscado:\n");
				gets(primbusca);
				
				for(int i = 0; i <= cont; i++)
				{
					if(strcmp(buscaPrim(cad[i].nome), primbusca) == 0)
					{
						printf("\n%s - %s\n", cad[i].nome, cad[i].obs);
					}
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '3':
			{
				system("cls");
				
				printf("\nDigite o mês de aniversário que deseja buscar:\n");
				scanf("%d", &buscaMes);
				
				for(int i = 0; i <= cont; i++)
				{
					if(buscaMes == cad[i].NMes)
					{
						printf("\n%s - %s\n", cad[i].nome, cad[i].obs);
					}
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '4':
			{
				system("cls");
				
				printf("\nDigite o dia do aniversário que deseja buscar:\n");
				scanf("%d", &buscaDia);
				printf("\nDigite o mês do aniversário que deseja buscar:\n");
				scanf("%d", &buscaMes);
				
				for(int i = 0; i <= cont; i++)
				{
					if((buscaDia == cad[i].NDia) && (buscaMes == cad[i].NMes))
					{
						printf("\n%s - %s\n", cad[i].nome, cad[i].obs);
					}
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '5':
			{
				system("cls");
				
				printf("\nDigite o nome da pessoa que deseja retirar:\n");
				gets(buscaNome);
				
				for(int i = 0; i <= cont; i++)
				{
					if(strcmp(maiusculas(buscaNome), maiusculas(cad[i].nome)) == 0)
					{
						for(int k = i; i <= cont; i++)
						{
							cad[k] = cad[k + 1];
						}
						
						cont--;
					}
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '6':
			{
				system("cls");
				printf("\nEscolha uma opção:\n");
				printf("\na - Imprime nome, telefone e e-mail;");
				printf("\nb - Imprime todos os dados.\n");
				printf("\nOpção: ");
				op2 = toupper(getche());
				printf("\n");
				
				if(op2 == 'A')
				{
					for(int i = 0; i <= cont; i++)
					{
						printf("\n%s - %s - %s\n", cad[i].nome, cad[i].tel, cad[i].email);
					}
				}
				
				if(op2 == 'B')
				{
					for(int i = 0; i <= cont; i++)
					{
						printf("\n%s - %s - %s - %s - %d/%d/%d - %s\n", cad[i].nome, cad[i].email, cad[i].end, cad[i].tel, cad[i].NDia, cad[i].NMes, cad[i].NAno, cad[i].obs);
					}
				}
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '7': exit(1);
		}
		
	}
}
