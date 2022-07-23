#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>

struct TCad{
	char nome[50]; //string
	int idade;
	char sexo;
	char tel[15]; //(21)999998188
};

struct TCad cad[200];
int contCad = -1;

int buscaNome(char* nome)
{
	for(int i = 0; i <= contCad; i++)
		if(strcmp(cad[i].nome, nome) == 0)
			return i;
			
	return -1;
}

main()
{
	char opc;
	char nome[50];
	int achou, pos;
	
	while(1)
	{
		system("cls");
		printf("\n 1 - Inserir");
		printf("\n 2 - Listar");
		printf("\n 3 - Consultar");
		printf("\n 4 - Remover");
		printf("\n 5 - Remover todos");
		printf("\n 6 - Sair");
		printf("\n Opção:");
		opc = getche(); //scanf("%d, &opc);
		
		switch(opc)
		{
			case '1':{
				contCad++;
				system("cls");
				fflush(stdin);
				printf("\n Digite o nome ->");
				scanf("%s", &cad[contCad].nome);
				fflush(stdin);
				printf("\n Digite a idade ->");
				scanf("%d", &cad[contCad].idade);
				printf("\n Digite o sexo (M/F) ->");
				cad[contCad].sexo = toupper(getche());
				printf("\n Digite o telefone ->");
				scanf("%s", &cad[contCad].tel);
				break;	
			}
			
			case '2':{
				system("cls");
				if(contCad == -1)
					printf("Não existe nomes cadastrados!!!\n");
					
					for(int i = 0; i <= contCad; i++)
						printf("%s - %d - %c - %s\n", cad[i].nome, cad[i].idade, cad[i].sexo, cad[i].tel);
				
				system("pause");
				
				break;
			}
			
			case '3':{
				fflush(stdin);
				system("cls");
				printf("n Qual o nome a consultar ->");
				scanf("%s", &nome);
				int i = buscaNome(nome);
				
				if(i == -1)
					printf("\n Nome não encontrado!!!");
				else
					printf("\n %s - %d - %c", cad[i].tel, cad[i].idade, cad[i].sexo);
					
				system("pause");
				
				break;
			}
			
			case '4':{
				fflush(stdin);
				system("cls");
				printf("\n Qual o nome a remover ->");
				scanf("%s", &nome);
				
				for(int i = 0; i <= contCad; i++)
				{
					if(strcmp(cad[i].nome, nome) == 0)
					{
						pos = i;
						break;
					}
				}
				
				contCad--;
				for(int i = pos; i<= contCad; i++)
					cad[i] = cad[i + 1];
				
				break;
			}
			
			case '5':{
				contCad = -1;
				break;
			}
			
			case '6': exit(1);
		}
		
	}
}
