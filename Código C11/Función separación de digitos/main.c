//Función Separación de dígitos

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int separacionDigitos(int num);  //Función prototipo

int main(void) {

	int numero;
	int numDigitos;

	bool ok = false;

	do {
		printf("Introduzca un numero entre 1 y 9999: ");
		scanf_s("%d", &numero);
		if (numero >= 1 && numero <= 9999)
			ok = true;
	} while (ok == false);

	if (numero <= 1 && numero <= 9) {
		printf("%d", numero);
	}
	else if (numero >= 10 && numero <= 99) {
		printf("%d  ", numero / 10);
		printf("%d  ", numero % 10);
	}
	else if (numero >= 100 && numero <= 999) {
		int segundo_digito = numero / 10;
		printf("%d  ", numero / 100);
		printf("%d  ", segundo_digito % 10);
		printf("%d  ", numero % 10);
	}
	else if (numero >= 1000 && numero <= 9999) {
		int segundo_digito = numero / 100;
		int tercer_digito = numero / 10;
		printf("%d  ", numero / 1000);
		printf("%d  ", segundo_digito % 10);
		printf("%d  ", tercer_digito % 10);
		printf("%d  ", numero % 10);
	}
}