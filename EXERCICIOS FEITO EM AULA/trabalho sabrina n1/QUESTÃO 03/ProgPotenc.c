#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Potencia(int base, int pot){
	int result;
	if(pot>=1){
		result = pow(base,pot );			
	}

}

int main() {
	int num, exp, valor;
	char resp;
	do{
		printf("digite um numero: ");
		scanf("%i", &num);
		printf("digite um valor para o expoente: ");
		scanf("%i", &exp);
		valor=Potencia(num, exp);
		printf("O valor da base %i elevado ao expoente %i e: %i",num, exp, valor);
		printf("\n\n\n============\n\n\n");
		printf("DESEJA SAIR DO PROGRAMA? [S/N] \n\n");
		scanf("%s", &resp);
	}while(resp =='n');
}
