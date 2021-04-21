#include <stdio.h>
#include <stdlib.h>

int Maiorq(int n1, int n2, int n3){

	if((n1>n2)&&(n1 > n3)){
		n2 = n1;
		n3 = n1;
	}if((n2>n3) && (n2 > n3)){
		n3 = n2;
		n3 = n2;
	}if((n3 > n1) && (n3 > n2)){
		n1 = n3;
		n2 = n3;
	}

}

int main() {
	
	int a, b, c, nMaior;
	char resp;
	
	do{
		printf("Digite o numero 1:  ");
		scanf("%i", &a);
		printf("Digite o numero 2:  ");
		scanf("%i", &b);
		printf("Digite o numero 3:  ");
		scanf("%i", &c);

		nMaior = Maiorq(a,b,c);
		printf("O maior numero digitado foi %i: ", nMaior);
	
		printf("\n\n\n============\n\n\n");
		printf("DESEJA SAIR DO PROGRAMA? [S/N] \n\n");
		scanf("%s", &resp);
	
	}while(resp == 'n');

}
