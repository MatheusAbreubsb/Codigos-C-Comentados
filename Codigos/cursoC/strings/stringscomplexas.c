#include <stdio.h>
#include <stdlib.h>


int main(){
	char s[10]; // Crie uma variavel de nome s como array de 10 posi��es
	
	printf("Digite algo (leitura pelo gets):\n");// Ser� impresso na tela oque diz em pring f, \n significa que � para pular uma linha
	gets(s); // sera colocado oque for digitado na variavel s sem limita��o, oque n�o � recomendado
	fflush(stdin);// sera limpo as informa��es da memoria do teclado
	
	puts("Resultado:"); // puts imprime oque � digitado
	puts(s); // aqui ser� impresso oque esta dentro de s
	puts(""); // aqui n�o sera impresso nada, sera util para pular uma linha
	
	printf("Digite algo (leitura pelo fgets):\n");
	fgets(s, 10, stdin);// aqui oque for digitado, sera colocado em s, � colocado tambem o tamanho da variavel e ele reserva o ultimo espa�o para \0 automaticamente, 
	// tambem � informado ao final "stdin" que � no caso a entrada padr�o, ou seja, o teclado
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
	puts("");
	
	return 0;
	
	}
