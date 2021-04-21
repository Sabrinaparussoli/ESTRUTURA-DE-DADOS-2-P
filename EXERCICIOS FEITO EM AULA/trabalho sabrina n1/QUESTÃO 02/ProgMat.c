#include <stdio.h>
#include <stdlib.h>



int main() {
	int mat[5][5], l, c, qtd;
	
	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
			printf("Digite um valor para a matriz[%i][%i] = ",l,c);
			scanf("%i", &mat[l][c] );
		}
	}

	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
			if(mat[l][c]%2==0){
				qtd = qtd+1;
			}
		}
	}
	printf("Foram inseridos %i pares", qtd);


	return 0;
}
