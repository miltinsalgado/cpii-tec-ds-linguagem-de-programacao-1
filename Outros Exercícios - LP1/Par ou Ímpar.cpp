#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	   setlocale(LC_ALL, "portuguese");
	int num;
	printf ("---PAR OU IMPAR?---");
	printf ("\nDigite um número:");
	scanf ("%d", &num);
	    if (num%2==0)
	    printf ("\nO Número é Par");
	    else printf ("\nO Número é Ímpar");
	    getch();
	    return(0);
	}
