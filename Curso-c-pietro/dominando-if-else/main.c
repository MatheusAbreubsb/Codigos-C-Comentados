#include <stdio.h>
#include <stdlib.h>

/* if else
se a condi��o for verdadeira ent�o if � executado e else ignorado
se a condi��o for falsa ent�o if � ignorado e else executado */

int main() {
	float m;
	
	printf("Inssira a nota:\n");
	scanf("%f", &m);
	
	
	
	if(m < 7){
		printf("Reprovado(a)!\n");	
	} else {
		printf("Aprovado(a)!\n");
	}
	
	/*A condi��o else(se n�o) s� ira ser executada se a condi��o
	if for falsa*/
	
	return 0;
}
