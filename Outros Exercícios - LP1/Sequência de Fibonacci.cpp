#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
int main()
{
 setlocale(LC_ALL,"portuguese");
  // Declara��o de vari�veis.
  int a, b, auxiliar, i, n;
 
  // Aqui foi necess�rio atribuir valores as vari�veis a e b.
  a = 0;
  b = 1;
 
  // A fun��o printf() escreve na tela.
  printf("Digite um n�mero: ");
  // A fun��o scanf obt�m um valor digitado.
  scanf("%d", &n);
  printf("S�rie de Fibonacci:\n");
  printf("%d\n", b);
 
  // Com a estrutura de controle for() gero a sequ�ncia.
  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
 
    // Imprimo o n�mero na tela.
    printf("%d\n", auxiliar);
  }
}
