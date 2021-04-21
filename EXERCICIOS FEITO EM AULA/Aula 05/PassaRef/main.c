#include <stdio.h>
#include <stdlib.h>

void incrementa(int *num){ // * referencia
	*num = *num +1;
}

int main() {
	int num;
	
	num = 12;
	incrementa(&num);
	
	printf("END num = %d\n", &num);
	printf("Conteudo num = %d", num);
	
	return 0;
}
