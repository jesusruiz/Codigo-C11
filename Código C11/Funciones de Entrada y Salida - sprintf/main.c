/*
La funci�n sprintf() para imprimir datos formateados en una matriz s, una matriz de caracteres.
La funci�n utiliza los mismos especificadores de conversi�n que la funci�n printf().

El programa introduce un valor int y un valor doble para ser formateados e impresos en el array s.
Array s es el primer argumento de la funci�n sprintf().

[Nota: si su sistema admite la funci�n snprintf_s() incluida en el est�ndar C11, util�cela en lugar de sprintf(). 
Si su sistema no es compatible con snprintf_s() pero s� con snprintf(), util�cela en lugar de sprintf().
*/

//para poder utilizar la funci�n sprintf() en Visual Studio a pesar de no ser recomendada por seguridad
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