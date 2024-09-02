#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 


/* Desenvolva um algoritmo que simule uma calculadora
Voce deve dar a op��o de o usu�rio escolher entre:
1 - Somar; 2 - subtrair; 3 - Multiplicar; 4 - Dividir.
O usuario s� consiguir� processar dois numeros inteiros por vez */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa

	int num1, num2, con; // Crio as variaveis
	
	printf("Insira o primeiro numero\n");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero\n");
	scanf("%d", &num2);
	
	printf("Selecione a opera��o\n");
	printf("Digite 1 para SOMAR\n");
	printf("Digite 2 para SUBTRAIR\n");
	printf("Digite 3 para MULTIPLICAR\n");
	printf("Digite 4 para DIVIDIR\n");
	scanf("%d", &con); //coloco o valor dentro da memoria para posteriormente checar a condi��o
	
	system("cls");// Limpo a tela
	
	
	switch(con){// Comparo a condi��o 
		case 1: 
			printf("A soma dos numeros �: %d\n", num1 + num2);
			break;
		case 2: 
			printf("A subtra��o dos numeros �: %d\n", num1 - num2);
			break;
		case 3: 
			printf("A multiplica��o dos numeros �: %d\n", num1 * num2);
			break;
		case 4: 
			if(num2 == 0){
				printf("N�o existe divis�o por 0\n");
			}else{
				printf("A divis�o dos numeros �: %d", num1 / num2);

			}
			break;	
		default:// se n�o digitar um numero entre 1 - 4 aparecera essa menssagem
			printf("Voce nao digitou um numero de 1 a 4 :/");
			break;		
	}
	
	system("pause");
	
	
	return 0;
}
