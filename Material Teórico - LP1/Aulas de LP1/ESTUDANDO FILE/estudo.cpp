/*
	Crie um programa que cadastre restaurantes.
	Ele deverá ter o seguinte menu:
	
	1 - Inserir (nome, bairro e tipo de culinária);
	2 - Listar todos;
	3 - Listar por bairro;
	4 - Listar por culinária;
	5 - Gerar arquivos por bairro;
	6 - Sair.
	
			OBS.: - os restaurantes devem ser cadastrados num arquivo "restaurantes.txt";
			      - na primeira opção, deverá ser perguntado no início se o usuário deseja limpar o cadastro;
			      - bairros válidos: Maré, Inhaúma, Bonsucesso e Ramos (deverão ser INT);
				  - na quarta opção, o usuário insere o tipo de culinária e o programa deverá buscar no arquivo.
				  - na quinta opção, o programa cria um arquivo diferente para cada bairro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
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

struct Tcad
{
	char nome[50];
	int bairro;
	char culinaria[20];
};

struct Tcad cad;
FILE* arq;

FILE* arqM;
FILE* arqI;
FILE* arqB;
FILE* arqR;

int main()
{
		setlocale(LC_ALL, "portuguese");
	char opc, op2, busca[20], st[100], ch;
	int achou, lin = 1;
	
	while(1)
	{
		system("cls");
		printf("\n1 - Inserir;");
		printf("\n2 - Listar todos;");
		printf("\n3 - Listar por bairro;");
		printf("\n4 - Listar por culinária;");
		printf("\n5 - Gerar arquivos por bairro;");
		printf("\n6 - Sair;\n");
		printf("\n7 - Ler arquivo do programa;");
		printf("\n8 - Ler arquivo do programa com pulo de linha.\n");
		printf("\nOpção: ");
		opc = getche();
		
		switch(opc)
		{
			case '1':{
				system("cls");
				fflush(stdin);
				printf("\nDeseja apagar os registros? (S/N)\n");
				op2 = toupper(getche());
				
				if(op2 == 'S')
				{
					arq = fopen("restaurantes.txt", "w+");
				}
				
				fclose(arq);
				
				printf("\n\nInsira o nome:\n");
				gets(cad.nome);
				do{
					printf("\nInsira o bairro (1 - Maré; 2 - Inhaúma; 3 - Bonsucesso; 4 - Ramos):\n");
					scanf("%d", &cad.bairro);
					
					if(cad.bairro > 4 || cad.bairro < 1)
					{
						printf("\n[ERRO] Resposta inválida. Digite novamente.\n");
					}
					
				}while(cad.bairro > 4 || cad.bairro < 1);
				
				fflush(stdin);
				
				printf("\nInsira o tipo de culinária:\n");
				gets(cad.culinaria);
				
				arq = fopen("restaurantes.txt", "a+");
				fwrite(&cad, sizeof(struct Tcad), 1, arq);
				fclose(arq);
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '2':{
				system("cls");
				
				arq = fopen("restaurantes.txt", "r");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq)) printf("\n%s - %d - %s", cad.nome, cad.bairro, cad.culinaria);
				}
				
				fclose(arq);
				
				printf("\n\n");
				system("pause");
				break;
			}
			
			case '3':{
				system("cls");
				achou = 0;
				
				printf("\nMARÉ\n\n");
				
				arq = fopen("restaurantes.txt", "r");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && cad.bairro == 1)
					{
						printf("%s - %s\n", cad.nome, cad.culinaria);
						achou++;
					}
				}
				
				if(achou == 0)
					printf("AINDA NENHUM CADASTRADO!\n");
				
				fclose(arq);
				achou = 0;
				
				printf("\n\nINHAÚMA\n\n");
				
				arq = fopen("restaurantes.txt", "r");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && cad.bairro == 2)
					{
						printf("%s - %s\n", cad.nome, cad.culinaria);
						achou++;
					}
				}
				
				if(achou == 0)
					printf("AINDA NENHUM CADASTRADO!\n");
				
				fclose(arq);
				achou = 0;
				
				printf("\n\nBONSUCESSO\n\n");
				
				arq = fopen("restaurantes.txt", "r");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && cad.bairro == 3)
					{
						printf("%s - %s\n", cad.nome, cad.culinaria);
						achou++;
					}
				}
				
				if(achou == 0)
					printf("AINDA NENHUM CADASTRADO!\n");
				
				fclose(arq);
				achou = 0;
				
				printf("\n\nRAMOS\n\n");
				
				arq = fopen("restaurantes.txt", "r");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && cad.bairro == 4)
					{
						printf("%s - %s\n", cad.nome, cad.culinaria);
						achou++;
					}
				}
				
				if(achou == 0)
					printf("AINDA NENHUM CADASTRADO!\n");
				
				fclose(arq);
				achou = 0;
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '4':{
				system("cls");
				fflush(stdin);
				achou = 0;
				printf("\nQue culinária deseja pesquisar?\n");
				gets(busca);
				
				arq = fopen("restaurantes.txt", "r");
				while(!feof(arq))
				{
					fread(&cad, sizeof(struct Tcad), 1, arq);
					if(!feof(arq) && strcmp(maiusculas(cad.culinaria), maiusculas(busca)) == 0)
					{
						printf("\n%s - %d", cad.nome, cad.bairro);
						achou++;
					}
				}
				if(achou == 0)
					printf("\nNenhum restaurante com essa culinária cadastrado!");
					
				fclose(arq);
				
				printf("\n\n");
				system("pause");
				break;
			}
			
			case '5':{
				
				arqM = fopen("mare.txt", "w+");
				if(cad.bairro == 1) fwrite(&cad, sizeof(struct Tcad), 1, arqM);
				fclose(arqM);
				
				arqI = fopen("inhauma.txt", "w+");
				if(cad.bairro == 2) fwrite(&cad, sizeof(struct Tcad), 1, arqI);
				fclose(arqI);
				
				arqB = fopen("bonsucesso.txt", "w+");
				if(cad.bairro == 3) fwrite(&cad, sizeof(struct Tcad), 1, arqB);
				fclose(arqB);
				
				arqR = fopen("ramos.txt", "w+");
				if(cad.bairro == 4) fwrite(&cad, sizeof(struct Tcad), 1, arqR);
				fclose(arqR);
			
				break;
			}
			
			case '6': exit(1);
			
			case '7':{
				system("cls");
				
				arq = fopen("estudo.cpp", "r");
				while(!feof(arq))
				{
					fgets(st, 100, arq);
					if(!feof(arq)) printf("%s", st);
				}
				
				fclose(arq);
				
				printf("\n");
				system("pause");
				break;
			}
			
			case '8':{
				system("cls");
				printf("%d", lin);
				
				arq = fopen("estudo.cpp", "r");
				while(!feof(arq))
				{
					ch = fgetc(arq);
					if(ch == '\n')
					{
						lin++;
						printf("%c", ch);
						printf("%d ", lin);
					}
					else
						printf("%c", ch);
				}
				
				printf("\n\n");
				system("pause");
				break;
			}
		}
	}
}
