#include <stdio.h>
#include <stdlib.h>

/* Malloc() => aloca dinamicamente uma variavel */

//char nome[50];
char *nome;


int main() {
	nome = malloc(sizeof(char));

	gets(nome);

	printf("\n\n o tamanho de nome  = %i bytes", sizeof(nome));
	
	return 0;
}
