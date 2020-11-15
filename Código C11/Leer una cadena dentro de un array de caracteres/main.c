/*
Leer una cadena dentro de un array de caracteres.
*/

#include <stdio.h>

int main(void) {

	char cadena[9];

	printf("%s", "Introduzca una cadena no mayor de 8 caracteres: ");
	fgets(cadena, 9, stdin);
	printf("La cadena introducida es %s\n", cadena);
}