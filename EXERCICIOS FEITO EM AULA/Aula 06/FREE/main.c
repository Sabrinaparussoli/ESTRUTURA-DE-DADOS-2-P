#include <stdio.h>
#include <stdlib.h>

/* FREE libera a memoria*/

int main() {
	
	int *num = (int *) malloc(sizeof(int));
	*num = 999;
	free(num);
	
	printf("%i", *num);
	
	return 0;
}
