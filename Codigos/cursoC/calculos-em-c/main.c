#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int A, B, soma, sub, mult, div; // observe que posso declarar a variavel sem atribuir um valor
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &A);
	printf("Digite o segundo valor: \n");
	scanf("%d", &B);
	
	soma= A + B;// Nesse tipo de linha é realizado uma operacao e alocado em uma varavel
	sub= A - B;
	mult= A*B;
	div=A/B;
	
	
	printf("Resultados: \n");
	printf("Soma: %d. \n", soma);
	printf("Subtracao: %d. \n", sub);
	printf("Multiplicacao: %d. \n", mult);
	printf("Divisao: %d. \n", div);
	
	return 0;
}
