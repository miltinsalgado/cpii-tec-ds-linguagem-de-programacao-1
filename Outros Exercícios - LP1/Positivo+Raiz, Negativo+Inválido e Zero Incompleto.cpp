#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
	   setlocale(LC_ALL, "portuguese");
	int num, raiz;
	printf ("\n---Positivo + Raiz, Negativo + Inv�lido e Zero---\n");
	printf ("\nDigite um n�mero:"); 
	scanf ("%d", &num);

	raiz= sqrt(num);
	
	  if (num==0)
	  printf ("\nVoc� digitou um n�mero nulo");	
	    else if (num>0)
	    printf ("\nA raiz deste n�mero � %d.");
	      else printf("\nEste n�mero � inv�lido");
		    printf ("\n");
	        system ("pause");
	         return 0;
	
}
