#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int v[5];// vetor de 5 posições de uma variavel do tipo inteiro
	
	float m;// variavel do tipo float, ou seja, permeni numeros com virgula
	
	v[0] = 50;/*aqui estou declarando valores as posição array das variaveis*/
	v[1] = 40;
	v[2] = 30;
	v[3] = 20;
	v[4] = 10;
	
	m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;// aqui sera realizado uma opeção de media aritimetica
	
	printf("Resultado: %.2f\n", m);// por fim aqui sera impresso
	return 0;
}
