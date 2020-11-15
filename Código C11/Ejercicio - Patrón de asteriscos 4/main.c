#include <stdio.h>

//Ejercicio - Patrón de asteriscos 4

int main(void) {

	unsigned int contadorLineas;
	unsigned int asteriscos;
	unsigned int espacios;

	printf("**********\n");
	for (contadorLineas = 1; contadorLineas <= 9; contadorLineas++) {
		for (espacios = 1; espacios <= contadorLineas; espacios++)
			printf("%s", " ");
		for (asteriscos = 9; asteriscos >= contadorLineas; asteriscos--) {
			printf("%s", "*");
		}
		printf("\n");
	}

	return 0;
}