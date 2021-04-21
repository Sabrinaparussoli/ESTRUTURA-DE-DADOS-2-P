int op,n1,n2;
float result;

void sair();

void menu(){

		do{
    		printf("\n\n\n");
			system("cls");
			printf("1 - Soma\n");
			printf("2 - Subtração\n");
			printf("3 - multiplicação\n");
			printf("4 - divisão\n");
			printf("5 - raiz quadrada\n");
			printf("6 - porcentagem\n");
			printf("7 - Sair do Sistema \n\n");
			printf("Digite sua opção = ");
			scanf("%i",&op);

			
			switch(op){
				case 1:
					printf("______ SOMA ______\n\n");
					printf("Entre os 2 numeros a serem processados: ");
    				scanf("%i%i", &n1, &n2);
					result = n1 + n2;
					printf("A soma dos produtos digitados foram: %f ", result);
					break;
				case 2:
					printf("______ SUBTRAÇÃO ______ \n\n");
					printf("Entre os 2 numeros a serem processados: ");
    				scanf("%i%i", &n1, &n2);
					result = n1 - n2;
					printf("A subtração dos produtos digitados foram: %f ", result);	
					break;
				case 3:
					printf("______ MULTIPLICAÇÃO ______\n\n");
					printf("Entre os 2 numeros a serem processados: ");
    				scanf("%i%i", &n1, &n2);
					result = n1 * n2;
					printf("A multiplicação dos produtos digitados foram: %f ", result);
					break;
				case 4:
					printf("______ DIVISÃO ______\n\n");
					printf("Entre os 2 numeros a serem processados: ");
    				scanf("%i%i", &n1, &n2);
					result = n1 / n2;
					printf("A divisção dos produtos digitados foram: %f ", result);
					break;	

				case 5:
					printf("______ RAIZ QUADRADA ______\n\n");
					printf("digite um numero: ");
					scanf("%i", &n1);
					result = sqrt(n1);
					printf("A raiz quadrada do numero %f : %f", n1,result);	
					break;
				case 6:
					printf("PORCENTAGEM");	
					break;
				case 7:
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
