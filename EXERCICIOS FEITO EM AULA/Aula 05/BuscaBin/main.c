#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"


int main() {
	int vet[] = {3,5,7,9,13};
	int tama =  sizeof(vet) / sizeof(int);
	
	printf("%i \n", buscalinear(tama, vet, 13));
	printf("%i \n", buscaLinearOrdenada(tama, vet, 7));
	printf("%i \n", buscaBinaria(tama, vet, 9));
	
	
	return 0;
}

