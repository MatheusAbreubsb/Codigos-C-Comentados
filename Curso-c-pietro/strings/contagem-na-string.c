#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as fun��es para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 

#define N 100 // define o tamanho de N que por ser define n�o podera ser manipulado

/*  */

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	char s[N]; // criando as variaveis
	int i;;
	
	printf("Digite um texto: \n");
	gets(s); // O conteudo serpa colocado na variavel s
	i = strlen(s); // O tamanho da variavel s ser� colocado na variael i
	
	printf("\n Tamano do texto: %d\n\n", i); 
	
	printf("Impress�o de posi��o a posi��o:\n");
	for(i=0; i<strlen(s); i++){ // para i=0, i menor que o tamnho de 0; i incrementa
	
		printf("%c", s[i]);// sera impresso s letra a letra
	}
	


	
	
	return 0;
}
