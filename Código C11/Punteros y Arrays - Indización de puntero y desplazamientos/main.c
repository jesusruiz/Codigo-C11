//Punteros y Arrays - Indizaci�n de puntero y desplazamientos
//Utilizando la indizaci�n y la notaci�n de punteros con arrays.

#include <stdio.h>
#define TAMANO_ARRAY 4

int main() {

	int b[] = { 10, 20, 30, 40 };  //Declarar e inicializar el array 'b' de tipos enteros
	int* bPtr = b;  //Crear un puntero llamado 'bPtr' que apunta al array 'b'

	//Imprimir array 'b' utilizando la notaci�n indizaci�n del array
	puts("Array b impreso con:\nNotacion indizacion del Array");

	//Bucle para recorrer el array 'b'
	for (size_t i = 0; i < TAMANO_ARRAY; ++i) {
		printf("b[%u] = %d\n", i, b[i]);
	}

	//Imprimir array 'b' utilizando el nombre del array y la notaci�n puntero/desplazamiento
	puts("\nNotacion Puntero/desplazamiento donde\n"
		 "el puntero es el nombre del aerray");

	//Bucle para recorrer el array b
	for (size_t offset = 0; offset < TAMANO_ARRAY; ++offset) {
		printf("*(b + %u) = %d\n", offset, *(b + offset));
	}

	//Imprimir array 'b' utilizando el puntero 'bPtr' y la notaci�n indizaci�n del array
	puts("\nNotacion indizacion puntero");
	
	//Recorrer bucle a trav�s del array b
	for (size_t i = 0; i < TAMANO_ARRAY; ++i) {
		printf("bPtr[%u] = %d\n", i, bPtr[i]);
	}

	//Imprimir array 'b' utilizando el puntero 'bPtr' y la notaci�n puntero/desplazamiento
	puts("\nPointer/offset notation");
	
	//Recorrer bucle a trav�s del array 'b'
	for (size_t offset = 0; offset < TAMANO_ARRAY; ++offset) {
		printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
	}
}