#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as fun��es para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 
#define TAM 3

void imprime1(int v[], int n){// aqui estou criando uma fun��o ela receber� 2 dados do tipo inteiro (entre parenteses) e realizara a opera��o dentro das chaves 
	int i;
	for(i=0;i<n;i++){
		printf("%d", v[i]);
	}
};
//Aqui ser� criando uma variavel vetor de 5 espa�os do tipo interiro (vale lembrar que oque esta dentro dos cochetes [] n�o � o valor e sim o tamanho do vetor)
void imprime2(int v[5]){//  repare que, como um valor ser� atribuido na variavel 'v', esse valor vem de outra variavel o nome da variavel 'v' � irrelevante

	int i;
	for(i=0;i<5;i++){
		printf("%d", v[i]);
	}
};

void imprime3(int *v, int n){// aqui estou criando uma fun��o ela receber� 2 dados do tipo float (entre parenteses) e retornar� um dado do tipo float. (return) 
	int i;
	for(i=0;i<n;i++){
		printf("%d", v[i]);
	}
};

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	int vet[5]  = {1,2,3,4,5};
	
	puts("Primeiro imprime:");
	imprime1(vet, 5); // Estou informando que os valores interios que a fun��o imprime1 vai receber � vet e 5
	
	puts("\nSegundo imprime:");
	imprime2(vet);
	
	puts("\nTerceiro imprime:");
	imprime3(vet, 5);
	
}
