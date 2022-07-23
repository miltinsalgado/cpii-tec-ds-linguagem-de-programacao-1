/*
	Faça um programa que cadastre nome, idade, sexo e telefone em um vetor de, no máximo, 200 elementos.

	O programa deverá ter o seguinte menu:

	1 - Inserir;
	2 - Listar;
	3 - Consultar;
	4 - Remover;
	5 - Sair.
	
	A opção "consultar" deverá pedir ao usuário o nome e o programa deverá escrever na tela o telefone, sexo e a idade.
	A opção "remover" deverá pedir ao usuário o nome e, então, remover as informações referentes ao nome digitado.
	
	Observação: utilize "struct".	
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

char* maiusculas (char* st)
{
	char* aux = (char*) malloc (strlen(st) + 1);
	
	for(int i = 0; i < strlen(st); i++)
	{
		aux[i] = toupper(st[i]);
	}
	
	return aux;
}

struct tCadastro
{
	char nome[50];
	int idade;
	char sexo;
	char tel[11];
};

struct tCadastro cad[200];

int main ()
{
		setlocale(LC_ALL, "portuguese");
	char opc, busca[50], buscaExc[50];
	int contP = -1
	;
	
	while(1)
	{
		system("cls");
		printf("\n- - - CADASTRO - - -\n");
		printf("\n1 - Inserir;");
		printf("\n2 - Listar;");
		printf("\n3 - Consultar;");
		printf("\n4 - Remover;");
		printf("\n5 - Sair.\n");
		printf("\nOPÇÃO: ");
		opc = getche();
		
		switch(opc)
		{
			case '5':
				{
					system("cls");
					printf("\n[SAINDO DO PROGRAMA]\n\n");
					system("pause");
					exit(1);
				}
			
			default:
				{
					system("cls");
					printf("\n[OPÇÃO INVÁLIDA]\n\n");
					system("pause");
					break;
				}
				
			case '1':
				{
					contP++;
					system("cls");
					fflush(stdin);
					printf("\nInsira o nome:\n");
					gets(cad[contP].nome);
					printf("\nInsira a idade:\n");
					scanf("%d", &cad[contP].idade);
					
					do
					{
						printf("\nInsira o sexo (F - feminino / M - masculino):\n");
						cad[contP].sexo = toupper(getche());
						
						if (cad[contP].sexo != 'F' && cad[contP].sexo != 'M')
						{
							printf("\n\n[ERRO] Sexo inválido.\n\n");
						}
						
					} while(cad[contP].sexo != 'F' && cad[contP].sexo != 'M');
					
					fflush(stdin);
					printf("\n\nInsira o telefone:\n");
					gets(cad[contP].tel);
					
					
					printf("\n");
					system("pause");
					break;
				}
				
			case '2':
				{
					system("cls");
					for(int i = 0; i <= contP; i++)
					{
						printf("\n%s - %d - %c - %s.\n\n", maiusculas(cad[i].nome), cad[i].idade, cad[i].sexo, cad[i].tel);
					}
					
					system("pause");
					break;
				}
				
			case '3':
				{
					system("cls");
					printf("\nDigite o nome a ser consultado:\n");
					scanf("%[A-Z a-z]s", &busca);
					
					for(int i = 0; i <= contP; i++)
					{
						if (strcmp(maiusculas(busca), maiusculas(cad[i].nome)) == 0)
						{
							printf("\n%s - %d - %c - %s.\n\n", maiusculas(cad[i].nome), cad[i].idade, cad[i].sexo, cad[i].tel);
							break;
						}
						
						else
						{
							printf("\n[ERRO] Nome não anteriormente cadastrado.\n\n");
							break;
						}
					}
					
					system("pause");
					break;
				}
				
			case '4':
				{
					system("cls");
					fflush(stdin);
					printf("\nDigite o nome a ser excluído dos cadastros:\n");
					scanf("%[A-Z a-z]s", &buscaExc);
					
					for(int i = 0; i <= contP; i++)
					{
						if (strcmp(maiusculas(buscaExc), maiusculas(cad[i].nome)) == 0)
						{
							strcpy(cad[i].nome, cad[i + 1].nome);
							cad[i].idade = cad[i + 1].idade;
							cad[i].sexo = cad[i + 1]. sexo;
							strcpy(cad[i].nome, cad[i + 1].nome);
							
							printf("\nRegistro excluído!\n\n");
							
							system("pause");
							break;
						}
						
						else
						{
							printf("\n[ERRO] Nome não anteriormente cadastrado.\n\n");
							system("pause");
							break;
						}
					}
					
					break;
				}
		}
	
	}
	
	return 0;
}
