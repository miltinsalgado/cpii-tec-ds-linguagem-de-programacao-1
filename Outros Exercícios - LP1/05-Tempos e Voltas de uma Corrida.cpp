#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <iostream>	
#include <windows.h>

int main() 

{ 
setlocale(LC_ALL, "portuguese");
		printf("\n----Questão-05: Corrida com tempos e voltas----\n");
   int n, melhor_volta; 
   float tempo, melhor_tempo, soma=0; 
   printf("Informe a quantidade de voltas: "); 
   scanf("%d", &n); 
   for (int i=1; i<=n; i++) 
   { 
      printf("Informe o tempo (em segundos) da %dª volta: ", i); 
      scanf("%f", &tempo); 
      soma += tempo; 
      if (i == 1) 
	  { 
         melhor_volta = i; 
         melhor_tempo = tempo; 
      } 
      else 
         if (tempo < melhor_tempo) 
		 { 
            melhor_volta = i; 
            melhor_tempo = tempo; 
         } 
   } 
   printf("Melhor tempo: %f segundos na %dª volta \n", melhor_tempo, melhor_volta); 
   printf("Tempo médio das %d voltas : %.10f segundos\n", n, soma / n); //%.10f, este 10 ao lado do % e antecipado por um ponto (.), determina o número total de casas decimais após a vírgula a ser apresentado
   return 0; 
} 
