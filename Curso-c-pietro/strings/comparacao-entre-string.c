#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as fun��es para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 

#define N 50 // define o tamanho de N que por ser define n�o podera ser manipulado

/*  */

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	char hardText[N] = {"/exit"}; // aqui estou declarando uma variavel string e atribuindo valores
	char senha_usr[N]; // essa variavel ser� utilizada para compara��o
	int ok;
	
	printf("Digite um texto: \n");
	gets(senha_usr); // o texto digitado sera salvo na variavel senha_usr
	
	ok = strcmp(hardText, senha_usr); // dentro da variavel ok ser� colocado 0 ou 1
	// sera colocado 0 se for iguais pois o strcmp ele retornar 0 comparando uma string com outra
	// sera colado 1 se forem diferentes
	
	if(ok == 0){ // utilizamos if para testar a condi��o, no caso se ok for = 0 ent�o imprima textos iguais, se n�o imprima textos diferentes
		printf("Textos iguais. \n");
	}else{
		printf("Textos diferentes. \n");
	}

	
	
	return 0;
}
