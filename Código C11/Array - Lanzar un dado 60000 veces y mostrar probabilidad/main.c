//Array - Lanzar un dado 60000 veces y mostrar probabilidad de resultados

#include <stdio.h>
#include <time.h>
#include <math.h>

#define TAMANO 7

int main(void) {

	unsigned int frecuencia[TAMANO] = { 0 };  //todas las frecuencias inciailizadas a cero

	srand(time(NULL));  //semilla para generar los números aleatorios

	//tirar el dado 60000 veces
	for (unsigned int tirada = 1; tirada <= 60000; tirada++) {
		size_t caraDelDado = 1 + rand() % 6;  //la tirada tendrá que ser de 1 a 6
		++frecuencia[caraDelDado];  //sumamos uno a la posición ocupada por la cara del dado del array frecuencia
								    //tras lanzar el dado
	}

	printf("%s%14s", "Cara", "Frecuencia\n");

	//imprimimos los resultados de las frecuencias (probabilidades) obtenidas
	for (size_t cara = 1; cara < TAMANO; cara++) {
		printf("%u%16u\n", cara , frecuencia[cara]);
	}

}