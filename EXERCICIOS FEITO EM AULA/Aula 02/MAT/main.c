#include <stdio.h>
#include <stdlib.h>

/* Desenvolver um programa que leia uma matriz de 3x3 e imprima na tela
as linhas pares da matriz lida. */

int l, c, mat[3][3];

int main() {
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			printf("Digite um valor para a matriz[%i][%i] = ",l,c);
			scanf("%i", &mat[l][c] );
		}
	}
	
	printf("\n\n");
	
	for(l=0; l<3; l=l+2){
		for(c=0; c<3; c++){
			printf("\nOs valores para a matriz [%i][%i] = %i", l,c, mat[l][c]);
		}
	}
	return 0;
}
