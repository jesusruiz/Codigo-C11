//Prueba Fibonacci
//  0, 1, 1, 2, 3, 5, 8, 13, 21, 34...

#include <stdio.h>

int main(void) {

	int anterior = 0;
	int siguiente = 1;
	int auxiliar;

	printf("%d, %d, ", anterior, siguiente);

	for (int contador = 0; contador < 6; contador++) {
	
		printf("%d, ", siguiente);

		auxiliar = siguiente;
		siguiente = siguiente + anterior;
		anterior = auxiliar;
	}
}
