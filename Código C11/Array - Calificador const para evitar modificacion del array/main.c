//Array - Calificador const para evitar modificaci�n del array

//Para evitar que una funci�n pueda modificar los valores de los elementos de una matriz, 
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

	puts("");  //salto de l�nea

	//Llamada a la funci�n modificarArray para intentar modificar los valores de los elementos del array
	probarModificarArray(a, TAMANO);
	
	//Imprimir valores de array tras el intento de modificaci�n
	printf("%s\n", "Valores del array tras el intento de modificacion del array:");

	for (size_t e = 0; e < TAMANO; e++) {
		printf("%d ", a[e]);
	}
}

//Funci�n modificarArray
void probarModificarArray(const int b[], size_t tam) {

	for (size_t e = 0; e < tam; e++) {
		b[e] *= 2;  //intento de multiplicaci�n del elemento por 2
	}
}