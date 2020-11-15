/*
Ejercicio - Comparar dos cadenas introducidas por el usuario

El programa debe indicar si la primera cadena es menor, igual o mayor que la segunda cadena.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	char cadena1[30];
	char cadena2[30];

	printf("%s", "Introduzca una cadena: ");
	fgets(cadena1, 29, stdin);

	printf("%s", "Introduzca otra cadena: ");
	fgets(cadena2, 29, stdin);

	printf("\nLas cadenas introducidas fueron: \n%s\n%s", cadena1, cadena2);

	//Función strcmp()
	//si las cadenas son iguales retornara un valor 0, 
	//si la primera cadena es mayor retornara un valor positivo 
	//y si es menor retornara un valor negativo.
	if (strcmp(cadena1, cadena2) == 0) {
		printf("\nLas cadenas introducidas son iguales\n");
	}
	else if (strcmp(cadena1, cadena2) >= 1) {
		printf("\nLa primera cadena es mayor que la segunda cadena\n");
	}
	else {
		printf("\nLa segunda cadena es mayor que la primera cadena\n");
	}
	
	return 0;
}
