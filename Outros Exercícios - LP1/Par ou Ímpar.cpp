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
	printf ("\nDigite um n�mero:");
	scanf ("%d", &num);
	    if (num%2==0)
	    printf ("\nO N�mero � Par");
	    else printf ("\nO N�mero � �mpar");
	    getch();
	    return(0);
	}
