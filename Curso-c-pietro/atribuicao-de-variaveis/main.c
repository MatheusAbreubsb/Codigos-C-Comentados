#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saida de dados"

/* O define, define uma variavel constante */

int main() {
	printf("%s\n", texto); //%s imprime a variavel do tipo cadeia de caracteres (string)
	
	int idade = 0;
	float altura =0.0;
	char nome [50] =""; // Como char pode alocar apenas um valor, é necessario colocar definir a quantidade de caracteres desejado
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	printf("Digite o nome:\n");
	scanf("%s", nome); // colocamos o %s que se refere a string ou seja cadeia de caracteres
	// pois iremos alocar uma cadeia de caracteres na varaiavel nome
	// Não é necessario, colocar o '&' em vetores 
	
	printf("Dados informados:\n");
	printf("Idade: %d. \n", idade);
	printf("Altura: %.2f. \n", altura);
	printf("Nome: %s. \n", nome);
	
	return 0;
}
