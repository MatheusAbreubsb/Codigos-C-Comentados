#include <stdio.h>
#include <stdlib.h>

/* */

int main() {
	
	int i;
	for(i=1;i<=10;i++){
		if(i==8){
			continue; /*O continue � usado para ignorar tudo que est� adiante no codigo
			nesse caso 8 n�o ser� impresso e a fun��o break, n�o ser� executada caso para
			ser executado a fun��o break i seja igual 8*/
		}
		
		printf("%d ", i);
		
		
		if(i==8){
			break; /*o break � utilizado para interroper todo o la�o, incluindo o for*/
		}
	}
	return 0;
}
