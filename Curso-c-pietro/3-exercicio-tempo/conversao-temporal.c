#include <stdio.h>
#include <stdlib.h>

/* Jeremias possui um cronometro que consegue
marcar o tempo apenas em segundos. Sabendo disso, 
desenvolva um algoritimo que receba o tempo cronometrado
em segundos, e diga quantas horas, minutos e segundos 
se passaram a partir do tempo cronometrado */

int main(int argc, char *argv[]) {
	
	int temini = 0, min = 0, hor = 0;// Aqui eu declaro as variaveis 
	
	printf("\n insira o tempo em segundos: \n"); // peço ao usuario iserir o tempo sem segundos
	scanf("%d", &temini);// coloco o tempo em segundos na variavel temini
	
	if(temini >= 3600){// verifico se tem segundos o suficiente para transformar em horas
		hor = temini/3600;// crio uma variavel que irá contar quantas horas tem no tempo passado
		temini = temini - (3600*hor);// retiro o numero de horas da variavel de segundos totais (temini)
	};
	
	if(temini >= 60){// verifico se tem segundos o suficiente para transformar em minutos
		min = temini/60;// crio uma variavel que irá alocar a quantidade de minutos
		temini = temini - (60*min);// retiro os minutos contados da variavel inicial
		
	};
	
	printf ("Horas: %d.\n", hor);// Imprimo a quantidade de horas
	printf ("mMinutos: %d.\n", min);// Imprimo a quantidade de menutos
	printf ("Segundos: %d.\n", temini);// Imprimo a quantidade de segundos
	
	system("pause");// Dou uma pausa para o sistema não apacagar a tela imediatamente caso o app tenha sido aberto por .exe
}
