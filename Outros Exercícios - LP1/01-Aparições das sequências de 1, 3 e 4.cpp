#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <iostream>	
#include <windows.h>

using namespace std;
int main()
{
setlocale (LC_ALL, "portuguese");
	Beep (659,1000);
	printf("\n----Quest�o-01: Apari��es da sequ�ncia 1 3 4----\n");
int num[10];
int cont=0, i;

printf("Digite [-1] (Ignore os colchetes) para sair do programa.\n\n");

 for(i=0; i<10; i++)
    {
     printf("Entre com um n�mero: ");
        scanf("%d", &num[i]);
        if(num[i]==-1)
      {
          return -1; 
      } 
    }
    for(i=0; i<10; i++)
    {
        if(num[i] == 1 && num[i+1] == 3 && num[i+2] == 4) 
		/*Acima, formato para ler as posi��es do vetor para cada vari�vel inserida: {vari�vel[posi��o no vetor em fun��o de 
		i + n�mero de posi��es do vetor para seguir de acordo com o fluxo] == n�mero da sequ�ncias}*/		
        {
         cont=cont+1;
        }
    }  
    printf("Os n�meros 1,3,4 aparecem nessa ordem %d vezes!\n", cont);

system("PAUSE");
return -1;

}
 
