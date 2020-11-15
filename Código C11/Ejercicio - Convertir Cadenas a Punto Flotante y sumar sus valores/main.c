/*
Ejercicio - Convertir Cadenas a Punto Flotante y sumar sus valores

Escriba un programa que ingrese dos cadenas que representen números en punto flotante,
convierta las cadenas en números flotantes, sume los valores e imprima el total de los valores.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

	char cadena1[12] = "";
	char cadena2[12] = "";

	printf("%s", "Introduzca un numero flotante menor de 11 cifras: ");
	scanf_s("%s", cadena1, 11);

	printf("\n%s", "Introduzca otro numero flotante menor de 11 cifras: ");
	scanf_s("%s", cadena2, 11);

	printf("\nLos numeros introducidos fueron: %f y %f\n", atof(cadena1), atof(cadena2));

	printf("\nLa suma de los numeros introducidos es de: %f\n", atof(cadena1) + atof(cadena2));

	return 0;
}