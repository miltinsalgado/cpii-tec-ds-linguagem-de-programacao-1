#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "portuguese");
    
    float sal[20], maiorsal[20];
    char nome[50][20], continua; 
    int x, k;
    for (x=0; x<=20; x++)
    {
		printf ("\n---SAL�RIO DOS FUNCION�RIOS---\n");
    	printf("\nDigite o nome do Funcion�rio:\n");
    	scanf ("%s", &nome[x]);
    	  printf ("\nDigite o Valor de seu sal�rio:\n");
    	  scanf("%f", &sal[x]);
    	  if (sal[x]<1500)
    	   sal[x]=sal[x] + sal[x]*0,2;
    	   printf("\nDeseja continuar? S/N");
    	   continua=getch();
    	   if ((continua=='n')||(continua=='N')) break;
    }
		 for(k=0; k<=20; k++)
		 {
		 if (sal[k]>3500)
		 { 
		 printf ("\nOs nomes dos funcion�rios que ganham mais de 3500 R$ s�o: %s e ganham %f", nome[k], sal[k]);
		if (sal[k]<sal[k])
    	   {
		   maiorsal[k]==sal[k];
		   }
		printf("\n O funcion�rio que tem o maior sal�rio � %s, e ganha %f", nome[k], maiorsal[k]);
		 }
		 }
		
		 
		return 0;
}
