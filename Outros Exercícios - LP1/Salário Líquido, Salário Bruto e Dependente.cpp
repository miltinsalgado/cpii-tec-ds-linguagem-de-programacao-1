#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <iostream>

main()
{
	setlocale (LC_ALL, "portuguese");
	printf ("\n---SALÁRIO LÍQUIDO, SALÁRIO BRUTO E DEPENDENTE---\n");
char nome[99][50], cont;
float salario[99],salliquido[99],imposto[99];
int i,dependentes[99],depen[99],limit;

for(i=0;i<=99;i++)
{
		printf("\nBem-Vindo Usuário! Digite seu Nome:");
		scanf("%s",&nome[i]);
    	printf("\nDigite o seu salário bruto em reais (R$):\n");
		scanf("%f",&salario[i]);
		printf("\nDigite o número de dependentes:\n");
    	scanf("%d",&dependentes[i]);
    
depen[i]=(dependentes[i]*80);
    
if(salario[i]<=2000)
{
salliquido[i]=(salario[i]+depen[i]);
}
    
else if(salario[i]>=2001||salario[i]<=5000)
{
imposto[i]=(salario[i]*10)/100;
salliquido[i]=(salario[i]-imposto[i]+depen[i]);
}
else if(salario[i]>=5001)
{
imposto[i]=(salario[i]*27)/100;
salliquido[i]=(salario[i]-imposto[i]+depen[i]);
}
    printf("\nDeseja Continuar Cadastrando? S/N ");
    cont=getche();
    
    if((cont=='s')||(cont=='S'))
	{
    continue;
    }
else if((cont=='n')||(cont=='N'))
{
break;
}
}
for(limit=0;limit<=i;limit++){
printf("\nNome:%s ",nome[limit]);
printf("\nSalário Bruto:%f R$ ",salario[limit]);
printf("\nDependentes:%d ",dependentes[limit]);
printf("\nSalário Liquido:%f R$ ",salliquido[limit]);
}
}
