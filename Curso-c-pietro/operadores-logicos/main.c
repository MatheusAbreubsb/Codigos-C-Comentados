#include <stdio.h>
#include <stdlib.h>

/* Operadores logicos:
conjun��o "e": && (� verdade quanto tudo for verdade)
disjun��o "ou": || (� verdade se ao menos 1 for verdade)
invers�o "n�o": ! (� verdade quanto a opera��o � falsa)
*/

int main() {
	
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);
	
	if (m >= 4.0 && m < 7.0){
		printf("Tem direito a exame!\n");
	}
	
	/*capitura uma nota 'm' e executa se m form maior ou
	igual a 4 E menos que 7 ent�o imprima 'tem direito 
	a exame!\n'*/
	return 0;
}
