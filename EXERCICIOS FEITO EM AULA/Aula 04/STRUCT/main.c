#include <stdio.h>
#include <stdlib.h>

/*Exemplo de struct */

struct cadastro{
	float cod;
	int tel, cpf;
	char nome[20], end[15];
};

struct users{
	int cod, tel, cpf;
	char nome[20], end[15];
};

int vet[3] = {333, 444, 888};
struct cadastro cad = {3.4, "Sabrina", "rua 999", 343434, 838383};
struct users cad2;

int main() {
	
	printf("entre com o nome: ";)
	gets(cad.nome); //
	
	cad2.cod = cad.cod
	
	printf("o valor de cad.cod = %i", cad2.cod, "\n\n");
	printf("o valor de cad.cod = %i", cad.cod, "\n");
	printf("o valor de cad.nome = %s", cad.nome),"\n";
	printf("o valor de cad.end = %s", cad.end,"\n");
	printf("o valor de cad.tel = %i", cad.tel,"\n");
	printf("o valor de cad.cpf = %i", cad.cpf,"\n");
	
	return 0;
}
