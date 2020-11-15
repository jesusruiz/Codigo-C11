//Array - Recursividad Imprimir elementos de un array

#include <stdio.h>
#define TAMANO 8

//Funcion Prototipo
void imprimirArrayRecursivamente(int numeros[], int tam);

int main(void) {

	int numeros[TAMANO] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	imprimirArrayRecursivamente(numeros, TAMANO);
}

//Función imprimirArrayRecursivamente
void imprimirArrayRecursivamente(int numeros[], int tam) {

	if (tam == 0) {
		printf("");
	}
	else {
		if (tam > 0) {
			imprimirArrayRecursivamente(numeros, tam - 1);
			printf("%d ", numeros[tam - 1]);
		}
	}
}