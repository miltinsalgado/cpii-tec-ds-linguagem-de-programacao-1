#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

char* FazRna(char* st)
{
	char* aux;
	aux = (char*)malloc(strlen(st)+1);
	strcpy(aux, st);
	
	for(int i = 0; i< strlen(aux); i++)
	{
		if (toupper(aux[i]) == 'A')
		{
			aux[i] = 'U';
		}
		else if (toupper(aux[i]) == 'G')
		{
			aux[i] = 'C';
		}
		else if (toupper(aux[i]) == 'T')
		{
			aux[i] = 'A';
		}
		else if (toupper(aux[i]) == 'C')
		{
			aux[i] = 'G';
		}
	}
	
	return aux;
}

int verifique (char* st)
{
    char* aux;
	aux = (char*)malloc(strlen(st)+1);
	strcpy(aux, st);
	int valido;
	
	for(int i = 0; i < strlen(aux); i++)
	{
	    if ((toupper(aux[i])!= 'A') && (toupper(aux[i])!= 'G') && (toupper(aux[i])!= 'T') && (toupper(aux[i]!='C')))
	    {
	        valido = 0;
	    }
	    
	    else
	        valido = 1;
	}
	
	if (valido == 0)
	    {
	        return valido;
	    }
	    

    for(int i = 3; i < strlen(aux); i=i+4 )
    {
            
        if (aux[i] != ' ')
        {
           valido = 0;
           break;
        }
            
    }
    
	
	return valido;
}

int main()
{	
		setlocale(LC_ALL, "portuguese");
	char dna[50];
	
	fflush(stdin);
	
	printf("\n Digite a sequencia de DNA:\n");
	gets(dna);
	
	printf("\n A sequencia de RNA eh: %s\n", FazRna(dna));
	
	if (verifique(dna) == 1)
	{
	    printf("\nVÁLIDO!!!\n");
	}
	
	else{
	    printf("\nINVÁLIDO!!!\n");
	}
	
}
