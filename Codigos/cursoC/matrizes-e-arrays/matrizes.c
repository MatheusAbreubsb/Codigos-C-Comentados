#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as funções para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como á ã ê 


/*  */

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	int mat[3][3]; //Aqui temos uma matriz com 3 linhas e 3 colunas
	int exp[3][3][3]; // aqui teremos 3 matrizes cada uma com 3 linhas e 3 colunas
	int exp2[3][3][3][2];// aqui temos 3 conjuntos cada conjunto tem 3 matrizes com 3 linhas e 2 colunas 
	
	mat[0][0] = 1;// na primeira linha e na primeira coluna colocamos o valor 1
	mat[0][1] = 2;// na primeira linha e na segunda coluna colocamos o valor 2
	mat[0][2] = 3;
	
	mat[1][0] = 4;// na segunda linha e na primeira coluna colocamos o valor 4
	mat[1][1] = 5;
	mat[1][2] = 6;
	
	mat[2][0] = 7;
	mat[2][1] = 8;
	mat[2][2] = 9;
	
	printf("Imprimindo a primeira linha:\n");
	printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);
	
	
	return 0;
}
