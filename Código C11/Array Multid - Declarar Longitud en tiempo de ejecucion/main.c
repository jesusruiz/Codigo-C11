//Array Multidimensional - Declarar un array en tiempo de ejecución, en vez de en tiempo de compilación en C99
//Esta característica no está soportada en Microsoft Visual C++.

#include <stdio.h>

//funciones prototipo
void imprimirArray1D(size_t tamano, int array[tamano]);
void imprimirArray2D(int fil, int col, int array[fil][col]);

int main(void) {

	printf("%s", "Introduzca el tamano para un array unidimensional 1-D: ");
	int tamanoArray;  //almacenar el tamaño del array de 1-D 
	scanf_s("%d", &tamanoArray);

	int array[tamanoArray];  //declarar array 1-D

	printf("%s", "Introduzca el numero de filas y columnas para un array multidimensional de 2-D: ");
	int filas1, columnas1;  //variables que almacenan el número de filas y columnas para un array de 2-D
	scanf_s("%d %d", &filas1, &columnas1);

	int array2D1[filas1][columnas1];  //declarar array 2-D

	printf("%s", "Introduzca el numero de filas y columnas para otro array multidimensional de 2-D: ");
	int filas2, columnas2;  //variables que almacenan el número de filas y columnas para otro array de 2-D
	scanf_s("%d %d", &filas2, &columnas2);

	int array2D2[filas1][columnas1];  //declarar otro array 2-D

	//comprobar el operador sizeof en un array de longitud variable
	printf("\nsizeof(array) produce un tamaño de array de %d bytes\n", sizeof(array));

	//asignar elementos del array 1-D de longitud variable
	for (size_t i = 0; i < tamanoArray; ++i) {
		array[i] = i * i;
	}

	//asignar elementos del array 2-D de longitud variable
	for (size_t i = 0; i < filas1; ++i) {
		for (size_t j = 0; j < columnas1; ++j) {
			array2D1[i][j] = i + j;
		}
	}

	//asignar elementos del segundo array 2-D de longitud variable
	for (size_t i = 0; i < filas2; ++i) {
		for (size_t j = 0; j < columnas2; ++j) {
			array2D2[i][j] = i + j;
		}
	}

	puts("\nArray unidimensional:");
	imprimirArray1D(tamanoArray, array);  //pasar el array de 1-D de longitud variable a función

	puts("\nPrimer array multidimensional:");
	imprimirArray2D(filas1, columnas1, array2D1);  //pasar el primer array de 2-D de longitud variable a función

	puts("\nSegundo array multidimensional:");
	imprimirArray2D2(filas2, columnas2, array2D2);  //pasar el segundo array de 2-D de longitud variable a función
}

void imprimirArray1D(size_t tamano, int array[tamano])
{
	 //imprimir contenido del array
	 for (size_t i = 0; i < tamano; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
}

void imprimirArray2D(int fil, int col, int array[fil][col])
{
	//imprimir contenido del array
	for (size_t i = 0; i < fil; ++i) {
		for (size_t j = 0; j < col; ++j) {
			printf("%5d", array[i][j]);
		}
		puts("");
	}
}