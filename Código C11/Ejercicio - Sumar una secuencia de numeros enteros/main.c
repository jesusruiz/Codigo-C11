#include <stdio.h>

//Ejercicio - Sumar una secuencia de números enteros

int main(void) {

	unsigned int contador;
	unsigned int cantNumeros;
	unsigned int numero;
	unsigned int total = 0;

	printf("%s", "Introduzca la cantidad de numeros que desea introducir para que sean sumados: ");
	scanf_s("%u", &cantNumeros);

	for (contador = 1; contador <= cantNumeros; contador++) {
		printf("Introduzca el valor del numero %u: ", contador);
		scanf_s("%u", &numero);
		total = total + numero;
	}

	printf("\nEl valor total de los %u numeros introducidos es: %u\n", cantNumeros, total);

	return 0;
}