#include <stdio.h> 
#include <conio.h>
#include <locale.h>

int main ()
{
int num;
setlocale(LC_ALL, "portuguese");
printf("\n---PROGRAMA SIMPLES DE DEMONSTRA��O DO COMANDO {SWITCH CASE}---\n");
printf ("Digite um n�mero inteiro:");
scanf ("%d",&num);
switch (num)
{
case 9:
printf ("\n\nO n�mero � igual a 9.\n");
break;
case 10:
printf ("\n\nO n�mero � igual a 10.\n");
break;
case 11:
printf ("\n\nO n�mero � igual a 11.\n");
break;
default:
printf ("\n\nO n�mero n�o � nem 9 nem 10 nem 11.\n");
}
getch();
return(0);
}
