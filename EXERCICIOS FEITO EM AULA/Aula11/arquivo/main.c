#include <stdio.h>
#include <stdlib.h>


void gravarArq();
void lerArq();
void alterarArq();

int main() {
	
	//gravarArq();
	lerArq();
	alterarArq();
	return 0;
}

void gravarArq(){
	FILE* F;
	
	F = fopen("dados.txt", "w");
	if(F == NULL){
		printf("ERRO AO ABRIR O ARQUIVO!!!\n\n");
		system("pause");
	}
	
	char dados[12];
	printf("digite um valor: ");
	fgets(dados, 11, stdin);

	int i;
	for(i=0; i<12; i++){
		fputc(dados[i], F);
	}
	
	fclose(F);
}

void lerArq(){
	FILE* F;
	
	F = fopen("dados.txt", "r");
	
	if( F == NULL){
		printf("ERRO AO ABRIR O ARQUIVO!!");
		system("pause");
		exit(0);
	}else{
		printf("\n\n ARQUIVO CARREGADO NA MEMORIA!!! \n\n");
	}
	
	char c = fgetc(F);
	while(c != EOF){
		printf("%c",c );
		c = fgetc(F);
	}
	
}

void alterarArq(){
	FILE* F;
	F =  fopen("dados.txt", "a");
	
	if( F == NULL){
		printf("ERRO AO ALTERAR O ARQUIVO!!!");
		system("pause");
		exit(0);
   }
   
	char dados[12];
	printf("digite um valor: ");
	fgets(dados, 12, stdin);
	
	int i;
		for(i=0; i<12; i++){
			fputc(dados[i], F);
	}
   fclose(F);
}


