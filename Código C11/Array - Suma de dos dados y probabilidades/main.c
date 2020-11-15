/*
Programa que simula el lanzamiento de dos dados. El programa debe usar la funci�n rand() dos veces 
para tirar el primer dado y el segundo dado, respectivamente. La suma de los dos valores debe ser calculada. 
[Nota: Debido a que cada dado puede mostrar un valor entero de 1 a 6, entonces la suma de
los dos valores variar�n de 2 a 12, siendo 7 la suma m�s frecuente y 2 y 12 la menor
sumas frecuentes.]

El programa debe tirar los dos dados 36.000 veces. 

Utilizar una matriz unidimensional para contar el n�mero de veces que aparece cada suma posible. 
Imprimir los resultados en formato tabular.

Adem�s, determinar si los totales son razonables; es decir, hay seis formas de sacar un 7, 
por lo que aproximadamente una sexta parte de todos los lanzamientos deber�an ser 7.
*/

#include <stdio.h>
#include <time.h>
#define TAMANO 11

//funcion prototipo
void calcularFrecuencia(int sumdados, int frecuencia[]);
void imprimirArrayFrecuencia(int tam, const int frecuencia[]);

int main(void) {

	int dado1, dado2;  //almacenar los lanzamientos de los dos dados
	int sumaDados;  //almacenar la suma de los dos datos
	int frecuencia[TAMANO] = { 0 };  //Array unidimensional para almacenar la frecuencia de la suma de los dos dados (de 2 a 12)  

	srand(time(NULL));

	//Lanzamiento de 36.000 tiradas de dados
	for (int contador = 0; contador <= 36000; contador++) {
		dado1 = 1 + (rand() % 6);
		dado2 = 1 + (rand() % 6);

		sumaDados = dado1 + dado2;

		calcularFrecuencia(sumaDados, frecuencia);
	}

	imprimirArrayFrecuencia(TAMANO, frecuencia);
}

//Funci�n calcular frecuencia de la suma de los dados
void calcularFrecuencia(int sumdados, int frecuencia[]) {

	switch (sumdados)
	{
		case 2 :
			//sumar 1 a la posici�n del array unidimensional destinada al 2 (posici�n del array 0)
			frecuencia[0] = frecuencia[0] + 1;
			break;

		case 3:
			//sumar 1 a la posici�n del array unidimensional destinada al 3 (posici�n del array 1)
			frecuencia[1] = frecuencia[1] + 1;
			break;

		case 4:
			//sumar 1 a la posici�n del array unidimensional destinada al 4 (posici�n del array 2)
			frecuencia[2] = frecuencia[2] + 1;
			break;

		case 5:
			//sumar 1 a la posici�n del array unidimensional destinada al 5 (posici�n del array 3)
			frecuencia[3] = frecuencia[3] + 1;
			break;

		case 6:
			//sumar 1 a la posici�n del array unidimensional destinada al 6 (posici�n del array 4)
			frecuencia[4] = frecuencia[4] + 1;
			break;

		case 7:
			//sumar 1 a la posici�n del array unidimensional destinada al 7 (posici�n del array 5)
			frecuencia[5] = frecuencia[5] + 1;
			break;

		case 8:
			//sumar 1 a la posici�n del array unidimensional destinada al 8 (posici�n del array 6)
			frecuencia[6] = frecuencia[6] + 1;
			break;

		case 9:
			//sumar 1 a la posici�n del array unidimensional destinada al 9 (posici�n del array 7)
			frecuencia[7] = frecuencia[7] + 1;
			break;

		case 10:
			//sumar 1 a la posici�n del array unidimensional destinada al 10 (posici�n del array 8)
			frecuencia[8] = frecuencia[8] + 1;
			break;

		case 11:
			//sumar 1 a la posici�n del array unidimensional destinada al 11 (posici�n del array 9)
			frecuencia[9] = frecuencia[9] + 1;
			break;

		case 12:
			//sumar 1 a la posici�n del array unidimensional destinada al 8 (posici�n del array 10)
			frecuencia[10] = frecuencia[10] + 1;
			break;
	}
}

void imprimirArrayFrecuencia(int tam, const int frecuencia[]) {

	for (int elementos = 0; elementos < tam; elementos++) {
		printf("Suma dados: %d -> \t%d\n", elementos + 2, frecuencia[elementos]);
	}
}