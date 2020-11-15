/*
Ejercicio - Convertir Cadenas a Enteros y sumar sus valores

Escriba un programa que ingrese dos cadenas que representen números enteros, 
convierta las cadenas en números enteros, sume los valores e imprima el total de los valores.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

	char cadena1[6] = "";
	char cadena2[6] = "";

	printf("%s", "Introduzca un numero entero menor de 5 cifras: ");
	scanf_s("%s", cadena1, 5);

	printf("\n%s", "Introduzca otro numero entero menor de 5 cifras: ");
	scanf_s("%s", cadena2, 5);

	printf("\nLos numeros introducidos fueron: %d y %d\n", atoi(cadena1), atoi(cadena2));

	printf("\nLa suma de los numeros introducidos es de: %d\n", atoi(cadena1) + atoi(cadena2));

	return 0;
}