#include <stdio.h>
#include <stdlib.h>
#include <locale.h>// permite a utilização do setlocale

/* Faça um programa que receba dois
números e mostre o maior deles.
Caso eles seja iguais, deve-se mostrar a 
menssagem "os numeros são iguais" */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese"); // Permite caracteristisca exclusiva do alfabeto portugues, como acentos
	int num1, num2;// cria dois numeros inteiros
	
	printf("Insira o primeiro numero\n");
	scanf("%d", &num1);
	printf("Insira o segundo numero \n");
	scanf("%d", &num2);
	
	if(num1 == num2){// compara as duas informações
		printf("Os números são iguais");
	}else {// caso não seja 
		if(num1 > num2){
			printf("O maior numero é %d", num1);
		}else{
			
			printf("O maior numero é %d", num2);
			
		}
	}
	
	return 0;
}
