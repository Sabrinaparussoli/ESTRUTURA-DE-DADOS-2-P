#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

/* */

int main() {
	Arv* a1 = criar('m', criarvazia(), criarvazia() );
	Arv* a2 = criar('a', criarvazia(), a1);
	Arv* a3 = criar('k', criarvazia(), criarvazia());
	Arv* a4 = criar('p', a3, a2);
	return 0;
}
