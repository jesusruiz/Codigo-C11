//Array - Especificar el tama�o de un array con una constante simb�lica 
//y establecer los valores de los elementos con c�lculos

#include <stdio.h>
#define TAMANO 5  //define una CONSTANTE SIMB�LICA que establece el m�ximo tama�o del array


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