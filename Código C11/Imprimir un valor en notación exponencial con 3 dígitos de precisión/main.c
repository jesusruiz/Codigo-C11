/*
Imprimir 123.456789 en notación exponencial con un signo (+ o -) y 3 dígitos de precisión.
*/

#include <stdio.h>

int main(void) {

	printf("%+.3e\n", 123.456789);  //se imprime +1.235e+02
}