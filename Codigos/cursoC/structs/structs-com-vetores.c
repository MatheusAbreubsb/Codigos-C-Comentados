#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as fun��es para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como � � � 
#define TAM 3

struct tipo_pessoa{// Aqui estou criando um novo tipo de dado, esse dado chama-se struct tipo_pessoa e ele � composto por diferentes tipos de dados
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa; // nessa linha estou redefinindo o nome struct tipo_pessoa para tipo_pessoa

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	//Criando e inicializando
	tipo_pessoa lista[TAM]; //Aqui temos um vetor nesse vetor tera 3 campos para cada tipo definido em tipo_pessoa
	// ou seja pode ser preenchidas e salvas 3 vezes os campos(idade, peso, nome) da variavel lista
	int i;
	
	
	for(i=0;i<TAM;i++){// Esse la�o de repeti��o ser� usado para preencher os campos de acordo com a posi��o do vetor
		printf("Insira os dados (%d): \n", i+1);
		puts("Nome: "); // puts � impress�o
		scanf("%50[^\n]s", &lista[i].nome);// ser� colocado oque foi digitado no campo lista.nome na posi��o i do vetor
		// Alem disso o scanf acima significa "leia at� 50 caracteres, enquanto o usuario n�o digitar \n(enter) eu continuo lendo, incluindo espa�os"
		fflush(stdin);// Essa op��o � importante para retirar o possivel lixo de memoria rezidual, permitindo corretamente novas entradas, na realidade ele limpa a memoria da varaivel
	
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("Peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
		
	}
	
	system("cls"); // Aqui a tela preta ser� limpa
	
	puts ("Seus dados:\n");
	for(i=0;i<TAM;i++){
		printf("-------------- Pessoa %d --------------\n", i+1);
		printf("\tNome: %s\n", lista[i].nome);// \t � uma impress�o de TAB
		printf("\tNome: %d\n", lista[i].idade);
		printf("\tNome: %.2f\n\n", lista[i].peso);
	}
	

	
}
