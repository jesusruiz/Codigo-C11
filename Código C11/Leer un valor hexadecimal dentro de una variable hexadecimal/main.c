/*
Leer un valor hexadecimal dentro de una variable hexadecimal.
*/

#include <stdio.h>

int main(void) {

	int numero;

	printf("Introduzca un valor: ");
	scanf_s("%d", &numero);
	printf("%#X\n", numero);

}