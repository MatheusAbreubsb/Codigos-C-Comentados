#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as funções para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como á ã ê 


/*  */

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //Aqui temos uma matriz com 3 linhas e 3 colunas com valores ja distribuidos
	int i, j; // criamos 2 variaveis do tipo inteiro
	

	printf("Imprimindo a primeira linha:\n");
	for(j=0; j<3; j++){// nesse for sera impresso a primeira linha (indice 0)
		printf("%d ", mat[0][j]);
	}
	
	printf("\n\nImprimindo a matriz toda: \n");
	for(i=0; i<3; i++){// nesse for sera indicado qual linha imprimir
		for(j=0; j<3; j++){
		printf("%d ", mat[i][j]);//aqui é indicado qual coluna de qual linha imprimir
		
		}	
	}
	
	return 0;
}
