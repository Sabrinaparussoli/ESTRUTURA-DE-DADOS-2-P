#include <stdio.h>
#include <stdlib.h>

/* */
struct cadastro{
	float cod;
	char data[10];
	int qtda[15];
	char desc[20];
};

char resp;
struct cadastro prod;

int main() {
	
	do{
		printd("======CADASTRO DE PRODUTOS======\n\n");
		printf("Entre com o cod do produto: %i" );
		scanf("%i", &prod.cod);
		printf("Entre com a quantidade: ");
		scanf("%i", &prod.qtda);
		printf("descrição do produto: ");
		scanf("%s", &prod.desc);
		printf("data : ");
		scanf("%s", &prod.data);
		
		printf("============\n\n\n");
		printf("Codigo = %i", prod.cod, "\n");
		printf("Descrição = %s", prod.desc, "\n");
		printf("quantidade = %i", prod.qtda, "\n");
		printf("data = %s", prod.data, "\n");
		
		printf("============\n\n\n");
		printf("DESEJA CONTINUAR COM O CADASTRO? [S/N] \n\n");
		scanf("%s", &resp);
		
	}while (resp == 'n');


}
