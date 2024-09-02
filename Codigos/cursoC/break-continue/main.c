#include <stdio.h>
#include <stdlib.h>

/* */

int main() {
	
	int i;
	for(i=1;i<=10;i++){
		if(i==8){
			continue; /*O continue é usado para ignorar tudo que está adiante no codigo
			nesse caso 8 não será impresso e a função break, não será executada caso para
			ser executado a função break i seja igual 8*/
		}
		
		printf("%d ", i);
		
		
		if(i==8){
			break; /*o break é utilizado para interroper todo o laço, incluindo o for*/
		}
	}
	return 0;
}
