#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // Essa biblioteca possui as funções para trabalhar com string como 'strcpy'
#include <locale.h> // Essa biblioteca permite colocar formato locais (abnt) para letras como á ã ê 
#define TAM 50

struct tipo_pessoa{// Aqui estou criando um novo tipo de dado, esse dado chama-se struct tipo_pessoa e ele é composto por diferentes tipos de dados
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa; // nessa linha estou redefinindo o nome struct tipo_pessoa para tipo_pessoa

int main() {
	setlocale(LC_ALL, "Portuguese"); // utilizando a biblioteca locale, eu indico que vou trabalhar com caracteres da ligua portuguesa
	
	//Criando e inicializando
	tipo_pessoa pes = {0, 0.0, "Teste"}; // Toda variavel do tipo "tipo_pessoa" deve ser prencido com os campos definidos na struct
	// pes é o nome da varuavel e tipo_pessoa é o tipo da variavel 
	
	printf("Inicio:\n");
	printf("pes.idade: %d\n", pes.idade);// aqio temos impressão do que esta na variavel considerando uma variavel denro de outra variavel
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s", pes.nome);
	
	//Atribuindo novos valores aos campos via codigo
	
	pes.idade = 10;// aqui estou atribuindo diretamente com o codigo o valor dentro da variavel
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto");
	
	printf("\n Alterando os campos via codigo:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//Solicitando inserções via teclado
	
	printf("\nInsira um numero inteiro:\n");
	scanf("%d", &pes.idade);// aqui está sendo inserindo valores na variavel com o executavel em andamento
	printf("Insira um numero real:\n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("Insira uma palavra:\n");
	scanf("%s", &pes.nome);
	
	printf("\nAlterando com dados do usuario:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso %.2f\n", pes.peso);
	printf("pes.nome %s\n", pes.nome);
	
}
