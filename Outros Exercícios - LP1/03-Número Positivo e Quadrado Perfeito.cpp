#include <stdio.h> /* biblioteca padr�o para entrada e sa�da de dados */
#include <stdlib.h>
#include <conio.h>
#include <math.h>    
#include <locale.h>
#include <iostream>	

/* S� vamos precisar da biblioteca stdio.h para 
usar no programa, n�o precisa de stdlib.h nem da math.h */



int main() // fun��o principal
{
	setlocale (LC_ALL, "portuguese");
	printf ("\n----Quest�o-03: Verifica��o de um n�mero natural em quadrado perfeito----");
	/* Usaremos 3 vari�veis, a vari�vel para armazenar o 
	n�mero que o usu�rio digitar, uma para contar a quantidade 
	de termos somados, e outra para armazenar a soma. */

	int numero, termos, soma;

	/* Aqui se inicia o primeiro la�o de repeti��o, s� serve 
	para voltar ao in�cio do c�digo */

	do {

		printf("\nInforme um numero natural (Se for negativo, o programa encerrar�): ");
		scanf("%d", &numero); 
		/* O scanf armazenara o n�mero que o 
		usu�rio digitar, na vari�vel numero */

		/* Aqui � a parte mais importante do programa - o la�o "for" -
		j� que ele ser� respons�vel pela soma dos termos, at� que a soma
		seja igual ou maior que a variavel numero.
		Importante destacar que o la�o s� inicia se a variavel soma for 
		menor que a variavel numero. Se forem iguais ou maiores, por 
		exemplo, ele nem inicia o la�o. 
		Fora isso, soma come�a com valor "0" e termos come�a com valor 
		"1" a cada vez que o la�o iniciar. termos come�a com "1" porque 
		se n�o haver termos pra somar, nao existe soma. E soma come�a com
		"0" porque ainda n�o somamos nada.
		A cada intera��o do la�o, adiciona "1" na variavel termos */

		for(termos=1, soma=0; soma<numero; termos++) 
		{
			soma = ( termos * (2+(termos-1)*2) )/2; 
			/*Aqui obtem-se a soma dos termos relativos a PA(1,3,5,7,9...).
			Se tiver d�vidas com essa f�rmula, pesquise na internet sobre 
			soma de n�meros em progress�o aritm�tica.
			*/
		}

		/* Se o programa chegou at� aqui, � porque a vari�vel soma
		� igual ou maior que a vari�vel numero. 
		Agora basta comparar os valores que ficaram nas vari�veis ap�s o la�o
		"for" e pronto.*/

		if(numero 16>= 0) 
		{ /* Compara, se numero < 0 nao imprime mensagem, caso contr�rio... */

			if (soma == numero) 
				printf("%d : � um quadrado perfeito! Possui raiz quadrada = %d\n", numero, termos-1);
				/*Se soma = numero, ent�o � um quadrado perfeito. termos-1 � o 
				valor da raiz quadrada do numero */
			else 
				printf("%d : N�o � quadrado perfeito!\n", numero);
				/*Se n�o, n�o � um quadrado perfeito. */
		}

	} while (numero>=0); //S� sai do programa se o n�mero for negativo

} //fim da fun��o principal
