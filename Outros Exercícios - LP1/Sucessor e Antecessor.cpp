#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	  setlocale(LC_ALL, "portuguese");
	int i;
	printf ("\n---Antecessor e Sucessor---\n");
	printf ("\nDigite um n�mero:");
	scanf ("%d", &i);
	
	   int antecessor = (i - 1);
	   int sucessor = (i + 1);
	   printf ("\nEste n�mero tem como antecessor %d e como sucessor %d.\n", antecessor, sucessor);
	   getch();
	return 0;
}
