/*
Imprimir el entero sin signo 40000
justificado a la izquierda en un campo de 15 dígitos con 8 dígitos.
*/

#include <stdio.h>

int main(void) {

	printf("%-15.8u", (unsigned)40000);
	printf("%s", "|");  //prueba de los 15 digitos de anchura de campo
}