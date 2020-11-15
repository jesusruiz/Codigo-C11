/*
Leer caracteres en un array n hasta que se encuentre un carácter no digito.
*/

#include <stdio.h>

int main(void) {

	char n[10];

	printf("%s", "Introduzca una cadena menor de 10 caracteres: ");
	scanf_s("%[0123456789]", n, 10);
	printf("La cadena introducida es %s\n", n);
}