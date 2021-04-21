typedef struct arv
{
	char info;
	struct arv* esq;
	struct arv* dir;	
}Arv;

Arv* criarvazia(){
	return NULL;
}

Arv* criar(char c, Arv* sae, Arv* sad){
	Arv* p = (Arv*)malloc(sizeof(Arv));
	p->info = c;
	p->esq = sae;
	p->dir = sad;
	
	return p;
}

int vazia(Arv* a){ //returna 1 se a arvores se estiver vazia e 0 se estiver com elementos filhos
	return a == NULL;
}

void imprimir(Arv* a){
	if(!vazia(a)){
		printf("%c", a->info);
		imprimir(a->esq);
		imprimir(a->dir);
	}
}

Arv* liberar(Arv* a){
	if (!vazia(a)){
		liberar(a->esq);
		liberar(a->dir);
		free(a);
	}else{
		printf("\nArvore vazia!!!\n");
	}
}
