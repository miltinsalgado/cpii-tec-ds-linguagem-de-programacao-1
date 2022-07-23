#include <stdio.h> /* biblioteca padrão para entrada e saída de dados */
#include <stdlib.h>
#include <conio.h>
#include <math.h>    
#include <locale.h>
#include <iostream>	

/* Só vamos precisar da biblioteca stdio.h para 
usar no programa, não precisa de stdlib.h nem da math.h */



int main() // função principal
{
	setlocale (LC_ALL, "portuguese");
	printf ("\n----Questão-03: Verificação de um número natural em quadrado perfeito----");
	/* Usaremos 3 variáveis, a variável para armazenar o 
	número que o usuário digitar, uma para contar a quantidade 
	de termos somados, e outra para armazenar a soma. */

	int numero, termos, soma;

	/* Aqui se inicia o primeiro laço de repetição, só serve 
	para voltar ao início do código */

	do {

		printf("\nInforme um numero natural (Se for negativo, o programa encerrará): ");
		scanf("%d", &numero); 
		/* O scanf armazenara o número que o 
		usuário digitar, na variável numero */

		/* Aqui é a parte mais importante do programa - o laço "for" -
		já que ele será responsável pela soma dos termos, até que a soma
		seja igual ou maior que a variavel numero.
		Importante destacar que o laço só inicia se a variavel soma for 
		menor que a variavel numero. Se forem iguais ou maiores, por 
		exemplo, ele nem inicia o laço. 
		Fora isso, soma começa com valor "0" e termos começa com valor 
		"1" a cada vez que o laço iniciar. termos começa com "1" porque 
		se não haver termos pra somar, nao existe soma. E soma começa com
		"0" porque ainda não somamos nada.
		A cada interação do laço, adiciona "1" na variavel termos */

		for(termos=1, soma=0; soma<numero; termos++) 
		{
			soma = ( termos * (2+(termos-1)*2) )/2; 
			/*Aqui obtem-se a soma dos termos relativos a PA(1,3,5,7,9...).
			Se tiver dúvidas com essa fórmula, pesquise na internet sobre 
			soma de números em progressão aritmética.
			*/
		}

		/* Se o programa chegou até aqui, é porque a variável soma
		é igual ou maior que a variável numero. 
		Agora basta comparar os valores que ficaram nas variáveis após o laço
		"for" e pronto.*/

		if(numero 16>= 0) 
		{ /* Compara, se numero < 0 nao imprime mensagem, caso contrário... */

			if (soma == numero) 
				printf("%d : É um quadrado perfeito! Possui raiz quadrada = %d\n", numero, termos-1);
				/*Se soma = numero, então é um quadrado perfeito. termos-1 é o 
				valor da raiz quadrada do numero */
			else 
				printf("%d : Não é quadrado perfeito!\n", numero);
				/*Se não, não é um quadrado perfeito. */
		}

	} while (numero>=0); //Só sai do programa se o número for negativo

} //fim da função principal
