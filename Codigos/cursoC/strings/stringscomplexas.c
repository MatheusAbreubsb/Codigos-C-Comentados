#include <stdio.h>
#include <stdlib.h>


int main(){
	char s[10]; // Crie uma variavel de nome s como array de 10 posições
	
	printf("Digite algo (leitura pelo gets):\n");// Será impresso na tela oque diz em pring f, \n significa que é para pular uma linha
	gets(s); // sera colocado oque for digitado na variavel s sem limitação, oque não é recomendado
	fflush(stdin);// sera limpo as informações da memoria do teclado
	
	puts("Resultado:"); // puts imprime oque é digitado
	puts(s); // aqui será impresso oque esta dentro de s
	puts(""); // aqui não sera impresso nada, sera util para pular uma linha
	
	printf("Digite algo (leitura pelo fgets):\n");
	fgets(s, 10, stdin);// aqui oque for digitado, sera colocado em s, é colocado tambem o tamanho da variavel e ele reserva o ultimo espaço para \0 automaticamente, 
	// tambem é informado ao final "stdin" que é no caso a entrada padrão, ou seja, o teclado
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
	puts("");
	
	return 0;
	
	}
