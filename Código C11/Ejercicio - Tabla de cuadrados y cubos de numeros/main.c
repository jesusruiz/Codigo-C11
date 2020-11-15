#include <stdio.h>

//Ejercicio Tabla de cuadrados y cubos de los diez pimeros numeros

int main(void) {

	printf("%s", "Numero");
	printf("%10s", "Cuadrado");
	printf("%7s", "Cubo");
	printf("%s", "\n------");
	printf("%10s", "--------");
	printf("%9s", "------\n");

	for (int i = 0; i < 11; i++) {
		printf("%d", i);
		printf("\t%d", i * i);
		printf("\t  %d\n", i * i * i);
	}
}