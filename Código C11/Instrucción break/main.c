#include <stdio.h>

//Instrucci�n break

int main(void) {

	unsigned int x;

	//En este c�digo solamente se imprimir�an los n�meros del 1 al 4
	//Al llegar al n�mero 5 la instrucci�n break, hace que se salte a la siguiente instrucci�n que se encuentra 
	//despu�s del bucle for
	for (x = 1; x <= 10; x++) {
		if (x == 5) {
			break;
		}
		printf("%u ", x);
	}
	
	printf("\nEl bucle se interrumpio cuando x == %u\n", x);
	return 0;
}