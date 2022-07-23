#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
int main()
{
 setlocale(LC_ALL,"portuguese");
  // Declaração de variáveis.
  int a, b, auxiliar, i, n;
 
  // Aqui foi necessário atribuir valores as variáveis a e b.
  a = 0;
  b = 1;
 
  // A função printf() escreve na tela.
  printf("Digite um número: ");
  // A função scanf obtém um valor digitado.
  scanf("%d", &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n", b);
 
  // Com a estrutura de controle for() gero a sequência.
  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
 
    // Imprimo o número na tela.
    printf("%d\n", auxiliar);
  }
}
