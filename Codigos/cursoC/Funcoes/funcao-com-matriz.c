#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as fun��es para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 
#define TAM 3

void imprime(int m[][4], int n){
	int i, j;
	for(i = 0; i<n; i++){
		for(j=0;j<4;j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}


int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	int mat[3][4] = {{1,2,3,4},{50,60,70,80},{91,101,111,121}}; // aqui � criado e atribuido valores a minha matriz mat, cada grupo de cochetes dentro dos cochetes princiapais, representa umo preenchimento de uma linha
	imprime(mat,3); // mat ser� atribuido a M na minha fun��o e 3 ser� atribuido a n na minha fun��o

	
	

	
}
