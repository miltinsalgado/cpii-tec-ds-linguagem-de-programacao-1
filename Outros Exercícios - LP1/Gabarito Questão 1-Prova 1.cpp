#include<stdlib.h>
#include<stdio.h> 
#include<locale.h> 
#include<conio.h> 
 
int main(void) 
{  
               setlocale(LC_ALL,"portuguese");    
char nomes[70][50];  
float mediaanual[70],precisapaf;  
int i;  
char resp;    
for(i=0;i<=70;i++)  
{   
system("cls");      
printf("Digite o seu nome: ");   
scanf("%s",nomes[i]);      
printf("Qual foi a sua média anual?: ");   
scanf("%f",&mediaanual[i]);      
printf("Deseja continuar? ");   
resp=getche();      
if(resp=='n'||resp=='N')   
break;  
} 
 system("cls");    
 printf("Alunos em prova final:\n ");    
 for(int x=0;x<=i;x++)  
 {   
 if(mediaanual[x]<7)   
 {    
 precisapaf=(25-3*mediaanual[x])/2;        
 printf("Aluno: %s",nomes[x]);    
 printf("\nQuanto precisa: %.2f\n\n",precisapaf);   
 }  
 }    
 getch(); 
 }
