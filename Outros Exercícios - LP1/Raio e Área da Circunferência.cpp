#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#define Pi 3.14  //definindo o valor da variável Pi  utilizando a tag "define"

using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	Beep(659,1000);
	printf ("\n---RAIO E ÁREA DE UMA CICUNFERÊNCIA---\n");
	printf ("\n ~ Seja Bem Vindo(a) Usuário!~\n");
	
    float raio [100], area;
	char continua;
    for (int i; i<=100; i++)
	    {
		printf ("\n Digite o Raio da circunferência em centímetros:"); 
		scanf ("%f", &raio[i]);
		area=Pi*raio[i]*raio[i];
		printf ("\n A área da circunferência de raio %f centímetros é de %.6f centímetros quadrados (cm²).", raio [i], area);
		printf ("\n Deseja continuar? (Digite: S-sim OU N-não)");
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
