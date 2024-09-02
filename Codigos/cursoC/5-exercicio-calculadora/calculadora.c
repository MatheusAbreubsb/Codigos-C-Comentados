#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como á ã ê 


/* Desenvolva um algoritmo que simule uma calculadora
Voce deve dar a opção de o usuário escolher entre:
1 - Somar; 2 - subtrair; 3 - Multiplicar; 4 - Dividir.
O usuario só consiguirá processar dois numeros inteiros por vez */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa

	int num1, num2, con; // Crio as variaveis
	
	printf("Insira o primeiro numero\n");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero\n");
	scanf("%d", &num2);
	
	printf("Selecione a operação\n");
	printf("Digite 1 para SOMAR\n");
	printf("Digite 2 para SUBTRAIR\n");
	printf("Digite 3 para MULTIPLICAR\n");
	printf("Digite 4 para DIVIDIR\n");
	scanf("%d", &con); //coloco o valor dentro da memoria para posteriormente checar a condição
	
	system("cls");// Limpo a tela
	
	
	switch(con){// Comparo a condição 
		case 1: 
			printf("A soma dos numeros é: %d\n", num1 + num2);
			break;
		case 2: 
			printf("A subtração dos numeros é: %d\n", num1 - num2);
			break;
		case 3: 
			printf("A multiplicação dos numeros é: %d\n", num1 * num2);
			break;
		case 4: 
			if(num2 == 0){
				printf("Não existe divisão por 0\n");
			}else{
				printf("A divisão dos numeros é: %d", num1 / num2);

			}
			break;	
		default:// se não digitar um numero entre 1 - 4 aparecera essa menssagem
			printf("Voce nao digitou um numero de 1 a 4 :/");
			break;		
	}
	
	system("pause");
	
	
	return 0;
}
