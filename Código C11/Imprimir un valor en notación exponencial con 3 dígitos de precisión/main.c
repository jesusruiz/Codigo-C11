/*
Imprimir 123.456789 en notaci�n exponencial con un signo (+ o -) y 3 d�gitos de precisi�n.
*/

#include <stdio.h>

int main(void) {

	printf("%+.3e\n", 123.456789);  //se imprime +1.235e+02
}