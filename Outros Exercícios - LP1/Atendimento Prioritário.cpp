#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

char* ConversorMaiusculo (char*st) //Função(ConversorMaiusculo): Conversor para caracteres maiúsculos para a variável (busca)
{
 		int i=0;
 		while (i<strlen(st))
   			{
   				st[i]=toupper(st[i]);
 				i++;
   			} 
 		return st;
}

int main()
{
	setlocale(LC_ALL,"");

    struct Info{
    	char nome[60];
    	char telefone[20];
    	int prioridade;
	};		
	struct Info Pessoa[200];	
	
	char opc;
	int cont=-1;
	char Certeza[50], Sera[50];
	int aux=0, aux2, achou;
	
	while(1)
	{
		fflush(stdin);
		system("cls");
		system("color 7");
		printf("\n | MENU - Dados De Pessoas |\n\n");
		printf("\n1-Cadastro de Pessoas\n");
		printf("\n2-Listagem de Pessoas Cadastradas\n");
		printf("\n3-Atendimento de Pessoas Cadastradas no Sistema\n");
		printf("\n4-Encerramento do Sistema\n");
		printf("\n\n(Ps: Para cancelar uma ação, digite '-1' em qualquer etapa do processo)\n");
		printf("\n\nOpção do menu selecionada:\t");
		opc=getche();
		switch (opc)
		{
			case '1':
				{
					system("cls");
					fflush(stdin);
					system("color A");
					Beep(500, 500);
					
					cont++;
					printf("\nCadastro de Pessoas\n");
					printf("\nDigite o nome:\t");
					scanf("%s",&Pessoa[cont].nome);
					if (strcmp(Pessoa[cont].nome, "-1")==0)
					{
						for(int x=cont; x<=cont; x++)
							{
								Pessoa[x]=Pessoa[x+1];
							}
						cont--;
						break;
					}
					
					printf("\nDigite o telefone: ");
					fflush(stdin);
					scanf("%s",&Pessoa[cont].telefone);
					if (strcmp(Pessoa[cont].telefone, "-1")==0)
					{
						for(int x=cont; x<=cont; x++)
							{
								Pessoa[x]=Pessoa[x+1];
							}
						cont--;
						break;
					}
					
					printf("\nAtendimento Prioritário?: ");
					scanf("%s",&Sera);
					if (strcmp(Sera, "-1")==0)
					{
						for(int x=cont; x<=cont; x++)
							{
								Pessoa[x]=Pessoa[x+1];
							}
						cont--;
						break;
					}
					if(strcmp(ConversorMaiusculo(Sera),"SIM")==0)
					{
					  Pessoa[cont].prioridade=1;	
					}
					else
					{
					  Pessoa[cont].prioridade=0;	
					}
					
					printf("\n");
					system("pause");
					break;
				}
			case '2':
				{
					system("cls");
					fflush(stdin);
					system("color B");
					Beep(500, 500);
					
					printf("\nListagem de Pessoas Cadastradas\n");
					
					for(int i=0; i<=cont; i++)
					{
							if(Pessoa[i].prioridade==1)
							{
							printf("\n%d) %s - %s | Atendimento Prioritário\n", i+1, Pessoa[i].nome, Pessoa[i].telefone);
					     	}
							else if(Pessoa[i].prioridade==0)
							{
							printf("\n%d) %s - %s | Não Prioritário\n", i+1, Pessoa[i].nome, Pessoa[i].telefone);
							}
					}
					
					printf("\n");
					system("pause");
					break;
				}
			case '3':
				{
					system("cls");
					aux2=0;
					fflush(stdin);
					system("color 7");
					Beep(500, 500);
					
					printf("Remoção de Pessoas Cadastradas no Sistema\n");
					
					printf("\nDeseja proceder com o atendimento?: ");
					scanf("%s",&Certeza);
					if (strcmp(ConversorMaiusculo(Certeza),"SIM")==0)
					{
				      if(aux==2)
				      {
				      	 for(int j=0; j<cont; j++)
				      	 {
				      	   if(Pessoa[j].prioridade==1)
				      	   achou=j;
				      	   aux=0;
				      	   aux2=1;
				      	   break;
						 }
						 for(int j=achou; j<=cont; j++)
					     {
						    for(int x=j; x<cont; x++)
						    {
						      Pessoa[x]=Pessoa[x+1];
						    }
						    cont--;
						    break;
					     }
					  }
					  if((aux<2)&&(aux2!=1))
				      {
				      	 for(int j=0; j<=cont; j++)
					     {
							for(int x=j; x<cont; x++)
							{
								Pessoa[x]=Pessoa[x+1];
							}
						  cont--;
						  aux++;
						  break;
					     }
					  }	
					}
					
					printf("\n");
					system("pause");
					break;
				}
		    case '4':
				{
					system("cls");
					fflush(stdin);
					system("color E");
					Beep(500, 500);
					
					printf("\nEncerramento do Sistema");
					
					printf("\n\n\a[AGUARDE] Encerrando programa\n");
					exit(1);
					system("pause");
					break;	
				}
		}
	}
}
