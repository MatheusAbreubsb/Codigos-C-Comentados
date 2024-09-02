#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba 4 numeros inteiros, calcule e mostre a soma*/

int main() {
	
	int i, num = 0, som = 0;
	
	for(i=0;i<=3;i++){
		printf("Insira o numero %d\n ", i+1);
		scanf("%d", &num);
		som += num; 
	}
	
	
	printf("Soma total %d \n", som);
	system("pause");

}
