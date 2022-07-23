#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main(void) 
	{  
		setlocale(LC_ALL,"portuguese");   
		int achou,soma=0,contprimo=0;  
		float media;    
		for(int i=1;contprimo<100;i++)  
		{   
		achou=0;      
		for(int x=1;x<=i;x++)   
		{    
		if(i%x==0)     
			achou++;   
		}      
	if(achou==2)   
	{    
	 	soma=soma+i;    
		contprimo++;  
	}  
	  }    
		  media=soma/100;    
		  printf("A média dos 100 primeiros números primos é: %.2f",media);  
		  getch(); 
	  }
