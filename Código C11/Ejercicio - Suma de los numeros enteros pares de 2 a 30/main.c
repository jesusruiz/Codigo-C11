#include <stdio.h>

//Ejercicio - Suma de los numeros enteros pares de 2 a 30

int main(void) {

	unsigned int contador;
	unsigned int total = 0;

	for (contador = 2; contador <= 30; contador += 2) {
		total = total + contador;
	}

	printf("La suma de los numeros enteros pares de 2 a 30 es: %u\n", total);

	return 0;
}
