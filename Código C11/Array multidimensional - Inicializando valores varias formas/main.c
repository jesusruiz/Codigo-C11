//Array de dos dimensiones. Inicializando los valores de los elementos de varias formas

#include <stdio.h>

void imprimirArray(int a[][3]);  //función prototipo

//la función main comienza con la ejecución del programa
int main(void) {

	int array1[2][3] = {
							{1, 2, 3},
							{4, 5, 6}
					   };

	puts("Los valores existentes en el array1 por fila son:");
	imprimirArray(array1);

	int array2[2][3] = { 1, 2, 3, 4, 5 };

	puts("Los valores existentes en el array2 por fila son:");
	imprimirArray(array2);

	int array3[2][3] = {
							{1, 2},
							{4}
	};

	puts("Los valores existentes en el array2 por fila son:");
	imprimirArray(array3);
}

//Función que imprime un array de dos filas y tres columnas
void imprimirArray(int a[][3]) {

	//bucle que recorre las filas
	for (size_t i = 0; i <= 1; ++i) {

		//imprimir valores de las columnas
		for (size_t j = 0; j <= 2; ++j) {
			printf("%d ", a[i][j]);
		}

		printf("\n");  //imprimir nueva línea
	}
}