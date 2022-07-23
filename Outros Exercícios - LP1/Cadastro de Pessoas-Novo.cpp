#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

char* Retira_Traco (char* phone)
{
	int posINI, posFINAL, j=0;
	char* aux;
	aux=(char*) malloc(strlen(phone)+1);
	
	for (int i=0;i<strlen(phone);i++)
	{
		if(phone[i]!='-') //(telefone[i]=='(')||(telefone[i]==' ')
		{
			posINI=i;  
			break;
		}
	}
	for (int i=strlen(phone);i>=0;i--)
	{
		if(phone[i]!='-')
		{
			posFINAL=i;
			break;
		}
	}
	for(int i=posINI;i<=posFINAL;i++)
	{
		aux[j]=phone[i];
		j++;
	}
	aux[j]='\0';
	return aux;
}

char* Retira_Espaco (char* phone)
{
	int posINI, posFINAL, j=0;
	char* aux;
	aux=(char*) malloc(strlen(phone)+1);
	
	for (int i=0;i<strlen(phone);i++)
	{
		if(phone[i]!=' ')
		{
			posINI=i;
			break;
		}
		else if(phone[i]==' ')
		{
			posINI=i+1;
			break;
		}
	}
	for (int i=strlen(phone);i>=0;i--)
	{
		if(phone[i]!=' ')
		{
			posFINAL=i;
			break;
		}
		else if (phone[i]==' ')
		{
			posINI=i+1;
			break;
		}
	}
	for(int i=posINI;i<=posFINAL;i++)
	{
		aux[j]=phone[i];
		j++;
	}
	aux[j]='\0';
	return aux;
}

char* ConversorMaiusculo (char*st) //Função(ConversorMaiusculo):Conversor para caracteres maiúsculos para a variável (busca)
{
 		int i=0;
 		while (i<strlen(st))
   			{
   				st[i]=toupper(st[i]);
 				i++;
   			} 
 		return st;
}

char* buscaSexo(char ch)
	{
		char* sexo;
		if (toupper(ch)=='M')
	    strcpy(sexo, "Masculino");	//Conversão precária: sexo="Masculino"; Utilisar a função manipuladora de strings "strcpy" (string_destino, string_origem)
		else if (toupper(ch)=='F')
		strcpy(sexo, "Feminino");	//Conversão precária: sexo="Feminino"; Utilisar a função manipuladora de strings "strcpy" (string_destino, string_origem)
		
		return sexo;
	}
	
int main()
{
	setlocale(LC_ALL,"");

    struct Info{
    	int idade;
    	char nome[60];
    	char sexo;
    	char telefone[20];
	};		
	struct Info Pessoa[200];	
	
	char opc;
	int cont=-1;
	char NomeAux[50], NomeRetira[50], Certeza[50];
	int aux=-1, aux2=-1;
	
	while(1)
	{
		fflush(stdin);
		system("cls");
		system("color 7");
		printf("\nMENU-Dados De Pessoas\n\n");
		printf("\n1-Cadastro de Pessoas\n");
		printf("\n2-Listagem de Pessoas Cadastradas\n");
		printf("\n3-Consulta de Pessoas Cadastradas no Sistema\n");
		printf("\n4-Remoção de Pessoas Cadastradas no Sistema\n");
		printf("\n5-Formatar Programa\n");
		printf("\n6-Encerramento do Sistema\n");
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
					fflush(stdin);
					fgets(Pessoa[cont].nome, sizeof(Pessoa[cont].nome), stdin);
					if (strcmp(Pessoa[cont].nome, "-1")==0)
					{
						for(int x=cont; x<=cont; x++)
							{
								Pessoa[x]=Pessoa[x+1];
							}
						cont--;
						break;
					}
					printf("\nDigite a idade:\t");
					fflush(stdin);
					scanf("%d", &Pessoa[cont].idade);
					if (Pessoa[cont].idade==-1)
					{
						for(int x=cont; x<=cont; x++)
							{
								Pessoa[x]=Pessoa[x+1];
							}
						cont--;
						break;
					}
					
					for(int i=0;;i++)
				    {
					printf("\nDigite o teu sexo ('M' para Masculino & 'F' para Feminino):\t");
					fflush(stdin);
					scanf("%c", &Pessoa[cont].sexo);
					if ((Pessoa[cont].sexo=='-')||(Pessoa[cont].sexo=='1'))
					{
						for(int x=cont; x<=cont; x++)
							{
								Pessoa[x]=Pessoa[x+1];
							}
						cont--;
						aux=0;
						break;
					}
					if(toupper(Pessoa[cont].sexo)=='M'||toupper(Pessoa[cont].sexo)=='F')
					break;
					else
					printf("\n[ERRO] Digite Apenas 'M' para Masculino ou 'F' para Feminino!!\n");
					}
					if(aux==0)
					break;
					printf("\nDigite o telefone:\t");
					fflush(stdin);
					fgets(Pessoa[cont].telefone, sizeof(Pessoa[cont].telefone), stdin);
					if (strcmp(Pessoa[cont].telefone, "-1")==0)
					{
						for(int x=cont; x<=cont; x++)
							{
								Pessoa[x]=Pessoa[x+1];
							}
						cont--;
						break;
					}
					
					printf("\n\n");
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
							if(Pessoa[i].sexo=='M' || Pessoa[i].sexo=='m')
							printf("\nNúmero de Cadastro:\t%d \nNome:\t%s \nIdade:\t%d Anos \nSexo: Masculino \nTelefone:\t%s\n", i+1, ConversorMaiusculo(Pessoa[i].nome), Pessoa[i].idade, Pessoa[i].telefone);
							else if(Pessoa[i].sexo=='F' || Pessoa[i].sexo=='f')
							printf("\nNúmero de Cadastro:\t%d \nNome:\t%s \nIdade:\t%d Anos \nSexo: Feminino \nTelefone:\t%s\n", i+1, ConversorMaiusculo(Pessoa[i].nome), Pessoa[i].idade, Pessoa[i].telefone);
					}
					
					printf("\n\n");
					system("pause");
					break;
				}
			case '3':
				{
					system("cls");
					fflush(stdin);
					system("color C");
					Beep(500, 500);
					
					printf("\nConsulta de Pessoas Cadastradas:\n");
					
					printf("\nDigite o nome a ser consultado:\t");
					fflush(stdin);
					fgets(NomeAux, sizeof(NomeAux), stdin);
					if (strcmp(NomeAux, "-1")==0)
					break;
					
					for(int i=0; i<=cont; i++)
					{
						if(strcmp(ConversorMaiusculo(Pessoa[i].nome),ConversorMaiusculo(NomeAux))==0)	
						{
							printf("\nInformações de %s\n\nNúmero de Telefone:\t%s \nIdade:\t%d Anos \nSexo:\t%s\n", ConversorMaiusculo(Pessoa[i].nome), Pessoa[i].telefone, Pessoa[i].idade, buscaSexo(Pessoa[i].sexo));
							system("pause");	
						}
					}

					printf("\n\n");
					break;
				}
			case '4':
				{
					system("cls");
					fflush(stdin);
					system("color D");
					Beep(500, 500);
					
					printf("Remoção de Pessoas Cadastradas no Sistema\n");
					
					printf("\nDigite o nome da pessoa cujos dados serão retirados do sistema:\t");
					fflush(stdin);
					fgets(NomeRetira, sizeof(NomeRetira), stdin);
					if (strcmp(NomeRetira, "-1")==0)
					break;
					
					for(int j=0; j<=cont; j++)
					{
						if(strcmp(ConversorMaiusculo(Pessoa[j].nome),ConversorMaiusculo(NomeRetira))==0)
						{
							for(int x=j; x<cont; x++)
							{
								Pessoa[x]=Pessoa[x+1];
							}
						}
						cont--;
						break;
					}
					
					printf("\n\n");
					system("pause");
					break;
				}
				case '5':
				{
					system("cls");
					system("color F");
					Beep(500, 500);
					
				    printf("\nTem certeza de que deseja apagar todas as informações do programa?:\t");
					scanf("%s",&Certeza);
					
						if(strcmp(ConversorMaiusculo(Certeza),"SIM")==0)
						{
					    cont=-1;
					    aux2=0;
						}
                    if(aux==0)
                    {
                    	printf("\nInformações deletadas com sucesso!");
					}
					printf("\n\n");
                    system("pause");
				    break;
				}
		    case '6':
				{
					system("cls");
					fflush(stdin);
					system("color E");
					Beep(500, 500);
					
					printf("\nEncerramento do Sistema\n");
					
					printf("\n\n\a[AGUARDE] Encerrando programa");
					exit(1);
					system("pause");
					break;	
				}
		}
	}
}
