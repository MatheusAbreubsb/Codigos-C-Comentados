#include <stdio.h>
#include <stdlib.h>

/* para amplicar o conhecimento dessa aula, pesquise "sequência de escape linguagem c" e "specificador de formato em c" */

int main() {
	printf("Oi, tudo bem? tenho 6 anos e programo. \n");// \n pula uma linha
	printf("Valor inteiro: %d. \n",10);// %d imprime inteiro de base decimal
	printf("Valor real: %f. \n",3.14159265);// %f imprime valores com casas decimais
	printf("Valor real com apenas duas casas: %.2f. \n",3.14159265);// %.2f especifica duas casas decimais que deverão aparecer após a virgula
	printf("Dado de texto: %c. \n",'a');// %c imprime um unico caracter
	printf("Dado de texto: %s. \n", "testando");//%s imprime uma cadeia de caracteres 
	
}
