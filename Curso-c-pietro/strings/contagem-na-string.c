#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as funções para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como á ã ê 

#define N 100 // define o tamanho de N que por ser define não podera ser manipulado

/*  */

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	char s[N]; // criando as variaveis
	int i;;
	
	printf("Digite um texto: \n");
	gets(s); // O conteudo serpa colocado na variavel s
	i = strlen(s); // O tamanho da variavel s será colocado na variael i
	
	printf("\n Tamano do texto: %d\n\n", i); 
	
	printf("Impressão de posição a posição:\n");
	for(i=0; i<strlen(s); i++){ // para i=0, i menor que o tamnho de 0; i incrementa
	
		printf("%c", s[i]);// sera impresso s letra a letra
	}
	


	
	
	return 0;
}
