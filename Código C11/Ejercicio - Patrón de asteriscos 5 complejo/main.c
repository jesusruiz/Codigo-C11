#include <stdio.h>

int main(void) {

	int espacios;
	int asteriscos;

		for (int ciclo = 1; ciclo <= 5; ciclo++) {
			for (espacios = 4; espacios >= ciclo; espacios--) {
				printf("%s", " ");
			}
			for (asteriscos = 1; asteriscos <= ciclo; asteriscos++) {
				printf("%s", "*");
				if (asteriscos != 1 || asteriscos % 2 == 0) {
					printf("%s", "*");
				}
			}
			for (espacios = 4; espacios >= ciclo; espacios--) {
				printf("%s", " ");
			}
			printf("\n");
		}

}