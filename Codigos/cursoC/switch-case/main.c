#include <stdio.h>
#include <stdlib.h>

/* O switch case faz compara��o apenas com valores iguais
� como se fosse uma sequencia de if de igualdade*/

int main() {
	
	int d;
	
	printf("Insira um valor de 1 a 7:\n");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("Domingo.\n");
			break;
		case 2:
			printf("Segunda.\n");
			break;
		case 3:
			printf("Ter�a.\n");
			break;
		case 4:
			printf("Quarta.\n");
			break;
		case 5:
			printf("Quinta.\n");
			break;
		case 6:
			printf("Sexta.\n");
			break;
		case 7:
			printf("Sabado.\n");
			break;
		default:
			printf("Voce nao digitou um numero de 1 a 7 :/");
			break;
	}
	/*Ele pega o valor, compara com as condi��es e execulta o codigo se
	o valor comparado for verdadeiro.
	Caso nao tenha nenhum valor verdadeiro comparado ou seja caso o
	operador colocou um numero que n�o seja de 1 a 7 ent�o ele vai execultar
	a opera��o em default*/
	
	return 0;
}
