/*
Funci�n de cadena - strerror()

La funci�n strerror() toma un n�mero de error y crea una cadena de mensaje de error. 

Se devuelve un puntero a la cadena. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	printf("%s\n", strerror_s(2));
}