#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <iostream>	
#include <windows.h>
#define Pi 3.14  //Defini��o do valor da constante Pi utilizando a tag "define"

using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	Beep(659,1000);
	printf ("\n----Quest�o-04: Volume e �rea de uma Esfera----\n");
	printf ("\n ~ Seja Bem Vindo(a) Usu�rio!~\n");
	
    float raio [100], area, volume;
	char continua;
    for (int i; i<=100; i++)
	    {
		printf ("\n Digite o raio da esfera em cent�metros:"); 
		scanf ("%f", &raio[i]);
		area=4*Pi*(raio[i]*raio[i]);
		volume=(4*Pi/3)*(raio[i]*raio[i]*raio[i]);
		printf ("\n A �rea da esfera de raio %f cent�metros � de %.10f cent�metros quadrados (cm�).", raio [i], area);
		printf ("\n O volume da esfera de raio %f cent�metros � de %.10f cent�metros c�bicos (cm�).", raio [i], volume);
		printf ("\n Deseja continuar? (Digite: S+Enter-sim OU N+Enter-n�o)");
		continua=getche();
		if ((continua == 'n') || (continua == 'N'))
		break;
		printf("\n\n");
		system ("pause");
		system ("cls");
		Beep(659,1000);
		}
getch();
return 0;
}
