#include <stdio.h>

//Instrucción break

int main(void) {

	unsigned int x;

	//En este código solamente se imprimirían los números del 1 al 4
	//Al llegar al número 5 la instrucción break, hace que se salte a la siguiente instrucción que se encuentra 
	//después del bucle for
	for (x = 1; x <= 10; x++) {
		if (x == 5) {
			break;
		}
		printf("%u ", x);
	}
	
	printf("\nEl bucle se interrumpio cuando x == %u\n", x);
	return 0;
}