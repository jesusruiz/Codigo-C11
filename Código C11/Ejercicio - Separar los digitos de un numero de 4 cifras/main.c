#include <stdio.h>

int main(void) {

	int numero;
	int temporal;
	int primerDigito, segundoDigito, tercerDigito, cuartoDigito;

	do {
		printf("Introduzca un numero de 4 cifras: ");
		scanf_s("%d", &numero, 4);
	} while (numero < 1000 || numero > 10000);

	primerDigito = numero / 1000;
	printf("%d\n", primerDigito);

	temporal = numero % 1000;
	printf("%d\n", temporal);

	segundoDigito = temporal / 100;
	printf("%d\n", segundoDigito);

	temporal = numero % 100;
	printf("%d\n", temporal);

	tercerDigito = temporal / 10;
	printf("%d\n", tercerDigito);

	temporal = numero % 10;
	printf("%d\n", temporal);

	cuartoDigito = temporal;
	printf("%d\n", cuartoDigito);

	printf("%d%d%d%d", primerDigito, segundoDigito, tercerDigito, cuartoDigito);
}