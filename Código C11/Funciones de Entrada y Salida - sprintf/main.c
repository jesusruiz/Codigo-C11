/*
La función sprintf() para imprimir datos formateados en una matriz s, una matriz de caracteres.
La función utiliza los mismos especificadores de conversión que la función printf().

El programa introduce un valor int y un valor doble para ser formateados e impresos en el array s.
Array s es el primer argumento de la función sprintf().

[Nota: si su sistema admite la función snprintf_s() incluida en el estándar C11, utilícela en lugar de sprintf(). 
Si su sistema no es compatible con snprintf_s() pero sí con snprintf(), utilícela en lugar de sprintf().
*/

//para poder utilizar la función sprintf() en Visual Studio a pesar de no ser recomendada por seguridad
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#define TAMANO 80

int main(void) {

	int x; //valor 'x' de tipo int para ser introducido
	double y; //valor 'y' de tipo double para ser introducido

	puts("Introduzca un valor de tipo entero y un valor de tipo double:");
	scanf_s("%d%lf", &x, &y);

	char s[TAMANO];  //crear un array de caracteres que puede tener 80 caracteres (contando con el caracter fin de cadena)
	sprintf(s, "entero:%6d\ndouble:%7.2f", x, y);

	printf("%s\n%s\n", "La salida formateada almacenada en el array s es:", s);
}