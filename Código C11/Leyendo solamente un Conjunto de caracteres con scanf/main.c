/*

Se puede introducir una secuencia de caracteres usando un conjunto de escaneo. 
Un conjunto de escaneo es un conjunto de caracteres encerrados entre corchetes, [], 
y precedidos por un signo de porcentaje en la cadena de control de formato.

Un conjunto de escaneo escanea los caracteres en el flujo de entrada, buscando solo aquellos caracteres 
que coincidan con los caracteres contenidos en el conjunto de escaneo. 

Cada vez que se hace coincidir un carácter, se almacena en el argumento correspondiente del conjunto de exploración: 
un puntero a una matriz de caracteres. 

El conjunto de exploración deja de ingresar caracteres cuando se encuentra un carácter que no está 
contenido en el conjunto de exploración.
Si el primer carácter del flujo de entrada no coincide con un carácter del conjunto de exploración, 
la matriz no se modifica.
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main(void) {

	char z[9];  //define un array de 9 caracteres como máximo (incluyendo el caracter de fin de cadena '\0')

	printf("%s", "Introduzca una cadena: ");
	scanf_s("%8[aeiou]", z, 8);  //introducir solamente en el array z los caracteres incluidos entre corchetes (vocales)
	                        //se dejan de introducir caracteres en el array ante la primera entrada de una consonante

	printf("Las vocales que introdujo antes de introducir la primera consonante fueron \"%s\"\n", z);
}