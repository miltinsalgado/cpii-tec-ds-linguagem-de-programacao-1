#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#define Pi 3.14  //definindo o valor da vari�vel Pi  utilizando a tag "define"

using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	Beep(659,1000);
	printf ("\n---RAIO E �REA DE UMA CICUNFER�NCIA---\n");
	printf ("\n ~ Seja Bem Vindo(a) Usu�rio!~\n");
	
    float raio [100], area;
	char continua;
    for (int i; i<=100; i++)
	    {
		printf ("\n Digite o Raio da circunfer�ncia em cent�metros:"); 
		scanf ("%f", &raio[i]);
		area=Pi*raio[i]*raio[i];
		printf ("\n A �rea da circunfer�ncia de raio %f cent�metros � de %.6f cent�metros quadrados (cm�).", raio [i], area);
		printf ("\n Deseja continuar? (Digite: S-sim OU N-n�o)");
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
