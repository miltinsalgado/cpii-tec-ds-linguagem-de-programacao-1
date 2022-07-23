#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int contconsoantes (char* st)
{
	int cont=strlen(st);
	for (int k=0;k<strlen(st);k++)
	{
		if ((tolower(st[k])=='a') || (tolower(st[k])=='e') || (tolower(st[k])=='i') || (tolower(st[k])=='o') || (tolower(st[k])=='u'))
		cont--;
	}
	return cont; 
}

int contvogais (char* st)
{
	int cont=0;
		for (int i=0;i<strlen(st);i++)
		{
		if ((tolower(st[i])=='a') || (tolower(st[i])=='e') || (tolower(st[i])=='i') || (tolower(st[i])=='o') || (tolower(st[i])=='u'))
		cont++;
		}
		
return cont;

}

int quantchar (char* st, char ch)
{
	int cont=0;
		for (int i=0;i<strlen(st);i++)
		{
		if (st[i]==ch)
		cont++;
		}
		
return cont;
}

main()
{
	char ch;
	char palavra[50];
	char vetpalavra[500][50];
	
	printf("\nDigite uma palavra: \n");
	scanf("%s",&palavra);
	ch=getche();
	printf("\n Quantidade de Vogais: %d", contvogais(palavra));
	printf("\n Quantidade de Consoantes = %d",contconsoantes(palavra));
	printf("\n A: %d", quantchar(palavra,'a'));
	printf("\n B: %d", quantchar(palavra,'b'));
	printf("\n C: %d", quantchar(palavra,'c'));
	printf("\n D: %d", quantchar(palavra,'d'));
	printf("\n E: %d", quantchar(palavra,'e'));
	printf("\n F: %d", quantchar(palavra,'f'));
	printf("\n G: %d", quantchar(palavra,'g'));
	printf("\n H: %d", quantchar(palavra,'h'));
	printf("\n I: %d", quantchar(palavra,'i'));
	printf("\n J: %d", quantchar(palavra,'j'));
	printf("\n K: %d", quantchar(palavra,'k'));
	printf("\n L: %d", quantchar(palavra,'l'));
	printf("\n M: %d", quantchar(palavra,'m'));
	printf("\n N: %d", quantchar(palavra,'n'));
	printf("\n O: %d", quantchar(palavra,'o'));
	printf("\n P: %d", quantchar(palavra,'p'));
	printf("\n Q: %d", quantchar(palavra,'q'));
	printf("\n R: %d", quantchar(palavra,'r'));
	printf("\n S: %d", quantchar(palavra,'s'));
	printf("\n T: %d", quantchar(palavra,'t'));
	printf("\n U: %d", quantchar(palavra,'u'));
	printf("\n V: %d", quantchar(palavra,'v'));
	printf("\n W: %d", quantchar(palavra,'w'));
	printf("\n X: %d", quantchar(palavra,'x'));
	printf("\n Y: %d", quantchar(palavra,'y'));
	printf("\n Z: %d", quantchar(palavra,'z'));
}

