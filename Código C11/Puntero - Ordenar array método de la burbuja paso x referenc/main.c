//Punteros - Ordenar elementos de un array.
//Método de la burbuja (paso por referencia)

//Establecer valores en una matriz, ordenar los valores en orden ascendente e imprimir la matriz resultante.

#include <stdio.h>
#define TAMANO 10

//Función prototipo
//Función que recibe un puntero 'array' constante que apunta a un entero.
void metodoBurbuja(int* const array, const size_t tam); 

int main(void) {

	//Inicializar array 'a'
	int a[TAMANO] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	puts("Elementos del array en su orden original");

	//Bucle para recorrer el array 'a'
	for (size_t i = 0; i < TAMANO; ++i) {
		printf("%4d", a[i]);
	}

	metodoBurbuja(a, TAMANO); //ordenar el array

	puts("\nElementos del array ordenados en orden ascendente");

	//Bucle para recorrer el array 'a'
	for (size_t i = 0; i < TAMANO; ++i) {
		printf("%4d", a[i]);
	}
	
	puts("");
}

//Función metodoBurbuja
void metodoBurbuja(int* const array, const size_t tam) {

	//Función intercambiar() que recibe un primer elemento puntero que apunta a un entero y
	//un segundo segundo elemento puntero que apunta a un entero
	void intercambiar(int* element1Ptr, int* element2Ptr);  //función prototipo

	//Bucle para controlar el número de pases
	for (unsigned int pase = 0; pase < TAMANO - 1; ++pase) {

			//Bucle para controlar el número de comparaciones durante cada pasada
			for (size_t j = 0; j < TAMANO - 1; ++j) {
				
				//intercambiar elementos adyacentes si están en el orden incorrecto
				if (array[j] > array[j + 1]) {
					intercambiar(&array[j], &array[j + 1]);
			}
		}
	}
}

//Función intercambio
//Intercambia los valores en las ubicaciones de memoria a las que apuntan los punteros 
//elemento1Ptr y elemento2Ptr
void intercambiar(int* elemento1Ptr, int* elemento2Ptr)
{
	int auxiliar = *elemento1Ptr;
	*elemento1Ptr = *elemento2Ptr;
	*elemento2Ptr = auxiliar;
}