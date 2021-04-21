int op, i;
char resp, nome[30], data[8];
int  rg, cpf;
 

void sair();

void menu(){

		do{
    		printf("\n\n\n");
			system("cls");
			printf("1 - GRAVAR\n");
			printf("2 - ALTERAR\n");
			printf("3 - LER\n");
			printf("4 - EXCLUIR ARQUIVO\n");
			printf("5 - SAIR DO SISTEMA \n\n");
			printf("Digite sua opção = ");
			scanf("%i",&op);

			
			switch(op){
				case 1:
					printf("______ GRAVANDO ARQUINDO ______\n\n");
						gravarArq();
					break;
				case 2:
					printf("______ ALETARANDO ARQUIVO ______ \n\n");
						alterarArq();
					break;
				case 3:
					printf("______ LENDO ARQUIVO ______\n\n");
						lerArq();
					break;
					
				case 4:
					printf("______ EXCLUINDO ARQUIVO ______\n\n");
						excluirArq();
					break;
					
				case 5:
					sair();
					break;
				default:
					printf("Digite uma opção válida");
					break;
			}
			getch();
		}while(op != 5);
}

void sair(){
	system("cls");
	printf("___________________________________\n");
	printf("Programa desenvolvido por LTDA.\n");
	printf("Obrigado por utilizar o sistema !!!\n");
	printf("___________________________________");
	getch();
	system("cls");
}

void gravarArq(){
	FILE* F;
	F = fopen("dados.txt", "w");
	if(F == NULL){
		printf("ERRO AO ABRIR O ARQUIVO!!!\n\n");
		system("pause");
	}
	
	do{
		memset(&nome, 0, sizeof(nome));
		printf("Nome completo: ");
		scanf("%s", &nome);
		printf("CPF: ");
		scanf("%i", &cpf);
		printf("RG:  ");
		scanf("%d", &rg);
		memset(&data, 0, sizeof(data));
		printf("Data: ");
		scanf("%s", &data);
	
		printf("============\n\n\n");
		printf("DESEJA CONTINUAR COM O CADASTRO? [S/N] \n\n");
		scanf("%s", &resp);
		
		fprintf(F, "Nome: ");
		for(i=0; i<30; i++){
			fputc(nome[i], F);
		}
		
		fprintf(F, "\n");
		fprintf(F, "CPF: ");
		fprintf(F, "%i", cpf);
		fprintf(F, "\n");
		fprintf(F, "RG: ");
		fprintf(F, "%i", rg);
		fprintf(F, "\n");
		fprintf(F, "Data de Nasc.: ");
		for(i=0; i<8; i++){
			fputc(data[i], F);
		}
		fprintf(F, "\n");
		fprintf(F, "============\n\n");
	}while (resp == 's');
	
	
	fclose(F);
}

void alterarArq(){
	FILE* F;
	F = fopen("dados.txt", "a");
	if(F == NULL){
		printf("ERRO AO ALTERAR ARQUIVO!!!\n\n");
		system("pause");
	}
	
		do{
		memset(&nome, 0, sizeof(nome));
		printf("Nome completo: ");
		scanf("%s", &nome);
		printf("CPF: ");
		scanf("%i", &cpf);
		printf("RG:  ");
		scanf("%d", &rg);
		memset(&data, 0, sizeof(data));
		printf("Data: ");
		scanf("%s", &data);
	
		printf("============\n\n\n");
		printf("DESEJA CONTINUAR COM O CADASTRO? [S/N] \n\n");
		scanf("%s", &resp);
		
		fprintf(F, "Nome: ");
		for(i=0; i<30; i++){
			fputc(nome[i], F);
		}
		
		fprintf(F, "\n");
		fprintf(F, "CPF: ");
		fprintf(F, "%i", cpf);
		fprintf(F, "\n");
		fprintf(F, "RG: ");
		fprintf(F, "%i", rg);
		fprintf(F, "\n");
		fprintf(F, "Data de Nasc.: ");
		for(i=0; i<8; i++){
			fputc(data[i], F);
		}
		fprintf(F, "\n");
		fprintf(F, "============\n\n");
	}while (resp == 's');
	
	
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

void excluirArq(){
	int op;
	printf("Deseja realmente excluir as informações? \n");
	printf("Digite (1) para SIM (2) para NÂO ");
	scanf("%d",&op);
	if(op == 1){
		gravarArq;
		FILE* F;
		F = fopen("dados.txt", "w");
		printf("Excluido com sucesso!!!");
		fclose(F);
	}
	getch();
}

