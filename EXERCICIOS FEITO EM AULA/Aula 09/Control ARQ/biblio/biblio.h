void gravarArq(){
	FILE *F;
	F = fopen("arq\\arquivo.txt", "w");
	if(F == NULL){
		printf("Erro ao abrir o arquivo \n\n");
		system("pause");
		exit(0);
	}else{
		printf("Arquivo criado!!!");
	}
	char dados[32]="Gravacao de dados no arquivo W";
	int i = 0;
	for(i=0; i<strlen(dados); i++){
		fputc(dados[i], F);
	}
	fclose(F);
}

void lerArq(){
	FILE *F;
	F = fopen("arq\\arquivo.txt", "r");
	if (F==NULL){
		print("ERRO AO LER O ARQUIVO!!!");
		system("pause");
		exit (0);
	}else{
		print("ARQUIVO CARREGADO!!!\n\n\n");
	}
	char c = fget(F);
	while(c!=EOF){ //enquanto c nao for final de arquivo, ou seja, irá ler e imprimir cada caractere
		printf("%c", c);
		c=fgetc(F);
	}
}

void addrArq(){
	FILE *F;
	F = fopen("arq\\arquivo.txt", "a");
	if(F == NULL){
		printf("Erro ao abrir o arquivo \n\n");
		system("pause");
		exit(0);
	}
	
	char dados[32]="\n Aula de estrutua de dados, A";
	int i = 0;
	for(i=0; i<strlen(dados); i++){
		fputc(dados[i], F);
	}
	fclose(F);
}
