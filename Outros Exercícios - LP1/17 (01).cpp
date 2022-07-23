#include <stdio.h> 
int main() 
{ 
int i,j, num, cont; 
char flag; 
printf("Informe um nº inteiro:"); 
scanf("%d",&num); 
i=2; 
flag='V'; 
while((i < num/2) && (flag=='V')) 
{ 
if((num%i) == 0)  
flag='F'; 
else   
++i; 
} 
if (flag=='V')   
printf("%d",num); 
} 
