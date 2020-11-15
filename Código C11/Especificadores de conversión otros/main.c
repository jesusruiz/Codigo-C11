/*
Otros epecificadores de conversión
*/

#include <stdio.h>

int main(void) {

	int x = 12345;  //inicializar un valor de tipo entero
	int *ptr = &x;  //asignar la dirección de memoria de x al puntero de tipo entero ptr

	printf("El valor de ptr es %d\n", *ptr);
	printf("La direccion de x es %p\n\n", &x);

	printf("Imprimir un %% en una cadena de control de formato\n");
}