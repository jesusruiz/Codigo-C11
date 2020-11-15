#include <stdio.h>

//Ejercicio - Patrón de asteriscos 2

int main(void) {

	unsigned int contador;
	unsigned int asteriscos;

	for (contador = 1; contador <= 10; contador++) {
		for (asteriscos = contador; asteriscos <= 10; asteriscos++) {
			printf("%s", "*");
		}
		printf("%s", "\n");
	}
}