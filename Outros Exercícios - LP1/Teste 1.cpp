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
	
	struct info{
		char nome[50];
		int tipo;
		char cpf[20];
		float salario;
	};
	struct info emp[100];
	
	int opc, cont=-1, achou;
	char busca_cpf[20];	
	float total1=0, total2=0, total3=0, valormin, valormax;
	
	while(1){
		system("cls");
		
		printf("\t\t\t\t\tTESTE");
		printf("\n\t\t\t\t\tINFORMAÇÕES DE FUNCIONÁRIOS");
		printf("\n\t\t|MENU|");
		printf("\n---------------------------------------");
		printf("\n1-Inserir");
		printf("\n2-Listar Todos");
		printf("\n3-Listar por cargo");
		printf("\n4-Buscar pelo CPF");
		printf("\n5-Remover Funcionário");
		printf("\n6-Remover por Faixa Salarial");
		printf("\n7-Sair");
		printf("\nOpção selecionada:\t");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 7:{
				system("cls");
				printf("\nOpção [7-Sair] selecionada");
				printf("\n\a[AGUARDE], encerrando programa");
				system("pause");
				exit(1);
			}
			case 1:{
				system("cls");
				cont++;
				printf("\nOpção [1-Inserir] selecionada\n");
				printf("\nDigite seu nome:\t");
				fflush(stdin);
				gets(emp[cont].nome);
				printf("\nDigite o CPF:\t");
				fflush(stdin);
				scanf("%s", & emp[cont].cpf);
				printf("\nDigite seu cargo (1..:Analista|2..:Programador|3..:Digitador):\t");
				fflush(stdin);
				scanf("%d", &emp[cont].tipo);
				printf("\nDigite seu salário em R$:\t");
				fflush(stdin);
				scanf("%f", &emp[cont].salario);
				system("pause");
				break;
			}
			case 2:{
				system("cls");
				printf("\nOpção [2-Listar] selecionada");
				printf("\nFUNCIONÁRIOS CADASTRADOS\n");
				for(int i=0;i<=cont;i++){
					if(emp[i].tipo==1){
						printf("Funcionário:\t%s - CPF:\t%s - Cargo: Analista - Salário:R$%.4f\n", emp[i].nome, emp[i].cpf, emp[i].salario);
					}	
					else if(emp[i].tipo==2){
						printf("Funcionário:\t%s - CPF:\t%s - Cargo: Programador - Salário:R$%.4f\n", emp[i].nome, emp[i].cpf, emp[i].salario);
					}
					else if(emp[i].tipo==3){
						printf("Funcionário:\t%s - CPF:\t%s - Cargo: Digitador - Salário:R$%.4f\n", emp[i].nome, emp[i].cpf, emp[i].salario);
					}	
					//Para o cargo em terminatória:  emp[i].tipo==1?"Analista":emp[i].tipo==2?"Programador":emp[i].tipo==3?"Digitador";
				}
				
				system("pause");
				break;
			}
			case 3:{
				system("cls");
				printf("\nOpção [3-Listar Todos] selecionada");	
				printf("\nFUNCIONÁRIOS CADASTRADOS\n");

				printf("\nAnalistas:\n");
				total1=0;
				for(int i=0; i<=cont; i++){
					if(emp[i].tipo==1){
						printf("\nFuncionário: %s - Salário: %f\n", emp[i].nome, emp[i].salario);
						total1+=emp[i].salario;
					}
				}
				printf("\nTotal do salário dos Analistas:\t%f\n", total1);
				
				printf("\nProgramadores:");
				total2=0;
				for(int i=0; i<=cont; i++){
					if(emp[i].tipo==2){
						printf("\nFuncionário: %s - Salário: %f\n", emp[i].nome, emp[i].salario);
						total2+=emp[i].salario;
					}
				}
				printf("\nTotal do salário dos Programadores:\t%f\n", total2);
				
				printf("\nDigitadores:");
				total3=0;
				for(int i=0; i<=cont; i++){
					if(emp[i].tipo==3){
						printf("\nFuncionário: %s - Salário: %f\n", emp[i].nome, emp[i].salario);
						total3+=emp[i].salario;
					}
				}
				printf("\nTotal do salário dos Digitadores:\t%f\n", total3);
					
				system("pause");
				break;
				}
				
			case 4:{
				system("cls");
				printf("\nOpção [4-Buscar pelo CPF] selecionada");
				printf("\nDigite o CPF a ser buscado:\t");
				fflush(stdin);
				scanf("%s",&busca_cpf);
				achou=0;
				for(int i=0;i<=cont;i++){
					if(strcmp(busca_cpf, emp[i].cpf)==0){
						printf("\nFuncionário:\t%s\nSalário:R$%f\n", emp[i].nome, emp[i].salario);
						achou=1;
					}		
				}	
				if(achou==0){
						printf("\nCPF NÃO CADASTRADO NO SISTEMA");
						break;
					}
				system("pause");
				break;
			}
			case 5:{
				system("cls");
				printf("\nOpção [5-Remover Funcionário] selecionada");
				printf("\nDigite o CPF da pessoa a ser removida:\t");
				fflush(stdin);
				gets(busca_cpf);
				achou=0;
				for(int i=0;i<=cont;i++){
					if(strcmp(busca_cpf, emp[i].cpf)==0){
						achou=1;
							for(int x=i; x<cont; x++)
								emp[x]=emp[x+1];
						cont--;
						break;
					}
				}
				if(achou==0)
						printf("\nCPF NÃO CADASTRADO NO SISTEMA, NENHUMA PESSOA REMOVIDA\n");
				system("pause");
				break;
			}
			case 6:{
				system("cls");
				printf("\nOpção [6-Remover por Faixa Salarial] selecionada");
				printf("\nDigite o O VALOR INICIAL do salário:\t");
				fflush(stdin);
				scanf("%f", &valormin);
				printf("\nDigite o O VALOR FINAL do salário:\t");
				fflush(stdin);
				scanf("%f", &valormax);
				achou=0;
				for(int i=0;i<=cont;i++){
					cont--;
					if((emp[i].salario>=valormin) && (emp[i].salario<=valormax)){
						achou=1;
							for(int x=i ; x<=cont; x++)
							emp[x]=emp[x+i];		
					}
				}
				if(achou==0){
						printf("\nNENHUM FUNCIONÁRIO CADASTRADO COM O SALÁRIO ENTRE A FAIXA SELECIONADA, NENHUMA PESSOA REMOVIDA\n");
						system("pause");
						break;
					}
				system("pause");
				break;
			}
		}
	}
}
