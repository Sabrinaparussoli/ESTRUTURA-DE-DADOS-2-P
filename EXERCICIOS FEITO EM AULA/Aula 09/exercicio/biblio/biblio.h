void gravarArq(){
	FILE *F;
	F = fopen("cadastroARQ\\arquivo.txt", "w");
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



