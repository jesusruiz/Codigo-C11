#include <stdio.h>

//Ejercicio - Patrón de asteriscos

int main(void) {

	unsigned int contador;
	unsigned int asteriscos;

	for (contador = 1; contador <= 10; contador++) {
		for (asteriscos = 1; asteriscos <= contador; asteriscos++) {
			printf("%s", "*");
		}
		printf("%s", "\n");
	}
}