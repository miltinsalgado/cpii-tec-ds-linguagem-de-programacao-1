#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
	float n1, n2, n3, media;
	      setlocale(LC_ALL, "portuguese");
	printf ("\n----------------------------------M�dia de Tr�s Notas + Aprova��o ou Reprova��o-----------------------------------------\n");
	  printf ("\nDigite a Primeira Nota:");
	  scanf ("%f", &n1);
	     printf ("\nDigite a Segunda Nota:");
	     scanf ("%f", &n2);
	        printf ("\nDigite a Terceira Nota:");
	        scanf ("%f", &n3);
	 media= (n1+n2+n3)/3;       
	 printf ("\nA M�dia das Notas � %f:", media);
	 {
	 if (media<=5.9)
	 printf ("\nReprovado");
	 else printf("\nAprovado");
	 }
	 return 0;
}
