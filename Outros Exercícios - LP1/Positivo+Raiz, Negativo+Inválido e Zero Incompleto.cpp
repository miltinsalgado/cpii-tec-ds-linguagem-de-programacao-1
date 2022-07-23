#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
	   setlocale(LC_ALL, "portuguese");
	int num, raiz;
	printf ("\n---Positivo + Raiz, Negativo + Inválido e Zero---\n");
	printf ("\nDigite um número:"); 
	scanf ("%d", &num);

	raiz= sqrt(num);
	
	  if (num==0)
	  printf ("\nVocê digitou um número nulo");	
	    else if (num>0)
	    printf ("\nA raiz deste número é %d.");
	      else printf("\nEste número é inválido");
		    printf ("\n");
	        system ("pause");
	         return 0;
	
}
