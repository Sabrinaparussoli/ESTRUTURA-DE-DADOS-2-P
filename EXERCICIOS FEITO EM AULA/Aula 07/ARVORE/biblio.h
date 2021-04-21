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
