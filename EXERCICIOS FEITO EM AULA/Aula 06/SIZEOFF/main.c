#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* utilização da função sizeof : Retorna o tamanho em Byte de uma variavel
	tipos de dados da linguagem C: 
		float = 4bytes
		char =1byte(por caractere) 
		int = 4bytes
		double = 8bytes
		short = 2bytes
		bool = 1byte
*/

int numInt;
float numFloat;
double numDouble;
short numShort;
bool val;
char texto[15];

int main() {
	
	printf("Esta variavel ocupa do tipo int = %i bytes \n", sizeof(numInt));
	printf("Esta variavel ocupa do tipo float = %i bytes \n", sizeof(numFloat));
	printf("Esta variavel ocupa do tipo double = %i bytes \n", sizeof(numDouble));
	printf("Esta variavel ocupa do tipo short = %i bytes \n", sizeof(numShort));
	printf("Esta variavel ocupa do tipo bool = %i bytes \n", sizeof(val));
	printf("Esta variavel ocupa do tipo char = %s bytes \n", sizeof(texto));
	
	
	return 0;
}
