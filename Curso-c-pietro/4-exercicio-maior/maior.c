#include <stdio.h>
#include <stdlib.h>
#include <locale.h>// permite a utiliza��o do setlocale

/* Fa�a um programa que receba dois
n�meros e mostre o maior deles.
Caso eles seja iguais, deve-se mostrar a 
menssagem "os numeros s�o iguais" */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese"); // Permite caracteristisca exclusiva do alfabeto portugues, como acentos
	int num1, num2;// cria dois numeros inteiros
	
	printf("Insira o primeiro numero\n");
	scanf("%d", &num1);
	printf("Insira o segundo numero \n");
	scanf("%d", &num2);
	
	if(num1 == num2){// compara as duas informa��es
		printf("Os n�meros s�o iguais");
	}else {// caso n�o seja 
		if(num1 > num2){
			printf("O maior numero � %d", num1);
		}else{
			
			printf("O maior numero � %d", num2);
			
		}
	}
	
	return 0;
}
