#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as fun��es para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 
#define TAM 3

float maior(float num1, float num2);// aqui tempos o prototipo da fun��o que ser� declarado na linha 24 abaixo do main 



int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	float x, y, m; // aqui � criado 3 variaveis do tipo float
	printf("Insira um valor:\n"); 
	scanf("%f", &x);
	printf("Insira mais um valor:\n");
	scanf("%f",&y);
	m = maior(x,y); // Aqui � chamada a fun��o 'maior' e ele realizar a fun��o, retorna um valor e atribui a m
	printf("Maior: %.2f\n", m);

}

float maior(float num1, float num2){// aqui estou criando uma fun��o ela receber� 2 dados do tipo float (entre parenteses) e retornar� um dado do tipo float. (return) 
	if(num1 > num2)
		return num1;
	else
		return num2;
		
		
		
};
