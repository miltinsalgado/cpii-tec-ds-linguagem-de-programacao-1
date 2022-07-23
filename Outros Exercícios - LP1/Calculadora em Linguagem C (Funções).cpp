#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>

//T�tulo: "Calculadora em Linguagem C com Fun��es", Autor: Milton Salgado Leandro-23 Turma-IN110, Professor: Cl�udio Passos.

//Fun��es
double Adicao (double parcela_1, double parcela_2)
{
	return parcela_1 + parcela_2;
}

double Subtracao (double minuendo, double subtraendo)
{
	return minuendo - subtraendo;
}

double Multiplicacao (double multiplicando, double multiplicador)
{
	return multiplicando * multiplicador;
}

double Divisao (double dividendo, double divisor )
{
	return dividendo / divisor;
}

double Potenciacao (double base, double expoente)
{
	return pow(base,expoente);
}

double Radiciacao (double radicando, double indice)
{
	return pow(radicando,1/indice);
}

//Programa
using namespace std;	
int main (void)
{
	setlocale (LC_ALL ,"");
			int opcmenu;
		int opcsubmenuaritmetica;
	double parcela_1;
	double parcela_2;
	double minuendo;
	double subtraendo; 
	double multiplicando; 
	double multiplicador;
	double dividendo;
	double divisor;
	double soma;
	double resto;
	double produto;
	double quociente; 
	double base;
	double potencia;
	double expoente;	
	double radicando;
	double indice;
	double raiz;
		int opcsubmenutermometria;
	double celsius;
	double fahrenheit;
	double kelvin;
		int opcsubmenutrigonometria;
	double angulo;
	double seno;
	double cosseno;
	double tangente;
	while (1)
	{
		do
		{
		Beep(650,1000);
		system("cls");
		printf("\t\t\t\t\t    {[(CALCULADORA EM LINGUAGEM C)]}\n");
		printf("\t    ----- MENU -----");
		printf("\n 0-{ENCERRAMENTO DA CALCULADORA} (X)");
		printf("\n 1-[OPERADORES MATEM�TICOS] (+|-|*|/|#|_|)");
		printf("\n 2-[CONVERSOR DE UNIDADES DE TEMPERATURA] (�C|�F| K)");
		printf("\n 3-[FUN��ES TRIGONOM�TRICAS] (SEN|COS|TAN)");
		printf("\n\nSelecione a op��o desejada:\t");
		scanf("%d", &opcmenu);
		}while((opcmenu<0) && (opcmenu>2));
		
		switch (opcmenu)
		{
			case 0:
				{
				system("cls");
				printf("\nVoc� selecionou a op��o {ENCERRAMENTO DA CALCULADORA}");
				printf("\n\a[AGUARDE] Encerrando calculadora\n");
				exit(1);
				}
			case 1:
				{
					system("cls");
					printf("\n Voc� selecionou a op��o [OPERADORES MATEM�TICOS] (+|-|*|/|#|_|)");
					printf("\n--- SUB-MENU DE OPERADORES ---");
					printf("\nSelecione a opera��o desejada:");
					printf("\n 1-[ADI��O] (+)");
					printf("\n 2-[SUBTRA��O] (-)");
					printf("\n 3-[MULTIPLICA��O] (*)");
					printf("\n 4-[DIVIS�O] (/)");
					printf("\n 5-[POTENCIA��O] (#)");
					printf("\n 6-[RADICIA��O] (_)");
					printf("\nOBSERVA��ES:\n");
					printf("\nOpera��o selecionada:\t");
					scanf("%d", &opcsubmenuaritmetica);
						if(opcsubmenuaritmetica==1)
							{
							system("cls");
							printf("\nVoc� selecionou a opera��o [ADI��O]");
							printf("\nDigite a primeira parcela:\t");
							scanf("%lf", &parcela_1);
							printf("\nDigite a segunda parcela:\t");
							scanf("%lf", &parcela_2);
							printf("\nOpera��o [ADI��O] com os n�meros (%lf) & (%lf) efetuada com sucesso", parcela_1, parcela_2);
							printf("\nSoma=(%lf)\n", Adicao(parcela_1, parcela_2));
							system("pause");
							break;
							}
						else if(opcsubmenuaritmetica==2)
							{
							system("cls");
							printf("\nVoc� selecionou a opera��o [SUBTRA��O]");
							printf("\nDigite o minuendo:\t");
							scanf("%lf", &minuendo);
							printf("\nDigite o subtraendo:\t");
							scanf("%lf", &subtraendo);
							printf("\nOpera��o [SUBTRA��O] com os n�meros (%lf) & (%lf) efetuada com sucesso", minuendo, subtraendo);
							printf("\nResto=(%lf)\n", Subtracao(minuendo, subtraendo));
							system("pause");
							break;
							}
						else if(opcsubmenuaritmetica==3)
							{
							system("cls");
							printf("\nVoc� selecionou a opera��o [MULTIPLICA��O]");
							printf("\nDigite o multiplicando:\t");
							scanf("%lf", &multiplicando);
							printf("\nDigite o multiplicador:\t");
							scanf("%lf", &multiplicador);
							printf("\nOpera��o [MULTIPLICA��O] com os n�meros (%lf) & (%lf) efetuada com sucesso", multiplicando, multiplicador);
							printf("\nProduto=(%lf)\n", Multiplicacao(multiplicando, multiplicador));
							system("pause");
							break;
							}
						else if(opcsubmenuaritmetica==4)
							{
							system("cls");
							printf("\nVoc� selecionou a opera��o [DIVIS�O]");
							printf("\nDigite o dividendo:\t");
							scanf("%lf", &dividendo);
							printf("\nDigite o divisor:\t");
							scanf("%lf", &divisor);
							printf("\nOpera��o [DIVIS�O] com os n�meros (%lf) & (%lf) efetuada com sucesso", dividendo, divisor);
							printf("\nQuociente=(%lf)\n", Divisao(dividendo, divisor));
							system("pause");
							break;
							}
						else if(opcsubmenuaritmetica==5)
							{	
							system("cls");
							printf("\nVoc� selecionou a opera��o [POTENCIA��O]");
							printf("\nDigite a base:\t");
							scanf("%lf", &base);
							printf("\nDigite o expoente:\t");
							scanf("%lf", &expoente);
							printf("\nOpera��o [POTENCIA��O] com o n�mero (%lf) efetuada com sucesso", base);
							printf("\nPot�ncia de Base (%lf) com Expoente (%lf) = (%lf)\n", base, expoente, Potenciacao(base,expoente));
							system("pause");
							break;
							}
						if(opcsubmenuaritmetica==6)
							{
							system("cls");
							printf("\nVoc� selecionou a opera��o [RADICIA��O]");
							printf("\nDigite o radicando:\t");
							scanf("%lf", &radicando);
							printf("\nDigite o �ndice:\t");
							scanf("%lf", &indice);
							printf("\nOpera��o [RADICIA��O] com o n�mero (%lf) efetuada com sucesso", radicando);
							printf("\nRaiz de Radicando (%lf) com �ndice (%lf) = (%lf)\n", radicando, indice, Radiciacao(radicando,indice));
							system("pause");
							break;
							}
						else
							{
							system("cls");
							printf("\n\a[ERRO] Op��o digitada n�o presente no Sub-Menu, por favor abra o Sub-Menu novamente\n");
							system("pause");
							break;
							}		
				}
				case 2:
					{
						system("cls");
						printf("\nVoc� selecionou a op��o [CONVERSOR DE UNIDADES DE TEMPERATURA] (�C|�F| K)");
						printf("\n--- SUB-MENU DE UNIDADES T�RMICAS ---");
						printf("\nSelecione a unidade t�rmica a ser convertida:");
						printf("\n 1-Graus Celsius (�C)");
						printf("\n 2-Graus Fahrenheit (�F)");
						printf("\n 3-Kelvin (K)\n");
						printf("\nOBSERVA��ES:\n");
						printf("\nMenor temperatura do universo em Graus Celsius (�C), levando em considera��o os c�lculos de grandes f�sicos da termometria = -273,15�C");
						printf("\nMenor(es) temperatura(s) do universo em Graus Fahrenheit (�F), levando em considera��o os c�lculos de grandes f�sicos da termometria = -459,4�F ~ -459,67�F");
						printf("\nMenor temperatura do universo em Kelvin (K), levando em considera��o os c�lculos de grandes f�sicos da termometria = 0 K\n");
						printf("\nUnidade T�rmica selecionada:\t");
						scanf("%d", &opcsubmenutermometria);
							if (opcsubmenutermometria==1)
							{
							system("cls");
							printf("\nVoc� selecionou a unidade t�rmica Graus Celsius (�C)");
							printf("\nDigite a temperatura em Graus Celsius a ser convertida:\t");
							scanf("%lf", &celsius);
							fahrenheit=(1.8*celsius)+32;
							kelvin=celsius+273.15;		
							if ((fahrenheit<-459.67)||(kelvin<0)||(celsius<-273.15))
							{
								printf("\nTemperatura calculada � menor que a menor temperatura poss�vel do universo:\n");
								printf("\nMenor temperatura do universo em Graus Celsius (�C), levando em considera��o os c�lculos de grandes f�sicos da termometria = -273,15�C");
								printf("\nMenor(es) temperatura(s) do universo em Graus Fahrenheit (�F), levando em considera��o os c�lculos de grandes f�sicos da termometria = -459,4�F ~ -459,67�F");
								printf("\nMenor temperatura do universo em Kelvin (K), levando em considera��o os c�lculos de grandes f�sicos da termometria = 0 K");
							}
							else
							printf("\nA temperatura digitada em Graus Celsius (%lf�C) equivale a (%lf�F) Graus Fahrenheit e a (%lf K) Kelvin\n", celsius, fahrenheit, kelvin);
							system ("pause");
							break;
							}
							else if (opcsubmenutermometria==2)
							{
							system("cls");
							printf("\nVoc� selecionou a unidade t�rmica Graus Fahrenheit (�F)");
							printf("\nDigite a temperatura em Graus Fahrenheit a ser convertida:\t");
							scanf("%lf", &fahrenheit);
							celsius=((5*fahrenheit)-160)/9;
							kelvin=(0.6*fahrenheit)+255;
							if ((fahrenheit<-459.67)||(kelvin<0)||(celsius<-273.15))					
							{
							printf("\nTemperatura calculada � menor que a menor temperatura poss�vel do universo:\n");
							printf("\nMenor temperatura do universo em Graus Celsius (�C), levando em considera��o os c�lculos de grandes f�sicos da termometria = -273,15�C");
							printf("\nMenor(es) temperatura(s) do universo em Graus Fahrenheit (�F), levando em considera��o os c�lculos de grandes f�sicos da termometria = -459,4�F ~ -459,67�F");
							printf("\nMenor temperatura do universo em Kelvin (K), levando em considera��o os c�lculos de grandes f�sicos da termometria = 0 K");
							}
							else
							printf("\nA temperatura digitada em Graus Fahrenheit (%lf�F) equivale a (%lf�C) Graus Celsius e a (%lf K) Kelvin\n", fahrenheit, celsius, kelvin);
							system ("pause");
							break;
							}
							else if (opcsubmenutermometria==3)
							{
							system("cls");
							printf("\nVoc� selecionou a unidade t�rmica Kelvin (K)");
							printf("\nDigite a temperatura em Kelvin a ser convertida:\t");
							scanf("%lf", &kelvin);
							celsius=kelvin-273.15;
							fahrenheit=(1.8*kelvin)-459.4;
							if ((fahrenheit<-459.67)||(kelvin<0)||(celsius<-273.15))					
							{
							printf("\nTemperatura calculada � menor que a menor temperatura poss�vel do universo:\n");
							printf("\nMenor temperatura do universo em Graus Celsius (�C), levando em considera��o os c�lculos de grandes f�sicos da termometria = -273,15�C");
							printf("\nMenor(es) temperatura(s) do universo em Graus Fahrenheit (�F), levando em considera��o os c�lculos de grandes f�sicos da termometria = -459,4�F ~ -459,67�F");
							printf("\nMenor temperatura do universo em Kelvin (K), levando em considera��o os c�lculos de grandes f�sicos da termometria = 0 K");
							}
							else
							printf("\nA temperatura digitada em Kelvin (%lf K) equivale a (%lf�C) Graus Celsius e a (%lf�F) Fahrenheit\n", kelvin, celsius, fahrenheit );
							system ("pause");
							break;
							}
							else
							{
							system("cls");
							printf("\n\a[ERRO] Op��o digitada n�o presente no Sub-Menu, por favor abra o Sub-Menu novamente\n");
							system("pause");
							break;
							}
					}
				case 3:
				{
						system("cls");
						printf("\n Voc� selecionou a op��o [FUN��ES TRIGONOM�TRICAS] (SEN|COS|TAN)");
						printf("\n--- SUB-MENU DE FUN��ES ---");
						printf("\nSelecione a opera��o desejada:");
						printf("\n 1-[SENO] (SEN)");
						printf("\n 2-[COSSENO] (COS)");
						printf("\n 3-[TANGENTE] (TAN)\n");
						printf("\nFun��o selecionada:\t");
						scanf("%d", &opcsubmenutrigonometria);
							if(opcsubmenutrigonometria==1)
							{
									system("cls");
									printf("\nVoc� selecionou a fun��o trigonom�trica Seno");
									printf("\nDigite o �ngulo cujo seno ser� calculado:\t");
									scanf("%lf", &angulo);
									seno=sin(angulo);
									printf("\nSeno do �ngulo [%lf] calculado com sucesso", angulo);
									printf("\nSeno de %lf = %lf\n", angulo, seno);
									system("pause");
									break;									
							}
							else if(opcsubmenutrigonometria==2)
							{
									system("cls");
									printf("\nVoc� selecionou a fun��o trigonom�trica Cosseno");
									printf("\nDigite o �ngulo cujo cosseno ser� calculado:\t");
									scanf("%lf", &angulo);
									cosseno=cos(angulo);
									printf("\nSeno do �ngulo [%lf] calculado com sucesso", angulo);
									printf("\nSeno de %lf = %lf\n", angulo, cosseno);
									system("pause");
									break;									
							}
							else if(opcsubmenutrigonometria==3)
							{
									system("cls");
									printf("\nVoc� selecionou a fun��o trigonom�trica Tangente");
									printf("\nDigite o �ngulo cua tangente ser� calculada:\t");
									scanf("%lf", &angulo);
									tangente=tan(angulo);
									printf("\nSeno do �ngulo [%lf] calculado com sucesso", angulo);
									printf("\nSeno de %lf = %lf\n", angulo, tangente);
									system("pause");
									break;
							}
							else
							{
									system("cls");
									printf("\n\a[ERRO] Op��o digitada n�o presente no Sub-Menu, por favor abra o Sub-Menu novamente\n");
									system("pause");
									break;
							}		
				}			
			default:
			{			
			system("cls");
			printf("\n\a[ERRO] Op��o digitada n�o presente no Menu, por favor abra o Menu novamente\n");
			system("pause");
			break;
			}
		break;
		}
		}
		
}
