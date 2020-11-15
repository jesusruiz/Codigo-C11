//Array - Funci�n sumar elementos de un array. Paso de un array a una funci�n.

#include <stdio.h>
#define TAMANO 5

int suma(int num[], size_t tam);  //funci�n prototipo que recibe el array numeros[] y el valor de TAMANO

int main(void) {

	int total = 0;  //Variable que recibir� la suma total obtenida por la funci�n suma()

	int numeros[TAMANO] = { 0, 1, 2, 3, 4 };  //Array de 5 elementos

	//Imprimir los valores de los elementos que componen el array
	printf("%s", "Valores de los elementos del array: ");
	
	for (size_t e = 0; e < TAMANO; e++) {

		//comprobamos si no se trata del �ltimo elemento del array para que a�ada una coma tras cada valor del n�mero
		if (e != TAMANO - 1) {
			printf("%d, ", numeros[e]);
		}   // si fuese el �ltimo valor, no imprimir�amos ninguna coma despu�s del valor del n�mero
		else {
			printf("%d", numeros[e]);
		}
	}

	total = suma(numeros, TAMANO);  //Llamada a la funci�n suma

	//imprimimos la suma total de los elementos
	printf("\nSuma total de los elementos del array: %d\n", total);
}

//Funci�n suma()
int suma(int num[], size_t tam) {

	//Suma total de los elementos
	int tsuma = 0;

	//Recorrer el array
	for (size_t e = 0; e < tam; e++) {

		tsuma = tsuma + num[e];  //Suma de todos los valores
	}

	return tsuma;  //Retornar la suma de los valores
}