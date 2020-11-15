#include <stdio.h>

//Ejercicio - Patrón de asteriscos 3

int main(void) {

	unsigned int contador;
	unsigned int asteriscos;
	unsigned int espacios;

	for (contador = 1; contador <= 10; contador++) {
		for (espacios = 9; espacios >= contador; espacios--) {
			printf("%s", " ");
		}
		for (asteriscos = 1; asteriscos <= contador; asteriscos++) {
			printf("%s", "*");
		}
	printf("%s", "\n");
	}
	
	return 0;
}