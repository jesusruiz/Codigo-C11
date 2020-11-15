/* Ejercicio - Imprimir cadena en mayusculas y minusculas */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

	char cadena[100];

	printf("%s", "Introduzca una frase de menos de 100 caracteres: ");
	fgets(cadena, sizeof cadena, stdin);

	printf("\nLa cadena introducida es:\n%s", cadena);
	
	printf("\nLa cadena introducida convertida a mayusculas es:\n");

	for (int i = 0; i < strlen(cadena); ++i) {

		printf("%c", toupper(cadena[i]));
	}

	printf("\nLa cadena introducida convertida a minusculas es:\n");

	for (int i = 0; i < strlen(cadena); ++i) {

		printf("%c", tolower(cadena[i]));
	}
}