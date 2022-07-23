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
		printf ("\n---SALÁRIO DOS FUNCIONÁRIOS---\n");
    	printf("\nDigite o nome do Funcionário:\n");
    	scanf ("%s", &nome[x]);
    	  printf ("\nDigite o Valor de seu salário:\n");
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
		 printf ("\nOs nomes dos funcionários que ganham mais de 3500 R$ são: %s e ganham %f", nome[k], sal[k]);
		if (sal[k]<sal[k])
    	   {
		   maiorsal[k]==sal[k];
		   }
		printf("\n O funcionário que tem o maior salário é %s, e ganha %f", nome[k], maiorsal[k]);
		 }
		 }
		
		 
		return 0;
}
