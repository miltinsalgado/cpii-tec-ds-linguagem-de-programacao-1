#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

struct TFunc{
	char nome[50];
	char tel[15];
	float sal;
};

	FILE *arq;
	struct TFunc func, aux;

struct TFunc buscarNome(char* st)
{
	arq = fopen("funcionarios.dat", "r"); // vou abrir esse arquivo. se ele não existir, será criado (r faz isso)
	while(!feof(arq)) // enquanto não for o fim do arquivo...
	{
		fread(&func, sizeof(struct TFunc), 1, arq); //fread lê blocos de dados
		if (strcmp(func.nome, st) == 0) // se o nome do funcionario for igual a string que eu dei para consulta..
		{
			fclose(arq); // eu fecho o arquivo
			return func; // e retorno o struct na posição que eu achei a concordância
		}
	}
	
	fclose(arq); //fechei o arquivo
	strcpy(func.nome, "Não cadastrado"); //caso, em todo o arquivo, não haja concordância entre nome busca e nome existente,
										 // ele coloca "não cadastrado" no nome do funcionário
	
	return func; // e retorna a struct
}

main()
{
		setlocale(LC_ALL, "portuguese");
	char opc, nome[50];
	
	while(1)
	{
		system("cls");
		printf("\n 1 - Inserir");
		printf("\n 2 - Listar");
		printf("\n 3 - Consultar");
		printf("\n 4 - Consultar o maior salário");
		printf("\n 5 - Sair \n");
		printf("\n Opção ");
		opc = getche(); //scanf("%d", &opc);
		
		switch(opc)
		{
			case '5': exit(1);
			case '1':{
				system("cls");
				fflush(stdin);
				printf("\n Digite o nome->");
				scanf("%s", &func.nome);
				fflush(stdin);
				printf("\n Digite o telefone->");
				scanf("%s", &func.tel);
				printf("\n Digite o salário->");
				scanf("%f", &func.sal);
				arq=fopen("funcionarios.dat", "a+");
				fwrite(&func, sizeof(struct TFunc), 1, arq); //escrevo um bloco de dados no arquivo com os negocios que estão na struct
				fclose(arq);
				break;
			}
			
			case '2':{
				system("cls");
				arq = fopen("funcionarios.dat", "r"); //vou abrir esse arquivo. se ele não existir, será criado (r faz isso)
				while(!feof(arq)) // enquanto não for o fim do arquivo...
				{
					fread(&func, sizeof(struct TFunc), 1, arq); // ler um bloco de dados do arquivo
					if (!feof(arq)) printf("%s - %s - %f\n", func.nome, func.tel, func.sal); //enquanto não for o fim do arquivo, eu printo isso aqui -> só sera
																							 //	printado se o fread estive lendo os negócios direitinho
				}
				fclose(arq); //fechei o arquivo
				
				system("pause");
				break;
				break;
			}
			
			case '3':{
				system("cls");
				printf("\n Digite o nome ");
				scanf("%s", &nome);
				printf("\n");
				aux=buscarNome(nome); //aux é uma copia da struct de cadastros
				if(strcmp(aux.nome, "Não cadastrado") == 0)
					printf("\n Nome não cadastrado!!!");
				else
					printf("%s - %f\n", aux.tel, aux.sal);
				system("pause");
				break;
			}
		}
	}
}
