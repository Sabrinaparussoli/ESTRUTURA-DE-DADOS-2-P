#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float raiz(float n1){
	float rest;
	rest = sqrt(n1);
	return  rest;
	
}
int main() {
	float num1, r, result;
	char resp;
	
	do{
		printf("Digite a raiz quadrada: ");	
		scanf("%f", &num1);
		
		r = raiz(num1);

		printf("A raiz quadrada do numero digitado: %f ", r);
	
		printf("\n\n\n============\n\n\n");
		printf("DESEJA SAIR DO PROGRAMA? [S/N] \n\n");
		scanf("%s", &resp);
		
	}while(resp == 'n');
}

