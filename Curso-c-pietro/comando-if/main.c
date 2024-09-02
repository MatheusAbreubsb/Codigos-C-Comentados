#include <stdio.h>
#include <stdlib.h>

/* operadores do if

maior: >
maior ou igua: >=
menor: <
menor ou igual: <=
igual: ==
diferente: !=*/

int main() {
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("Aprovado(a)!\n");
	}
	
	/*o if não deve acabar em ';', 
	a explicação do codigo é a seguinte:
	se m for maior ou igual a 7 imprima aprovado*/
	
	
	return 0;
}
