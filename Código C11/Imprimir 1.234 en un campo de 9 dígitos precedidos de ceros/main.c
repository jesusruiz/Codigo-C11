/*
Imprimir 1.234 en un campo de 9 dígitos precedidos de ceros
*/

#include <stdio.h>

int main(void) {

	printf("%09.3lf\n", 1.234);  //imprime 00001.234
}