/*
Imprimir el valor 3.333333 como un valor long double con un signo (+ o -) 
en un campo de 20 caracteres con una precisión de 3.
*/

#include <stdio.h>

int main(void) {

	printf("%+20.3Lf\n", 3.333333);
}