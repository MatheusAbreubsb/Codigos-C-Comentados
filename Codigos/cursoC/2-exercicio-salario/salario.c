#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba o salario de um fucionaro
e o percentual de aumento, calcule e mostre o
valor do aumento e o novo salario */

int main(int argc, char *argv[]) {
	
	float sal, alm, y; // criando variaveis do tipo float para
	
	printf("Insira o salario\n");
	scanf("%f", &sal);
	printf("Insira o aumento em porcentagem\n");
	scanf("%f", &alm);
	
	y = alm/100;// transformando o valor em porcentagem
	printf("Valor do aumento: %.2f.\n", sal*y);
	
	
	sal = sal + sal*y;// Modificando o salario
	printf("Novo salario %.2f", sal);
	
	
	return 0;
}
