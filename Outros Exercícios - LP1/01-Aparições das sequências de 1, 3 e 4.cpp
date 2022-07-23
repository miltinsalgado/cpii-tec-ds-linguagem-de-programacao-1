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
	printf("\n----Questão-01: Aparições da sequência 1 3 4----\n");
int num[10];
int cont=0, i;

printf("Digite [-1] (Ignore os colchetes) para sair do programa.\n\n");

 for(i=0; i<10; i++)
    {
     printf("Entre com um número: ");
        scanf("%d", &num[i]);
        if(num[i]==-1)
      {
          return -1; 
      } 
    }
    for(i=0; i<10; i++)
    {
        if(num[i] == 1 && num[i+1] == 3 && num[i+2] == 4) 
		/*Acima, formato para ler as posições do vetor para cada variável inserida: {variável[posição no vetor em função de 
		i + número de posições do vetor para seguir de acordo com o fluxo] == número da sequências}*/		
        {
         cont=cont+1;
        }
    }  
    printf("Os números 1,3,4 aparecem nessa ordem %d vezes!\n", cont);

system("PAUSE");
return -1;

}
 
