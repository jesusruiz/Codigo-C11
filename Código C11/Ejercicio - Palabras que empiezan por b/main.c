/*
Ejercicio - Palabras que empiezan por la letra 'b'
*/

#include <stdio.h>

int main(void) {

	char cadena[100];

	while (1) {
		printf("%s", "Introduzca una cadena:\n");
		gets(cadena);

		if (cadena[0] == 'b') {
			printf("%s\n", cadena);
		}
	}
}