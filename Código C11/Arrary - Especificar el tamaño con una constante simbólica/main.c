//Array - Especificar el tamaño de un array con una constante simbólica 
//y establecer los valores de los elementos con cálculos

#include <stdio.h>
#define TAMANO 5  //define una CONSTANTE SIMBÓLICA que establece el máximo tamaño del array


int main(void) {

	int numeros[TAMANO];  //Array que tiene 5 elementos

	for (size_t c = 0; c < TAMANO; c++) {  //establecer los valores de los elementos
		numeros[c] = 2 + 2 * c;
	}

	printf("%s%13s\n", "Elemento", "Valor");

	for (size_t c = 0; c < TAMANO; c++) {
		printf("%8u%13d\n", c, numeros[c]);
	}
}