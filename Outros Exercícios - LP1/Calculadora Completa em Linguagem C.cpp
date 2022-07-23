#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
#define Pi 3.14 //Definindo valor aproximado de Pi como aproximadamente 3.14

//T�tulo: "Calculadora em Linguagem C sem Fun��es", Autor: Milton Salgado Leandro-23 Turma-IN110, Professor: Cl�udio Passos.
	
int main ()
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
		int opcsubmenupoligonal;
		int opcsubmenucalculadora;
	double media_1cert;
	double media_2cert;
	double media_3cert;
	double media_anual;
	double nota_PFV;
	while (1)
	{
		do
		{
		Beep(650,1000);
		system("cls");
		printf("\t\t\t\t\t    {[(CALCULADORA EM LINGUAGEM C)]}\n");
		system("color 1");
		printf("\t    ----- MENU -----");
		printf("\n 0-{ENCERRAMENTO DA CALCULADORA} (X)");
		printf("\n 1-[OPERADORES MATEM�TICOS] (+|-|*|/|#|_|)");
		printf("\n 2-[CONVERSOR DE UNIDADES DE TEMPERATURA] (�C|�F| K)");
		printf("\n 3-[FUN��ES TRIGONOM�TRICAS] (SEN|COS|TAN)");
		printf("\n 4-[�REAS E VOLUMES GEOM�TRICOS] (POL�GONOS)");
		printf("\n 5-[CALCULADORA DE NOTAS E M�DIAS] (CPII)");
		printf("\n\nSelecione a op��o desejada:\t");
		scanf("%d", &opcmenu);
		}while((opcmenu<0) && (opcmenu>2));
		
		switch (opcmenu)
		{
			case 0:
				{
				system("cls");
				system("color 4");
				printf("\nVoc� selecionou a op��o {ENCERRAMENTO DA CALCULADORA}");
				printf("\n\a[AGUARDE] Encerrando calculadora\n");
				exit(1);
				}
			case 1:
				{
					system("cls");
					system("color 2");
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
							soma=parcela_1+parcela_2;
							printf("\nOpera��o [ADI��O] com os n�meros (%lf) & (%lf) efetuada com sucesso", parcela_1, parcela_2);
							printf("\nSoma=(%lf)\n", soma);
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
							resto=minuendo-subtraendo;
							printf("\nOpera��o [SUBTRA��O] com os n�meros (%lf) & (%lf) efetuada com sucesso", minuendo, subtraendo);
							printf("\nResto=(%lf)\n", resto);
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
							produto=multiplicando*multiplicador;
							printf("\nOpera��o [MULTIPLICA��O] com os n�meros (%lf) & (%lf) efetuada com sucesso", multiplicando, multiplicador);
							printf("\nProduto=(%lf)\n", produto);
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
							quociente=dividendo/divisor;
							printf("\nOpera��o [DIVIS�O] com os n�meros (%lf) & (%lf) efetuada com sucesso", dividendo, divisor);
							printf("\nQuociente=(%lf)\n", quociente);
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
							potencia=pow(base,expoente);
							printf("\nOpera��o [POTENCIA��O] com o n�mero (%lf) efetuada com sucesso", base);
							printf("\nPot�ncia de Base (%lf) com Expoente (%lf) = (%lf)\n", base, expoente, potencia);
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
							raiz=pow(radicando, 1/indice);
							printf("\nOpera��o [RADICIA��O] com o n�mero (%lf) efetuada com sucesso", radicando);
							printf("\nRaiz de Radicando (%lf) com �ndice (%lf) = (%lf)\n", radicando, indice, raiz);
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
						system("color 5");
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
						system("color 6");
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
									printf("\nDigite o �ngulo cuja tangente ser� calculada:\t");
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
				case 4:
				{
					system("cls");
					system("color F");
					printf("\n Voc� selecionou a op��o [�REAS E VOLUMES GEOM�TRICOS] (POL�GONOS)");
					printf("\n--- SUB-MENU DE POL�GONOS ---");
					printf("\nSelecione o pol�gono desejado:");
					printf("\n 1-[QUADRADO]");
					printf("\n 2-[RET�NGULO]");
					printf("\n 3-[C�RCULO]\n");
					printf("\nPol�gono selecionado:\t");
					scanf("%d", &opcsubmenupoligonal);
							if(opcsubmenupoligonal==1)
							{
								system("cls");
									printf("\nVoc� selecionou o pol�gono Quadrado");
									printf("\nDigite qual c�culo ser� realizado:\t");
									printf("\n1-�rea de um Quadrado");
									printf("\n2-Per�metro de um Quadrado");
									printf("\n3-Diagonal de um Quadrado");
									printf("\nC�lculo selecionado:\t");
									system("pause");
									break;
							}
							else if(opcsubmenupoligonal==2)
							{
								system("cls");
									printf("\nVoc� selecionou o pol�gono Ret�ngulo");
									printf("\nDigite qual c�culo ser� realizado:\t");
									printf("\n1-�rea de um Ret�ngulo");
									printf("\n2-Per�metro de um Ret�ngulo");
									printf("\n3-Diagonal de um Ret�ngulo");
									printf("\nC�lculo selecionado:\t");
									system("pause");
									break;
							}
							else if(opcsubmenupoligonal==3)
							{
								system("cls");
									printf("\nVoc� selecionou o pol�gono C�rculo");
									printf("\nDigite qual c�culo ser� realizado:\t");
									printf("\n1-�rea de um C�rculo");
									printf("\n2-Comprimento da Circunfer�ncia de um C�rculo");
									printf("\n3-Raio de um C�rculo");
									printf("\n4-Di�metro de um C�rculo");
									printf("\nC�lculo selecionado:\t");
									system("pause");
									break;
							}
				}
				case 5:
				{
					system("cls");
					system("color 3");
					printf("\n Voc� selecionou a op��o [CALCULADORA DE NOTAS E M�DIAS] (CPII)");
					printf("\n--- SUB-MENU DA CALCULADORA ---");
					printf("\n1-C�lculo de M�dia da Terceira Certifica��o");
					printf("\n2-C�lculo de M�dia Anual");
					printf("\n3-C�lculo de M�dia Final");
					printf("\nC�lculo selecionado:\t");
					scanf("%d", &opcsubmenucalculadora);
							if(opcsubmenucalculadora==1)
							{
								system("cls");
								printf("\nVoc� selecionou o C�lculo de M�dia da Terceira Certifica��o");
								printf("\nDigite a nota da Primeira certifica��o:\t");
								scanf("%lf", &media_1cert);
								printf("\nDigite a nota da Segunda certifica��o:\t");
								scanf("%lf", &media_2cert);
								media_3cert=(60-(3*media_1cert + 3*media_2cert))/4;
								if(media_3cert==0)
								{
									printf("\nNota da terceira certifica��o necess�ria: %.2lf pontos", media_3cert);
									printf("\n\aParab�ns! Voc� j� passou!\n");
								}
								else if (media_3cert>0)
								{
									printf("\nPara passar direto, voc� precisa tirar %.2lf pontos na terceira certifica��o", media_3cert);
									printf("\n\aBoa Sorte!\n");
								}
							}
							else if(opcsubmenucalculadora==2)
							{
								system("cls");
								printf("\nVoc� selecionou o C�lculo de M�dia Anual");
								printf("\nDigite a nota da Primeira certifica��o:\t");
								scanf("%lf", &media_1cert);
								printf("\nDigite a nota da Segunda certifica��o:\t");
								scanf("%lf", &media_2cert);
								printf("\nDigite a nota da Terceira certifica��o:\t");
								scanf("%lf", &media_3cert);
								media_anual=(3*media_1cert + 3*media_2cert + 4*media_3cert)/10;
								if(media_anual>=6)
								{
									nota_PFV=0;
									printf("\nNota da prova final necess�ria: %.2lf pontos", nota_PFV);
									printf("\n\aParab�ns! Voc� j� passou!\n");
								}
								else
								{
									nota_PFV=(25-3*media_anual)/2;
									printf("\nPara passar de ano, voc� precisa tirar %.2lf pontos na Prova Final", nota_PFV);
									printf("\n\aBoa Sorte!\n");
								}
							}
							else if(opcsubmenucalculadora==3)
							{
								//N�o completo
							}
					system("pause");
					break;
				}		
				}
									
			default:
			{			
			system("cls");
			system("color D");
			printf("\n\a[ERRO] Op��o digitada n�o presente no Menu, por favor abra o Menu novamente\n");
			system("pause");
			break;
			}
		break;
		}
		}
		
}
