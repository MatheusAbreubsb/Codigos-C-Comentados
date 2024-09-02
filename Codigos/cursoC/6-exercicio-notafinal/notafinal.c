#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 
/*  A nota final de um estudante � calculada a
partir de tr�s notas atribuidas respectivamente a
um trabalho de laboratorio, a uma avalia��o semestral
e a um exame final. A m�dia das tr�s notas mencionadas 
anteriormente obedece aos pesos a seguir:

Nota						Peso
Trabalho de laborat�rio 	2
Avalia��o semestral			3
Exame final					5

Fa�a um programa que receba as tr�s notas, calcule
e mostre a m�dia ponderada e o conceito que segue a tabela abaixo:

M�dia ponderada			Conceito
8,1 ~ 10,0 				A
7,1 ~ 8,0				B
6,1 ~ 7,0				C
5,1 ~ 6,0				D
0,0 ~ 5,0				E

*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	
	float nota_trabalho, nota_avaliacao, nota_exame;
	float nota_trabalhoponderada, nota_avaliacaoponderada, nota_exameponderada;
	float media_finalponderada;
	char conceito;
	
	printf("insira a nota do Trabalho de laborat�rio: ");
	scanf("%f", &nota_trabalho);
	
	printf("\ninsira a nota de Avalia��o semestral: ");
	scanf("%f", &nota_avaliacao);
	
	printf("\ninsira a nota do Exame final: ");
	scanf("%f", &nota_exame);
	
	nota_trabalhoponderada = nota_trabalho*2;
	nota_avaliacaoponderada = nota_avaliacao*3;
	nota_exameponderada = nota_exame*5;
	
	media_finalponderada = (nota_trabalhoponderada + nota_avaliacaoponderada + nota_exameponderada)/10;
	
	if(media_finalponderada >= 0 && media_finalponderada <= 5.0){
		conceito = 'E'	;	 
		printf("\n seu conceito �: %c\n", conceito);
		printf("\nSua nota final �: %.2f\n", media_finalponderada);
	} else{
		if(media_finalponderada >= 5.1 && media_finalponderada <= 6.0){
			conceito = 'D'	;	 
			printf("\n seu conceito �: %c\n", conceito);
			printf("\nSua nota final �: %.2f\n", media_finalponderada);
		}else {
			if(media_finalponderada >= 6.1 && media_finalponderada <= 7.0){
				conceito = 'C'	;	 
				printf("\n seu conceito �: %c\n", conceito);
				printf("\nSua nota final �: %.2f\n", media_finalponderada);
			}else{
				if(media_finalponderada >= 7.1 && media_finalponderada <= 8.0){
					conceito = 'B'	;	 
					printf("\n seu conceito �: %c\n", conceito);
					printf("\nSua nota final �: %.2f\n", media_finalponderada);
					
				}else{
					if(media_finalponderada >= 8.1 && media_finalponderada <= 10.0){
					conceito = 'A'	;	 
					printf("\n seu conceito �: %c\n", conceito);
					printf("\nSua nota final �: %.2f\n", media_finalponderada);	
					}
				}
			}
		}
	}
	
	system("pause");
	
	return 0;
}
