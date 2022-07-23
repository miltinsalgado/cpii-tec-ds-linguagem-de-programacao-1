#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <iostream>	
#include <windows.h>

	int main (int argc, char *argv[])
{
	int a[5], b[8],i,j,p=0;
	for (i=0; i<5; i++)
{
	scanf("%i",&a);
}
		printf("\n\n");
			for (i=0; i<8; i++)
		{
			scanf("%i",&b);
		}
			for (i=0; i<5; i++)
		{
				for (j=0; j<8; j++)
			{
				if (a[i]==b[j])
			printf("%i",b[j]);
			}
			}
system("PAUSE"); 
return 0;
}
