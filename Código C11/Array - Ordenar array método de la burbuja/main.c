//Array - Ordenar array método de la burbuja
//Ordenar los valores de un array en orden ascendente

#include<stdio.h>
#define TAMANO 10

int main(void) {

	//inicializar array a
	int a[TAMANO] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	puts("Valores de los elementos del array en su orden original inicial:");

	//imprimir los valores originales iniciales de los elementos del array
	for (size_t i = 0; i < TAMANO; ++i) {
		printf("%4d", a[i]);
	}


	//método de la burbuja
	//bucle que controla el número de pasadas
	for (size_t i = 1; i < TAMANO; i++) {

		//bucle que controla el número de comparaciones por pase
		for (size_t i = 0; i < TAMANO - 1; ++i) {

			//compara los elementos adyacentes y los cambia de posición
			//si el primer elemento es mayor que el segundo elemento
			if (a[i] > a[i + 1]) {
				int auxiliar = a[i];
				a[i] = a[i + 1];
				a[i + 1] = auxiliar;
			}
		}
	}

	puts("\nValores de los elementos ordenados de manera ascendente:");

	//imprimir array ordenado de manera ascendente
	for (size_t i = 0; i < TAMANO; ++i) {
		printf("%4d", a[i]);
	}

	puts("");

}