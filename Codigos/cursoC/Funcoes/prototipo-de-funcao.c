#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as funções para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como á ã ê 
#define TAM 3

float maior(float num1, float num2);// aqui tempos o prototipo da função que será declarado na linha 24 abaixo do main 



int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	float x, y, m; // aqui é criado 3 variaveis do tipo float
	printf("Insira um valor:\n"); 
	scanf("%f", &x);
	printf("Insira mais um valor:\n");
	scanf("%f",&y);
	m = maior(x,y); // Aqui é chamada a função 'maior' e ele realizar a função, retorna um valor e atribui a m
	printf("Maior: %.2f\n", m);

}

float maior(float num1, float num2){// aqui estou criando uma função ela receberá 2 dados do tipo float (entre parenteses) e retornará um dado do tipo float. (return) 
	if(num1 > num2)
		return num1;
	else
		return num2;
		
		
		
};
