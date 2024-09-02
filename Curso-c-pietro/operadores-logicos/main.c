#include <stdio.h>
#include <stdlib.h>

/* Operadores logicos:
conjunção "e": && (é verdade quanto tudo for verdade)
disjunção "ou": || (é verdade se ao menos 1 for verdade)
inversão "não": ! (é verdade quanto a operação é falsa)
*/

int main() {
	
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);
	
	if (m >= 4.0 && m < 7.0){
		printf("Tem direito a exame!\n");
	}
	
	/*capitura uma nota 'm' e executa se m form maior ou
	igual a 4 E menos que 7 então imprima 'tem direito 
	a exame!\n'*/
	return 0;
}
