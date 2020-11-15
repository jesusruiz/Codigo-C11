//Array - Calificador const para evitar modificación del array

//Para evitar que una función pueda modificar los valores de los elementos de una matriz, 
//C proporciona el calificador de tipo const (de "constante") 

#include <stdio.h>
#define TAMANO 5

void probarModificarArray(const int b[], size_t tam);

int main(void) {

	int a[TAMANO] = { 0, 1, 2, 3, 4 };

	//Valores de los elementos del array
	printf("%s\n", "Valores actuales del array:");

	for (size_t e = 0; e < TAMANO; e++) {
		printf("%d ", a[e]);
	}

	puts("");  //salto de línea

	//Llamada a la función modificarArray para intentar modificar los valores de los elementos del array
	probarModificarArray(a, TAMANO);
	
	//Imprimir valores de array tras el intento de modificación
	printf("%s\n", "Valores del array tras el intento de modificacion del array:");

	for (size_t e = 0; e < TAMANO; e++) {
		printf("%d ", a[e]);
	}
}

//Función modificarArray
void probarModificarArray(const int b[], size_t tam) {

	for (size_t e = 0; e < tam; e++) {
		b[e] *= 2;  //intento de multiplicación del elemento por 2
	}
}