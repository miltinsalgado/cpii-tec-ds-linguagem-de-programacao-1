#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <iostream>	
#include <windows.h>

main()
{
  /* declaracao de variavel da aplicacao */
  int n = 0,k = 0,soma = 0;

  /* introducao dos valores por parte do utilizador */
  printf("Introduza um numero inteiro positivo:\n");
  scanf("%d", &k);
  printf("Introduza a quantidade de multiplos do numero inteiro introduzido que deseja somar:\n");
  scanf("%d", &n);

  /* verificacao dos valores introduzidos */
  if(k<=0 || n<=0){
    printf("Introduza numeros inteiros positivos\n");
  } else {
    /*
     * ciclo da soma dos multiplos
     * n*k + (n-1)*k + (n-2)*k + ..... 2*k + 1*k
     */
    for(; n>0; n--)
      soma += n*k;
    /* apresentacao do resultado */
    printf("O resultado da soma e : %d\n", soma);
  }
  /* usado em windows para nao fechar a janela da consola */
  system("pause");
}
