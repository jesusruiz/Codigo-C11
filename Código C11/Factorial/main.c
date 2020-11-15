#include <stdio.h>

//Factorial

int main(void) {

	int numero;
	int total = 1;

	printf("Introduzca el factorial del numero que desea calcular: ");
	scanf_s("%d", &numero);

	for (int contador = numero; contador >= 1; contador--) {
		total = total * contador;
	}

	printf("\n%d", total);
}