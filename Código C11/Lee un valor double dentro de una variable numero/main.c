/*
Lee un valor doble dentro de una variable numero.
*/

#include <stdio.h>

int main(void) {

	double numero = 0.0;
	
	printf("%s", "Introduzca un valor de tipo double: ");
	scanf_s("%lf", &numero);

	printf("El valor introducido es: %f\n", numero);
	printf("El valor introducido es: %.1f\n", numero);
}