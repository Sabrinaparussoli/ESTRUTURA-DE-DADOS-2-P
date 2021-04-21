int buscalinear(int tama, int* v, int n){
	int i;
	for (i=0; i<tama; i++){
		if (n==v[i]){
			return i;
		}
	}
	return -1;
}

int buscaLinearOrdenada(int tama, int* v, int n){
	int i;
	for(i=0; i<tama; i++){
		if (n==v[i]){
			return i;
		}else if(n<v[i] ){
			return -1;
		}	
	}
	
	return -1;
}

int buscaBinaria(int tama, int* v, int n){
	int ini = 0;
	int fim = tama - 1;
	int meio;
	
	while(ini<=fim){
		meio = (ini + fim)/2;
		
		if(n < v[meio]){
			fim = meio - 1;
		}else if(n > v[meio]){
			ini = meio + 1;
		}else return meio;
	}
	
	return -1;
}
