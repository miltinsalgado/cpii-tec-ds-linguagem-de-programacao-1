#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <iostream>

int main()
{
    int qtdAl=0;
    char aluno[qtdAl][100];
    float n1[qtdAl], n2[qtdAl], n3[qtdAl];
    int media[qtdAl], cont=0;
    setlocale(LC_ALL, "portuguese");
		printf ("\n\a----Questão-02: Média de Três Notas de uma certa quantidade de alunos (Condição maior[>] ou menor[<] que 5.0)----\n");
   
    printf("Entre com a quantidade de Alunos: ");
    scanf("%d", &qtdAl);
   
    for(int i=0; i<qtdAl; i++)
    {
            printf("\nEntre com o nome do aluno: ");
            scanf("%s", &aluno[i]);
            printf("Entre com a primeira nota deste aluno: ");
            scanf("%f", &n1[i]);
            printf("Entre com a segunda nota deste aluno: ");
            scanf("%f", &n2[i]);
            printf("Entre com a terceira nota deste aluno: ");
            scanf("%f", &n3[i]);
            system ("cls");
            media[i]=(n1[i]+n2[i]+n3[i])/3;
    }
    for(int i=0; i<qtdAl; i++)
    {
            if(media[i]>5)
            {
             cont++;
            }
    }
    if(cont==0)
    {
        printf("\nNenhum aluno obteve média acima de 5.0 !\n");
    }
    else
	{
    printf("\n\nQuantidade de alunos com média acima de 5.0: %d", cont);
    printf("\n\n");
    }
    
                   
                         
   
   
system("pause");
return -1;
}
