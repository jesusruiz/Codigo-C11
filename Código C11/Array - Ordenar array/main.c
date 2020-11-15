//Array - Ordenar elementos de un array

#include <stdio.h>
#define TAMANO 7

int main(void) {

	int num[TAMANO] = { 4, 2, 1, 8, 6, 3, 0 };

	int aux;

	printf("%s\n", "Valores del array original:");

	for (size_t e = 0; e < TAMANO; e++) {
		printf("%d ", num[e]);
	}

	puts("");  //salto de línea

	//Ordenar los elementos de menor a mayor
	for (size_t e = 0; e < TAMANO; e++) {
		//solamente hace falta recorrer el array en este segundo bloque hasta el penúltimo elemento (TAMANO - 1)
		for (size_t j = 0; j < TAMANO - 1; j++) {  
			if (num[j] > num[e]) { 
				aux = num[j];
				num[j] = num[e];
				num[e] = aux;
			}
		}
	}

	printf("%s\n", "Valores del array ordenado:");

	for (size_t e = 0; e < TAMANO; e++) {
		printf("%d ", num[e]);
	}
}