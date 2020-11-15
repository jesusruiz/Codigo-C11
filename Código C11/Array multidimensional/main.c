//Declaración e incialización de un array multidimensional

#include <stdio.h>

int main(void) {

	//Declaramos e inicializamos array de 2 dimensiones de 3 elementos cada dimensión
	//Este array tiene dos filas y tres columnas:
	//fila[0]columna[0]   fila[0][columna1]   fila[0][columna2]
	//fila[1]columna[0]   fila[1][columna1]   fila[1][columna2]
	int num[2][3] = {
						{ 1, 2, 3 },
						{ 4, 5, 6 }
					};

	int numElementosPrimerArray = sizeof(num) / sizeof(num[0]);
	int numElementosSegundoArray = sizeof(num[0]) / sizeof(num[0][0]);

	printf("%d\n", numElementosPrimerArray);  //imprimir el número de elementos del primer array = 2
	printf("%d\n", sizeof(num[0]) / sizeof(num[0][0]));  //imprimir el número de elementos del segundo array = 3

	printf("\n%s\n", "Elementos del primer array:");
	for (size_t i = 0; i <= numElementosPrimerArray; i++) {
		printf("%d ", num[0][i]);
	}

	puts("");  //imprimir nueva línea

	printf("\n%s\n", "Elementos del segundo array:");
	for (size_t i = 0; i <= numElementosPrimerArray; i++) {
		printf("%d ", num[1][i]);
	}

	puts("");  //imprimir nueva línea
}