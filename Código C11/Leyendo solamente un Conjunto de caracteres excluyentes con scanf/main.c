/*
Leyendo solamente un Conjunto de caracteres excluyentes con scanf()

El conjunto de escaneo también se puede utilizar para explorar caracteres que no estén contenidos 
en el conjunto de exploración utilizando un conjunto de exploración invertido.

Para crear un conjunto de escaneo invertido, coloque un signo de intercalación (^) entre corchetes 
antes de los caracteres de escaneo. 

Esto hace que se almacenen los caracteres que no aparecen en el conjunto de escaneo. 
Cuando se encuentra un carácter contenido en el conjunto de exploración invertido, la entrada termina.
*/

#include <stdio.h>

int main(void) {

	char z[9];  //definir array de 9 caracteres como máximo (incluyendo el caracter fin de cadena '\0'

	printf("%s", "Introduzca una cadena: ");
	scanf_s("%8[^aeiou]", z, 9);  //conjunto de escaneo invertido
								  //introducir solamente en el array, los caracteres no incluidos entre corchetes (vocales)
	                              //se dejan de introducir caracteres en el array ante la primera entrada de una vocal

	printf("Las consonantes que introdujo antes de introducir la primera vocal fueron \"%s\"\n", z);
}