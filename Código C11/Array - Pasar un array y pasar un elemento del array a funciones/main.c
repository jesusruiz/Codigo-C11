//Array - Pasar un array y pasar un elemento del array a funciones

/*
Aunque los arrays completos se pasan por referencia, 
los elementos individuales de un array se pasan por valor exactamente del mismo modo que lo hacen las variables simples.
*/

#include <stdio.h>
#define TAMANO 5

//funciones prototipo
void modificarArray(int b[], size_t tam);  //pasamos un array de tipo entero y el tamaño del array
void modificarElemento(int e);  //pasamos el valor de un elemento del array

int main(void) {
	
	int a[TAMANO] = { 0, 1, 2, 3, 4 };  //Inicializar array a de tipo entero

	puts("Efectos de pasar todo el array por referencia:\n\nLos "
		"valores originales del array son:");

	//imprimir valores originales del array
	for (size_t i = 0; i < TAMANO; ++i) {
		printf("%3d", a[i]);
	}

	puts(""); //imprimir una nueva línea

	modificarArray(a, TAMANO);  //Pasar el array a por referencia para modificarlo

	puts("Los valores modificados del array son:");
	
	//imprimir valores modificados del array
	for (size_t i = 0; i < TAMANO; ++i) {
		printf("%3d", a[i]);
	}

	//imprimir valor del elemento a[3]
	printf("\n\n\nEfectos de pasar un elemento del array "
		"por valor:\n\nEl valor de a[3] es %d\n", a[3]);

	//modificar elemento a[3]
	modificarElemento(a[3]);  //pasar el elemento a[3] del array por valor

	//imprimir el valor del elemento a[3]
	printf("El valor de a[3] es %d\n", a[3]);
}


//En la función modificarArray, "b" apunta en memoria al array original "a"
void modificarArray(int b[], size_t tam)
{
	//multiplicar cada valor del array por 2
	for (size_t j = 0; j < tam; ++j) {
		b[j] *= 2;  //en realidad se modifica el array original
	}
}

//En la función modificarElemento, "e" es una copia local del elemento 
//a[3] del array pasado desde la función principal
void modificarElemento(int e)
{
	//multiplicar parámetro por 2
	printf("Valor del elemento modificado %d\n", e *= 2);
}