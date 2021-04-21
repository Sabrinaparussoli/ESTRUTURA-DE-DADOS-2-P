#include <stdio.h>
#include <stdlib.h>

/*  */

int *num;

int main() {
	
	num = (int *) malloc(3 * sizeof(int));
	*(num+1) = 88;
	*(num+2) = 99;
	
	printf("\n\n o tamanho de num+1 = %i \n\n", sizeof(*num+1));
	printf("O conteudo de num+1 =  %i ", *(num+1));
	printf("\n\n o tamanho de nun+2 = %i \n\n", sizeof*(num+2));
	printf("O conteudo de num+2 =  %i ", *(num+2));
	printf("\n\n o tamanho de nun+3 = %i \n\n", sizeof*(num+3));
	printf("O conteudo de num+3 =  %i ", *(num+3));
	
	return 0;
}
