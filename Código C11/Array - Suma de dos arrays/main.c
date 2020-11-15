//Array - Suma de dos arrays

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int pnumeros[] = { 2, 4, 6, 8, 10 };
	int inumeros[] = { 3, 5, 7, 9, 11 };

	int resultados[6];

	//Conocer el número de elementos que tiene cada array
	int numElementospnumeros = sizeof(resultados) / sizeof(int);  // 20 entre 4 = 5
	int numElementosinumeros = sizeof(resultados) / sizeof(int);  // 20 entre 4 = 5

	//imprimir los valores almacenados en el array pnumeros
	for (size_t p = 0; p < numElementospnumeros -1; p++) {
		printf("%6d", pnumeros[p]);
	}

	puts("");  //nueva línea

	//imprimir los valores almacenados en el array inumeros
	for (size_t i = 0; i < numElementospnumeros - 1; i++) {
		printf("%6d", inumeros[i]);
	}

	puts("");  //nueva línea

	for (size_t r = 0; r < 5; r++) {
		resultados[r] = pnumeros[r] + inumeros[r];
		printf("%6d", resultados[r]);
	}

}