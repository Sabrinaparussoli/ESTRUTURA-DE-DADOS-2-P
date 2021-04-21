#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um programa que leia um vetor de 8 elementos e 
imprima o vetor em ordem inversa*/

int vet[8], i;

int main() {
	
	for(i=0; i<=8; i++){
		printf("Digite o primeiro numero %i: ", i);
		scanf("%i", &vet[i]);
	}
	
	for(i=8; i>=0; i=i-1){
		
		printf("%i\n", vet[i]);
	}
	return 0;
}
