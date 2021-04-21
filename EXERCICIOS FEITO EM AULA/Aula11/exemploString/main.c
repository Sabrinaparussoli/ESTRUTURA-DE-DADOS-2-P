#include <stdio.h>
#include <stdlib.h>

char nome[20];


int main() {
	printf("Digite o seu nome:");
	//scanf("%s", &nome);
	//      var, tam, entrada padrao
	fgets(nome, 20, stdin);
	printf("Ola %s seja bem vinda!!!", nome);
	return 0;
}
