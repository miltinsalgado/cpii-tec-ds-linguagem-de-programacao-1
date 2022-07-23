#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main()
{	char piloto[5][50], opc, nome[50];
	int codPiloto [5], contp=-1, nvolta=-1, cod, achou=0, volta;
	float tempo[5][10], menorT, menorT2, menorT3;
	
	setlocale(LC_ALL,"portuguese");
	while (1)
	{
		printf("\n___Pilotos de uma Corrida___");
		system("cls");
		printf ("\n Menu de Opções");
		printf ("\n 1-Inserir");
		printf ("\n 2-Registrar");
		printf ("\n 3-Listar");
		printf ("\n 4-Sair");
		printf ("\n Opção: ");
		opc=getche();
		
	    if (opc=='4') 
	       exit(1);
		else if (opc=='1')
		{ 
		  printf("\n___Cadastro de Nome e Código do Piloto___");
		  if (contp==4)
		  {
		  	printf("\n Número máximo de piloto excedido!!!!\n");
		  	system("pause");
		  	continue;
		  }
		
		  contp++;
		  printf("\n Digite o Código do piloto->"); // 44 69 77 80 100
		  scanf("%d",&codPiloto[contp]);
		  printf("\n Digite o Nome do piloto->");
		  scanf("%s",&piloto[contp]);
		}
		else if (opc=='2')
		{ 
		    printf("\n___Cadastro de Tempo em SEGUNDOS do Piloto___"); 
		   nvolta++;
		   for (int j=0;j<=contp;j++)  //0 1 2
		   {
		     printf("\n Digite o Código do piloto cadastrado->");
		     scanf("%d", &cod);  // 77  100 69 44 80  1 5 8
		     achou=0;
		     for (int i=0;i<=contp;i++)  //0 1 2
		     {
		   	    if (codPiloto[i]==cod)
		   	    {
		   	  	  printf("\n Digite o Tempo do piloto nessa volta->");
		   	  	  scanf("%f",&tempo[i][nvolta]);
		   	  	  achou=1;
		   	  	  break;
			    }
		     }
		     if (achou!=1) 
			 printf("\n Piloto não cadastrado, por favor realize o recadastrasmento");
			 j--;
		   }

		}
		else if (opc=='3')
		{ 
		  /* for (int i=0;i<=contp;i++)
		     for (int j=0;j<=nvolta;j++)
		        printf("\n %f", tempo[i][j]);  //tempo[0][0]  tempo[0][1] tempo[0][2]... tempo[0][9]
		                                       //tempo[1][0]...tempo[1][9]*/
		                                       
	        for (int i=0;i<=contp;i++) //i=0 1 2
	        {
		       for (int j=0;j<=nvolta;j++)  //j=0  1 2
		       {
		       	  if ((i==0) && (j==0))
		       	    menorT3=tempo[i][j];  //27
		       	  if (tempo[i][j]<=menorT)
		       	  { 
		       	  	menorT=tempo[i][j]
					strcpy(nome,piloto[i]); 
					volta=j;
				  }
			   }
	    	}
		    printf("\n O Menor tempo foi %f, do piloto %s na volta %d, o Segundo Menor Tempo foi  %f do piloto %s na volta %d e o o Segundo Menor Tempo foi  %f do piloto %s na volta %d ", menorT, nome, volta);
		    system ("pause");
		    
     	}
   }
   	//
   
   
   
   
   
}
