#include <stdio.h>
#include <stdlib.h>

/* semelhante ao o while porem o bloco de comandos dentro do do
ser� executado pelomenos uma vez*/

int main() {
	
	int i=1;
	
	do{
		printf("%d ", i);
		i++;
	}while(i <= 10);
	
	return 0;
}
