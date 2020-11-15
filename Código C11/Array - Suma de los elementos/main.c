//Array - Suma de elementos

#include <stdio.h>
#define TAMANO 12

int main(void) {

	int num[TAMANO] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };  //Array de 12 elementos
	int total = 0;  //Suma de los elementos

	for (size_t c = 0; c < TAMANO; c++) {
		total += num[c];
	}

	printf("La suma de los elementos del array es: %d\n", total);
}