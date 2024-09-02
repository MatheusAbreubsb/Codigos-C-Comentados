#include <stdio.h>
#include <stdlib.h>

/* if else
se a condição for verdadeira então if é executado e else ignorado
se a condição for falsa então if é ignorado e else executado */

int main() {
	float m;
	
	printf("Inssira a nota:\n");
	scanf("%f", &m);
	
	
	
	if(m < 7){
		printf("Reprovado(a)!\n");	
	} else {
		printf("Aprovado(a)!\n");
	}
	
	/*A condição else(se não) só ira ser executada se a condição
	if for falsa*/
	
	return 0;
}
