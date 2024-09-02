#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as fun��es para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 

#define N 20 // define o tamanho de N que por ser define n�o podera ser manipulado

/*  */

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	char s1[N] = {"L�gica de"}; // aqui eu estou colocando os chars dentro de origem
	char s2[N] = {" programa��o"};
	
	printf("Antes do strcpy:\n");
	printf("str1: %s\n", s1);
	printf("str2: %s\n", s2);
	
	
	strcat(s1, s2); // Pega o conteudo em s2, colocar com s1 e armazena em s1
	puts(s1); 

	
	
	return 0;
}
