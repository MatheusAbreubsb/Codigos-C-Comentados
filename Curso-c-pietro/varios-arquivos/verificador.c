#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como á ã ê 


/* Esse programa tem como objetivo imprimir e indentificar os parametros inseridos do lado de fora do arquivo/projeto
tendo como exemplo o CMD, ou seja, se voce chamar esse executavel via CMD e colocar algum paramentro alem do .exe 
ele irá contar quantos paramentros foram inseridos(incluindo o .exe) e irá imprimir tais paramentros */

int main(int argc, char *argv[]) {// argv é um conjunto de conjunto de caracteres, isso significa que nele vai pode ter um conjunto com varias palavras(string)  
	
		setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa

	
	int i;
	
	if(argc > 1){// argc conta o numero de paramentros, se acaso voce só chamar o .exe o numeros de paramentros será 1
		printf("Foram inseridos %d argumentos:\n", argc);
		for(i=0; i<argc; i++){
			printf("%s\n", argv[i]);
		}
	} else {
		printf("Não foram inseridos argumentos no programa.\n");
	}

}
