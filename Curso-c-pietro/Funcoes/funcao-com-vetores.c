#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as funções para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como á ã ê 
#define TAM 3

void imprime1(int v[], int n){// aqui estou criando uma função ela receberá 2 dados do tipo inteiro (entre parenteses) e realizara a operação dentro das chaves 
	int i;
	for(i=0;i<n;i++){
		printf("%d", v[i]);
	}
};
//Aqui será criando uma variavel vetor de 5 espaços do tipo interiro (vale lembrar que oque esta dentro dos cochetes [] não é o valor e sim o tamanho do vetor)
void imprime2(int v[5]){//  repare que, como um valor será atribuido na variavel 'v', esse valor vem de outra variavel o nome da variavel 'v' é irrelevante

	int i;
	for(i=0;i<5;i++){
		printf("%d", v[i]);
	}
};

void imprime3(int *v, int n){// aqui estou criando uma função ela receberá 2 dados do tipo float (entre parenteses) e retornará um dado do tipo float. (return) 
	int i;
	for(i=0;i<n;i++){
		printf("%d", v[i]);
	}
};

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	int vet[5]  = {1,2,3,4,5};
	
	puts("Primeiro imprime:");
	imprime1(vet, 5); // Estou informando que os valores interios que a função imprime1 vai receber é vet e 5
	
	puts("\nSegundo imprime:");
	imprime2(vet);
	
	puts("\nTerceiro imprime:");
	imprime3(vet, 5);
	
}
