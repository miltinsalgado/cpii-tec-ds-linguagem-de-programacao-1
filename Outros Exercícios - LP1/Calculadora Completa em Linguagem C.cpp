#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
#define Pi 3.14 //Definindo valor aproximado de Pi como aproximadamente 3.14

//Título: "Calculadora em Linguagem C sem Funções", Autor: Milton Salgado Leandro-23 Turma-IN110, Professor: Cláudio Passos.
	
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
		printf("\n 1-[OPERADORES MATEMÁTICOS] (+|-|*|/|#|_|)");
		printf("\n 2-[CONVERSOR DE UNIDADES DE TEMPERATURA] (°C|°F| K)");
		printf("\n 3-[FUNÇÕES TRIGONOMÉTRICAS] (SEN|COS|TAN)");
		printf("\n 4-[ÁREAS E VOLUMES GEOMÉTRICOS] (POLÍGONOS)");
		printf("\n 5-[CALCULADORA DE NOTAS E MÉDIAS] (CPII)");
		printf("\n\nSelecione a opção desejada:\t");
		scanf("%d", &opcmenu);
		}while((opcmenu<0) && (opcmenu>2));
		
		switch (opcmenu)
		{
			case 0:
				{
				system("cls");
				system("color 4");
				printf("\nVocê selecionou a opção {ENCERRAMENTO DA CALCULADORA}");
				printf("\n\a[AGUARDE] Encerrando calculadora\n");
				exit(1);
				}
			case 1:
				{
					system("cls");
					system("color 2");
					printf("\n Você selecionou a opção [OPERADORES MATEMÁTICOS] (+|-|*|/|#|_|)");
					printf("\n--- SUB-MENU DE OPERADORES ---");
					printf("\nSelecione a operação desejada:");
					printf("\n 1-[ADIÇÃO] (+)");
					printf("\n 2-[SUBTRAÇÃO] (-)");
					printf("\n 3-[MULTIPLICAÇÃO] (*)");
					printf("\n 4-[DIVISÃO] (/)");
					printf("\n 5-[POTENCIAÇÃO] (#)");
					printf("\n 6-[RADICIAÇÃO] (_)");
					printf("\nOBSERVAÇÕES:\n");
					printf("\nOperação selecionada:\t");
					scanf("%d", &opcsubmenuaritmetica);
						if(opcsubmenuaritmetica==1)
							{
							system("cls");
							printf("\nVocê selecionou a operação [ADIÇÃO]");
							printf("\nDigite a primeira parcela:\t");
							scanf("%lf", &parcela_1);
							printf("\nDigite a segunda parcela:\t");
							scanf("%lf", &parcela_2);
							soma=parcela_1+parcela_2;
							printf("\nOperação [ADIÇÃO] com os números (%lf) & (%lf) efetuada com sucesso", parcela_1, parcela_2);
							printf("\nSoma=(%lf)\n", soma);
							system("pause");
							break;
							}
						else if(opcsubmenuaritmetica==2)
							{
							system("cls");
							printf("\nVocê selecionou a operação [SUBTRAÇÃO]");
							printf("\nDigite o minuendo:\t");
							scanf("%lf", &minuendo);
							printf("\nDigite o subtraendo:\t");
							scanf("%lf", &subtraendo);
							resto=minuendo-subtraendo;
							printf("\nOperação [SUBTRAÇÃO] com os números (%lf) & (%lf) efetuada com sucesso", minuendo, subtraendo);
							printf("\nResto=(%lf)\n", resto);
							system("pause");
							break;
							}
						else if(opcsubmenuaritmetica==3)
							{
							system("cls");
							printf("\nVocê selecionou a operação [MULTIPLICAÇÃO]");
							printf("\nDigite o multiplicando:\t");
							scanf("%lf", &multiplicando);
							printf("\nDigite o multiplicador:\t");
							scanf("%lf", &multiplicador);
							produto=multiplicando*multiplicador;
							printf("\nOperação [MULTIPLICAÇÃO] com os números (%lf) & (%lf) efetuada com sucesso", multiplicando, multiplicador);
							printf("\nProduto=(%lf)\n", produto);
							system("pause");
							break;
							}
						else if(opcsubmenuaritmetica==4)
							{
							system("cls");
							printf("\nVocê selecionou a operação [DIVISÃO]");
							printf("\nDigite o dividendo:\t");
							scanf("%lf", &dividendo);
							printf("\nDigite o divisor:\t");
							scanf("%lf", &divisor);
							quociente=dividendo/divisor;
							printf("\nOperação [DIVISÃO] com os números (%lf) & (%lf) efetuada com sucesso", dividendo, divisor);
							printf("\nQuociente=(%lf)\n", quociente);
							system("pause");
							break;
							}
						else if(opcsubmenuaritmetica==5)
							{	
							system("cls");
							printf("\nVocê selecionou a operação [POTENCIAÇÃO]");
							printf("\nDigite a base:\t");
							scanf("%lf", &base);
							printf("\nDigite o expoente:\t");
							scanf("%lf", &expoente);
							potencia=pow(base,expoente);
							printf("\nOperação [POTENCIAÇÃO] com o número (%lf) efetuada com sucesso", base);
							printf("\nPotência de Base (%lf) com Expoente (%lf) = (%lf)\n", base, expoente, potencia);
							system("pause");
							break;
							}
						if(opcsubmenuaritmetica==6)
							{
							system("cls");
							printf("\nVocê selecionou a operação [RADICIAÇÃO]");
							printf("\nDigite o radicando:\t");
							scanf("%lf", &radicando);
							printf("\nDigite o índice:\t");
							scanf("%lf", &indice);
							raiz=pow(radicando, 1/indice);
							printf("\nOperação [RADICIAÇÃO] com o número (%lf) efetuada com sucesso", radicando);
							printf("\nRaiz de Radicando (%lf) com Índice (%lf) = (%lf)\n", radicando, indice, raiz);
							system("pause");
							break;
							}
						else
							{
							system("cls");
							printf("\n\a[ERRO] Opção digitada não presente no Sub-Menu, por favor abra o Sub-Menu novamente\n");
							system("pause");
							break;
							}		
				}
				case 2:
					{
						system("cls");
						system("color 5");
						printf("\nVocê selecionou a opção [CONVERSOR DE UNIDADES DE TEMPERATURA] (°C|°F| K)");
						printf("\n--- SUB-MENU DE UNIDADES TÉRMICAS ---");
						printf("\nSelecione a unidade térmica a ser convertida:");
						printf("\n 1-Graus Celsius (°C)");
						printf("\n 2-Graus Fahrenheit (°F)");
						printf("\n 3-Kelvin (K)\n");
						printf("\nOBSERVAÇÕES:\n");
						printf("\nMenor temperatura do universo em Graus Celsius (°C), levando em consideração os cálculos de grandes físicos da termometria = -273,15°C");
						printf("\nMenor(es) temperatura(s) do universo em Graus Fahrenheit (°F), levando em consideração os cálculos de grandes físicos da termometria = -459,4°F ~ -459,67°F");
						printf("\nMenor temperatura do universo em Kelvin (K), levando em consideração os cálculos de grandes físicos da termometria = 0 K\n");
						printf("\nUnidade Térmica selecionada:\t");
						scanf("%d", &opcsubmenutermometria);
							if (opcsubmenutermometria==1)
							{
							system("cls");
							printf("\nVocê selecionou a unidade térmica Graus Celsius (°C)");
							printf("\nDigite a temperatura em Graus Celsius a ser convertida:\t");
							scanf("%lf", &celsius);
							fahrenheit=(1.8*celsius)+32;
							kelvin=celsius+273.15;		
							if ((fahrenheit<-459.67)||(kelvin<0)||(celsius<-273.15))
							{
								printf("\nTemperatura calculada é menor que a menor temperatura possível do universo:\n");
								printf("\nMenor temperatura do universo em Graus Celsius (°C), levando em consideração os cálculos de grandes físicos da termometria = -273,15°C");
								printf("\nMenor(es) temperatura(s) do universo em Graus Fahrenheit (°F), levando em consideração os cálculos de grandes físicos da termometria = -459,4°F ~ -459,67°F");
								printf("\nMenor temperatura do universo em Kelvin (K), levando em consideração os cálculos de grandes físicos da termometria = 0 K");
							}
							else
							printf("\nA temperatura digitada em Graus Celsius (%lf°C) equivale a (%lf°F) Graus Fahrenheit e a (%lf K) Kelvin\n", celsius, fahrenheit, kelvin);
							system ("pause");
							break;
							}
							else if (opcsubmenutermometria==2)
							{
							system("cls");
							printf("\nVocê selecionou a unidade térmica Graus Fahrenheit (°F)");
							printf("\nDigite a temperatura em Graus Fahrenheit a ser convertida:\t");
							scanf("%lf", &fahrenheit);
							celsius=((5*fahrenheit)-160)/9;
							kelvin=(0.6*fahrenheit)+255;
							if ((fahrenheit<-459.67)||(kelvin<0)||(celsius<-273.15))					
							{
							printf("\nTemperatura calculada é menor que a menor temperatura possível do universo:\n");
							printf("\nMenor temperatura do universo em Graus Celsius (°C), levando em consideração os cálculos de grandes físicos da termometria = -273,15°C");
							printf("\nMenor(es) temperatura(s) do universo em Graus Fahrenheit (°F), levando em consideração os cálculos de grandes físicos da termometria = -459,4°F ~ -459,67°F");
							printf("\nMenor temperatura do universo em Kelvin (K), levando em consideração os cálculos de grandes físicos da termometria = 0 K");
							}
							else
							printf("\nA temperatura digitada em Graus Fahrenheit (%lf°F) equivale a (%lf°C) Graus Celsius e a (%lf K) Kelvin\n", fahrenheit, celsius, kelvin);
							system ("pause");
							break;
							}
							else if (opcsubmenutermometria==3)
							{
							system("cls");
							printf("\nVocê selecionou a unidade térmica Kelvin (K)");
							printf("\nDigite a temperatura em Kelvin a ser convertida:\t");
							scanf("%lf", &kelvin);
							celsius=kelvin-273.15;
							fahrenheit=(1.8*kelvin)-459.4;
							if ((fahrenheit<-459.67)||(kelvin<0)||(celsius<-273.15))					
							{
							printf("\nTemperatura calculada é menor que a menor temperatura possível do universo:\n");
							printf("\nMenor temperatura do universo em Graus Celsius (°C), levando em consideração os cálculos de grandes físicos da termometria = -273,15°C");
							printf("\nMenor(es) temperatura(s) do universo em Graus Fahrenheit (°F), levando em consideração os cálculos de grandes físicos da termometria = -459,4°F ~ -459,67°F");
							printf("\nMenor temperatura do universo em Kelvin (K), levando em consideração os cálculos de grandes físicos da termometria = 0 K");
							}
							else
							printf("\nA temperatura digitada em Kelvin (%lf K) equivale a (%lf°C) Graus Celsius e a (%lf°F) Fahrenheit\n", kelvin, celsius, fahrenheit );
							system ("pause");
							break;
							}
							else
							{
							system("cls");
							printf("\n\a[ERRO] Opção digitada não presente no Sub-Menu, por favor abra o Sub-Menu novamente\n");
							system("pause");
							break;
							}
					}
				case 3:
				{
						system("cls");
						system("color 6");
						printf("\n Você selecionou a opção [FUNÇÕES TRIGONOMÉTRICAS] (SEN|COS|TAN)");
						printf("\n--- SUB-MENU DE FUNÇÕES ---");
						printf("\nSelecione a operação desejada:");
						printf("\n 1-[SENO] (SEN)");
						printf("\n 2-[COSSENO] (COS)");
						printf("\n 3-[TANGENTE] (TAN)\n");
						printf("\nFunção selecionada:\t");
						scanf("%d", &opcsubmenutrigonometria);
							if(opcsubmenutrigonometria==1)
							{
									system("cls");
									printf("\nVocê selecionou a função trigonométrica Seno");
									printf("\nDigite o ângulo cujo seno será calculado:\t");
									scanf("%lf", &angulo);
									seno=sin(angulo);
									printf("\nSeno do ângulo [%lf] calculado com sucesso", angulo);
									printf("\nSeno de %lf = %lf\n", angulo, seno);
									system("pause");
									break;
							}
							else if(opcsubmenutrigonometria==2)
							{
									system("cls");
									printf("\nVocê selecionou a função trigonométrica Cosseno");
									scanf("%lf", &angulo);
									cosseno=cos(angulo);
									printf("\nSeno do ângulo [%lf] calculado com sucesso", angulo);
									printf("\nSeno de %lf = %lf\n", angulo, cosseno);
									system("pause");
									break;									
							}
							else if(opcsubmenutrigonometria==3)
							{
									system("cls");
									printf("\nVocê selecionou a função trigonométrica Tangente");
									printf("\nDigite o ângulo cuja tangente será calculada:\t");
									scanf("%lf", &angulo);
									tangente=tan(angulo);
									printf("\nSeno do ângulo [%lf] calculado com sucesso", angulo);
									printf("\nSeno de %lf = %lf\n", angulo, tangente);
									system("pause");
									break;
							}
							else
							{
									system("cls");
									printf("\n\a[ERRO] Opção digitada não presente no Sub-Menu, por favor abra o Sub-Menu novamente\n");
									system("pause");
									break;
							}
				case 4:
				{
					system("cls");
					system("color F");
					printf("\n Você selecionou a opção [ÁREAS E VOLUMES GEOMÉTRICOS] (POLÍGONOS)");
					printf("\n--- SUB-MENU DE POLÍGONOS ---");
					printf("\nSelecione o polígono desejado:");
					printf("\n 1-[QUADRADO]");
					printf("\n 2-[RETÂNGULO]");
					printf("\n 3-[CÍRCULO]\n");
					printf("\nPolígono selecionado:\t");
					scanf("%d", &opcsubmenupoligonal);
							if(opcsubmenupoligonal==1)
							{
								system("cls");
									printf("\nVocê selecionou o polígono Quadrado");
									printf("\nDigite qual cáculo será realizado:\t");
									printf("\n1-Área de um Quadrado");
									printf("\n2-Perímetro de um Quadrado");
									printf("\n3-Diagonal de um Quadrado");
									printf("\nCálculo selecionado:\t");
									system("pause");
									break;
							}
							else if(opcsubmenupoligonal==2)
							{
								system("cls");
									printf("\nVocê selecionou o polígono Retângulo");
									printf("\nDigite qual cáculo será realizado:\t");
									printf("\n1-Área de um Retângulo");
									printf("\n2-Perímetro de um Retângulo");
									printf("\n3-Diagonal de um Retângulo");
									printf("\nCálculo selecionado:\t");
									system("pause");
									break;
							}
							else if(opcsubmenupoligonal==3)
							{
								system("cls");
									printf("\nVocê selecionou o polígono Círculo");
									printf("\nDigite qual cáculo será realizado:\t");
									printf("\n1-Área de um Círculo");
									printf("\n2-Comprimento da Circunferência de um Círculo");
									printf("\n3-Raio de um Círculo");
									printf("\n4-Diâmetro de um Círculo");
									printf("\nCálculo selecionado:\t");
									system("pause");
									break;
							}
				}
				case 5:
				{
					system("cls");
					system("color 3");
					printf("\n Você selecionou a opção [CALCULADORA DE NOTAS E MÉDIAS] (CPII)");
					printf("\n--- SUB-MENU DA CALCULADORA ---");
					printf("\n1-Cálculo de Média da Terceira Certificação");
					printf("\n2-Cálculo de Média Anual");
					printf("\n3-Cálculo de Média Final");
					printf("\nCálculo selecionado:\t");
					scanf("%d", &opcsubmenucalculadora);
							if(opcsubmenucalculadora==1)
							{
								system("cls");
								printf("\nVocê selecionou o Cálculo de Média da Terceira Certificação");
								printf("\nDigite a nota da Primeira certificação:\t");
								scanf("%lf", &media_1cert);
								printf("\nDigite a nota da Segunda certificação:\t");
								scanf("%lf", &media_2cert);
								media_3cert=(60-(3*media_1cert + 3*media_2cert))/4;
								if(media_3cert==0)
								{
									printf("\nNota da terceira certificação necessária: %.2lf pontos", media_3cert);
									printf("\n\aParabéns! Você já passou!\n");
								}
								else if (media_3cert>0)
								{
									printf("\nPara passar direto, você precisa tirar %.2lf pontos na terceira certificação", media_3cert);
									printf("\n\aBoa Sorte!\n");
								}
							}
							else if(opcsubmenucalculadora==2)
							{
								system("cls");
								printf("\nVocê selecionou o Cálculo de Média Anual");
								printf("\nDigite a nota da Primeira certificação:\t");
								scanf("%lf", &media_1cert);
								printf("\nDigite a nota da Segunda certificação:\t");
								scanf("%lf", &media_2cert);
								printf("\nDigite a nota da Terceira certificação:\t");
								scanf("%lf", &media_3cert);
								media_anual=(3*media_1cert + 3*media_2cert + 4*media_3cert)/10;
								if(media_anual>=6)
								{
									nota_PFV=0;
									printf("\nNota da prova final necessária: %.2lf pontos", nota_PFV);
									printf("\n\aParabéns! Você já passou!\n");
								}
								else
								{
									nota_PFV=(25-3*media_anual)/2;
									printf("\nPara passar de ano, você precisa tirar %.2lf pontos na Prova Final", nota_PFV);
									printf("\n\aBoa Sorte!\n");
								}
							}
							else if(opcsubmenucalculadora==3)
							{
								//Não completo
							}
					system("pause");
					break;
				}		
				}
									
			default:
			{			
			system("cls");
			system("color D");
			printf("\n\a[ERRO] Opção digitada não presente no Menu, por favor abra o Menu novamente\n");
			system("pause");
			break;
			}
		break;
		}
		}
		
}
