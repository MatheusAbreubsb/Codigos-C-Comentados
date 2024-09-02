#include <stdio.h>
#include <stdlib.h>

/* O scanf dara ao o usuario a oportunidade de inserir um elemento e guardar na memoria da variavel ja definida */

int main() {
	int idade=0; // alocamos um valor 0 na memoria vinculada a variavel
	float peso=0.0;
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);// "%d" significa que o tipo a ser lido sera inteiro e o "&" indica que sera atribuido a variavel idade
	
	printf("Digite seu peso: \n");
	scanf("%f", &peso);
	
	printf("Sua idade: %d. \n", idade);// para imprimir é só colocar o tipo no caso %d e o nome da variavel depois da virgula
	printf("Seu peso: %f. \n", peso);
	
}
