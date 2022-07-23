#include <stdlib.h> 
#include <stdio.h> 
#include <locale.h> 
#include <conio.h> 
#include <math.h>
 
		int main(void) 
	{  
	setlocale(LC_ALL,"portuguese");    
	int num,vetpar[20],vetimpar[20],contpar=0,contimpar=0,maiorp,menorp,maiori,menori;    
	for(int i=0;i<20;i++) 
 	{   
 		system("cls");      
	 	printf("Digite um número: ");   
	 	scanf("%d",&num);      
	 	if(num<0)    
	 	break;       
	 	if(num%2==0)   
	 {   
		vetpar[contpar]=num;        
		    if(contpar==0)    
	  		{     
	  			maiorp=num;     
	  			menorp=num;   
	   		}    
	   		else    
	   		{     
		   		if(num>maiorp)      
		   			maiorp=num;          
		   		if(num<menorp)      
		   			menorp=num;    
	   		}        
	   		contpar++;   
	   		}   
	   		else   
	   		{   
			   	vetimpar[contimpar]=num;        
	   			if(contimpar==0)
	   		{     
	   		maiori=num;     
	   		menori=num;    
	   		}    
	   		else    
	   		{     
	   			if(num>maiori)      
	   			maiori=num;          
	   			if(num<menori)      
	   			menori=num;    
	   		}        
	   contimpar++;   
	   		}  
	}    
	   system("cls");    
	   printf("Maior par: %d\nMenor par: %d",maiorp,menorp);  
	   printf("\n\nMaior impar: %d\nMenor impar: %d",maiori,menori);    
	   getch(); 
	   }
