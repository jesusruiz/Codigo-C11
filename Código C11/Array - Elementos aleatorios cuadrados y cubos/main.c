//Array - Elementos aleatorios y cálculo de cuadrados y cubos de los mismos

#include <stdio.h>
#include <time.h>
#define TAMANO 10

//Funciones prototipo
void calcularNumerosAleatorios(int num[], int Tam);
void imprimirArray(const int num[], int tam);

//Función inicio de programa
int main(void) {

	int numeros[10] = { 0 };

	calcularNumerosAleatorios(numeros, TAMANO);
	imprimirArray(numeros, TAMANO);
}

//Función calcularNumerosAleatorios
void calcularNumerosAleatorios(int num[], int tam) {

	srand(time(NULL));

	for (int contador = 0; contador < TAMANO; contador++) {
		//almacenar numero aleatorio entre 1 y 10
		num[contador] = 1 + (rand() % 10);
	}
}

//Función imprimirArray
void imprimirArray(const int num[], int tam) {

	for (int contador = 0; contador < tam; contador++) {
		printf("%d\t", num[contador]);
		printf("Cuadrado: %d\t", num[contador] * num[contador]);
		printf("Cubo: %d\n", num[contador] * num[contador] * num[contador]);
	}
}