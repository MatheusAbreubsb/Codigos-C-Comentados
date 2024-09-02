#include <stdio.h>
#include <stdlib.h>

/* A linguagem C permite que voce atribua mais valores em array do que alocado em
 memoria sem indicar erros, mas isso não quer dizer o programa funcionara corretamente */

int main() {
	int v[5];// criou-se uma variavel arrey de 5 possições de nome v e tipo inteiro
	int i;// criou-se uma variavel do tipo inteiro
	
	for(i=0;i<5;i++){
		printf("Digite um numero \n");
		scanf("%d", &v[i]);// aqui será atribuido o valor digitado aos campos do arrey da variavel v
	}
	
	printf("Numeros digitados: ");
	for(i=0;i<5;i++){
		printf("%d ", v[i]);
	}
	return 0;
}
