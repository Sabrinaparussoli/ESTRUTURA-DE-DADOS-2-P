#include <stdio.h>
#include <stdlib.h>

/* */

int num, result;

int main() {
	printf("digite um numero inteiro: ");
	scanf("%i", &num);
	
	result = fatorial(num);
	
	printf("o fatorial %i", result);
	
	return 0;
}

int fatorial(int x){ //recursividade � chamar a fun��o dentro da fun��o
	int resp;
	
	if (x == 0){
		resp = 1;
	}else{
		resp = x *  fatorial (x - 1);
	}
	return resp;
}
