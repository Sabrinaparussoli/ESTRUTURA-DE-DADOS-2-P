#include <stdio.h>
#include <stdlib.h>

/*  EXEMPLO DE FUN��ES NA LINGUAGEM C */

int tmp;
void msg();

int main() {
	
	msg();
	
	tmp = soma();
	printf("%i \n\n", tmp);
	
	tmp = somaNum(6, 4);
	printf("%i ", tmp);
	
	return 0;
}
int somaNum(int n1, int n2){ //fun��o que retorna valor
	
	return n1+n2;
}

int soma(){ //fun��o que retorna valor
	int num1=2, num2=5, resp = num1+num2;
	return resp;
}

void msg(){ //fun��o que nao retorna a nada
	printf("ALERTA DE 1 ! \n");
	printf("ALERTA DE 2 ! \n");
	printf("ALERTA DE 3 ! \n");	
}




