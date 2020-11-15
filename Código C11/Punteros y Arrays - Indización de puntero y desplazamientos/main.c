//Punteros y Arrays - Indización de puntero y desplazamientos
//Utilizando la indización y la notación de punteros con arrays.

#include <stdio.h>
#define TAMANO_ARRAY 4

int main() {

	int b[] = { 10, 20, 30, 40 };  //Declarar e inicializar el array 'b' de tipos enteros
	int* bPtr = b;  //Crear un puntero llamado 'bPtr' que apunta al array 'b'

	//Imprimir array 'b' utilizando la notación indización del array
	puts("Array b impreso con:\nNotacion indizacion del Array");

	//Bucle para recorrer el array 'b'
	for (size_t i = 0; i < TAMANO_ARRAY; ++i) {
		printf("b[%u] = %d\n", i, b[i]);
	}

	//Imprimir array 'b' utilizando el nombre del array y la notación puntero/desplazamiento
	puts("\nNotacion Puntero/desplazamiento donde\n"
		 "el puntero es el nombre del aerray");

	//Bucle para recorrer el array b
	for (size_t offset = 0; offset < TAMANO_ARRAY; ++offset) {
		printf("*(b + %u) = %d\n", offset, *(b + offset));
	}

	//Imprimir array 'b' utilizando el puntero 'bPtr' y la notación indización del array
	puts("\nNotacion indizacion puntero");
	
	//Recorrer bucle a través del array b
	for (size_t i = 0; i < TAMANO_ARRAY; ++i) {
		printf("bPtr[%u] = %d\n", i, bPtr[i]);
	}

	//Imprimir array 'b' utilizando el puntero 'bPtr' y la notación puntero/desplazamiento
	puts("\nPointer/offset notation");
	
	//Recorrer bucle a través del array 'b'
	for (size_t offset = 0; offset < TAMANO_ARRAY; ++offset) {
		printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
	}
}