#include <stdlib.h> 
#include <stdio.h> 
#include <locale.h> 
#include <conio.h> 
#include <math.h>
main ()
{
	setlocale(LC_ALL,"portuguese");
	printf ("\n---SALÁRIO LÍQUIDO DOS PROFESSORES");
	float saliq, valor, desconto;
	int aulas;

for (int i=0; i<=20; i++)
{
	system ("cls");
	printf ("\nDigite o Valor de sua aula:");
    scanf ("%f", &valor);
	printf ("\nDigite o número de aulas:");
    scanf("%d", &aulas);
    desconto=(valor+aulas)*0.1;
    saliq= desconto+valor+aulas;
    printf("\nO salário líquido foi de 2.%f", saliq);
    getch();
}
}
