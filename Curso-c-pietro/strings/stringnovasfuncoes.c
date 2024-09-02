#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as fun��es para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 

#define N 20 // define o tamanho de N que por ser define n�o podera ser manipulado

/*  */

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	char origem[N] = {"Ol�, mundo!"}; // aqui eu estou colocando os chars dentro de origem
	char destino[N];
	
	printf ("Antes do strcpy:\n");
	puts(origem); // lembre-se puts � impress�o
	puts(destino);
	
	strcpy(destino, origem); // o strcpy colocar� dentro de destino oque est� em origem
	puts(origem);
	puts(destino);
	
	
	return 0;
}
