#include <stdio.h>
#include <stdlib.h>

/* por se tratar de um array de string n�o � necessario o & no scanf */

int main() {
	
	char s[10]; // Criei uma varaiavel s com 10 posi��es, vale ressaltar que s� podera ser utilziado 9 espa�os pois o ultimo tera valor nulo(\0)
	
	printf("Digite algo (scanf convencional):\n");
	scanf("%s", s);
	fflush(stdin); // Essa op��o � importante para retirar o possivel lixo de memoria rezidual, permitindo corretamente novas entradas, na realidade ele limpa a memoria da varaivel
	
	printf("Resultado: %s\n\n", s);
	
	printf("Digite algo (scanf aprimorado):\n");
	scanf("%9[^\n]s", s);// aqui signifca que qualquer caractere que n�o seja \n ser� lido e colocado na string s
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	return 0;
}
