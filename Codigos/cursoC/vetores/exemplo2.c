#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int v[5] = {10,20,30,40,50};// declaro a varivel com arrey e atribuo valores
	int i; // variavel usada para fazer o laço de repetição
	float s = 0;// variavel que comportara o conteudo da soma
	
	for(i=0; i<5; i++){
		s += v[i];// pego o conteudo que esta em v na posição i e somo com oque esta em s (atribuição em linguagem c)
	}
		
	printf("Resultado: %f\n", s/5);// por fim aqui sera impresso o valor dividido por 5
	return 0;
}
