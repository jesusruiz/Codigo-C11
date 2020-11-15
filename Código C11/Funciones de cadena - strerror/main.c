/*
Función de cadena - strerror()

La función strerror() toma un número de error y crea una cadena de mensaje de error. 

Se devuelve un puntero a la cadena. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	printf("%s\n", strerror_s(2));
}