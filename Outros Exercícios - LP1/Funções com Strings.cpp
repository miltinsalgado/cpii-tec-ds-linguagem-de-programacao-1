#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int quadrado(int n)
{
	return n*n;
}
                             //  st  aux
  char* inverte (char* st)   //roma->amor
  {
  	char* aux;  //1 byte
  	int j=-1;
  	aux = (char*) malloc(strlen(st)+1);
  	strcpy(aux,st);
  	for(int i=strlen(st)-1;i>=0;i--)//3 2  1  0 -1
  	{
  		j++;  //0 1 2 3
  	    aux[j]=st[i];
  	}
  	return aux;
  }
  
 int contVogais (char* st)  //pedro/0
 {
 	  int cont=0;
 	for (int i=0;i<strlen(st);i++)
 	{
 		if ((tolower(st[i])=='a') || (tolower(st[i])=='e') || (tolower(st[i])=='i') || (tolower(st[i])=='o') || (tolower(st[i])=='u'))
 		  cont++;
	 }

 	return cont;
 }
 
 int contChar(char *st, char ch)
 {
 	int cont=0;
 	for (int i=0;i<strlen(st);i++)
 	{
 	   if (st[i]==ch)
 	      cont++;
 	}
 	return cont;
 }

  //'P'              // f18->st[0]    f19=st[1]
 char*  maiuscula (char* st)  //pedro/0
 {
 	for (int i=0;i<strlen(st);i++)
 	  st[i]=toupper(st[i]);
 	return st;
 }
 
  char*  _maiuscula (char* st)  //pedro/0
 {
 	char * aux;
 	aux=(char *) malloc((strlen(st)+1)*sizeof(char));  *//malloc(6);
 	strcpy(aux,st);
 	for (int i=0;i<strlen(st);i++)
 	  aux[i]=toupper(st[i]);
 	return aux;
 }
 
 char*  maiuscula2 (char* st)
 {
 	int i=0;
 	while (i<strlen(st))
    {
 	  st[i]=toupper(st[i]);
 	  i++;
    } 
 	return st;
 }
 
 char*  maiuscula3 (char*  st)  //ana
 {
 	int i=0;
 	do
 	{
 	  st[i]=toupper(st[i]);  //ANA
 	  i++;
    } while (i<strlen(st));
 	return st;
 }
 
 
char* converte(char* st,int tipo)
{
	 if (tipo==1)
	 {
	 	for (int i=0;i<strlen(st);i++)
 	       st[i]=toupper(st[i]);
	 }
	 else if (tipo==2)
	 {
	 	for (int i=0;i<strlen(st);i++)
 	       st[i]=tolower(st[i]);
	 }
	 return st;
}
char* converte2(char* st,int tipo)
{
 	for (int i=0;i<strlen(st);i++)
 	{
 	   if (tipo==1)
 	       st[i]=toupper(st[i]);
 	   else if (tipo==2)
 	       st[i]=tolower(st[i]);
 	}
    return st;
}

char* iniciais(char* x)
{
	x[0]=toupper(x[0]);
	for (int i=1;i<strlen(x);i++)
	  x[i]=tolower(x[i]);
	  
	return x;
}

main()
{
	char ch;
	char nome[50];
	char vetNome[500][50];
	;
	printf("\n Digite uma palavra-> ");
	scanf("%s",&nome);
	printf("\n Qtd Vogais->%d", contVogais(nome));
	printf("\n a->%d", contChar(nome,'a'));
	printf("\n e->%d", contChar(nome,'e'));
	printf("\n i->%d", contChar(nome,'i'));
	printf("\n o->%d", contChar(nome,'o'));
	printf("\n u->%d", contChar(nome,'u'));
	
	/*int i;
	i=2;
	quadrado(i);
	printf("%d",i);
	
   scanf("%s",&nome);
   printf("%s\n", _maiuscula(nome));
   printf("%d\n", contVogais(nome));
   printf("%s\n", inverte(nome));
    printf("%s\n", nome);*/
	   
	/*for (i=0;i<=4;i++)
    	scanf("%s",&vetNome[i]);
    
	for	(i=0;i<=4;i++)
	   printf("%s\n", maiuscula(vetNome[i]));

	for	(i=4;i>=0;i--)
	   printf("%s\n", maiuscula(vetNome[i]));*/
	   	   
	/*printf("%s\n", converte(nome,1));  //maiusculo
	printf("%s\n", converte2(nome,2));  //minusculo
	printf("%s\n", iniciais(nome));  //pedro->Pedro  //PEDRO->Pedro*/
}
